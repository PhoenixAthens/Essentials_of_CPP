#include <format>
#include <iostream>
#include <memory>
#include <string>
#include <exception>

using std::format;
using std::exception;
using std::string;
using std::cout;

namespace AK{
class S_err: public exception{
    const char* msg;
public:
    S_err() = delete;
    explicit S_err(const char* s) noexcept : msg(s){}
    const char* what() const  noexcept { return msg; }
};

template <typename T>
class Stack{
    static const int default_size {10};
    static const int max_size {1000};
    int S_size {};
    int S_top {};
    std::unique_ptr<T[]> S_ptr {};
public:
    explicit Stack(int s = default_size);
    ~Stack() { if(S_ptr) S_ptr.release(); }
    T& push(const T&);
    T& pop();
    bool is_empty() const { return S_top < 0; }
    bool is_full() const { return S_top >= S_size - 1; }
    int top() const { return S_top; }
    int size() const { return S_size; }
};

// Stack<T> constructor
template<typename T>
Stack<T>::Stack(int s){
    if(s > max_size || s < 1) throw S_err("invalid stack size");
    else S_size = s;
    S_ptr.reset(new T[S_size]);
    S_top = -1;
}

template<typename T>
T& Stack<T>::push( const T& i){
    if(is_full()) throw S_err("Stack full");
    return S_ptr[++S_top] = i;
}

template<typename T>
T& Stack<T>::pop(){
    if(is_empty()) throw S_err("Stack empty");
    return S_ptr[S_top--];
}
}
int main(int argc, char** argv){
    AK::Stack<int> si {5};
    AK::Stack<string> ss {5};
    try{
        cout<< format("si size: {}\n",si.size());
        cout<< format("si top: {}\n",si.top());
        for(int i : {1,2,3,4,5}){
            si.push(i);
        }
        
        cout<< format("si top after pushes: {}\n",si.top());
        cout<< format("si is {} full\n", si.is_full()?"":"not ");
        
        while(!si.is_empty()){
            cout<<format("popped: {}\n",si.pop());
        }
        
        cout<<format("ss size: {}\n",ss.size());
        cout<<format("ss top: {}\n",ss.top());
        
        for(const char* s: {"one", "two", "three", "four", "five"}){
            ss.push(s);
        }
        
        cout<<format("ss top after pushes: {}\n",ss.top());
        cout<<format("ss is {}full\n",ss.is_full()?"":"not ");
        
        while(!ss.is_empty()){
            cout<<format("popped {}\n",ss.pop());
        }
        
    }catch(AK::S_err& e){
        cout<<format("Stack error: {}\n",e.what());
        return 1;
    }
}
//OUTPUT:

//si size: 5
//si top: -1
//si top after pushes: 4
//si is  full
//popped: 5
//popped: 4
//popped: 3
//popped: 2
//popped: 1
//ss size: 5
//ss top: -1
//ss top after pushes: 4
//ss is full
//popped five
//popped four
//popped three
//popped two
//popped one
//Program ended with exit code: 0
