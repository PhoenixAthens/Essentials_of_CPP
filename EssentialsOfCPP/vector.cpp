#include <iostream>
#include <format>
#include <string>
#include <vector>

using std::format;
using std::vector;
using std::cout;

int main(int argc, char** argv){
    cout<<format("Vector from initializer list: \n");
    vector<int> vi1 {0+20,1+20,2+4,3+11,4+45,5+12,6+4,7+9,8+17,9+34};
    cout<<format("Size of vector: {}\n",vi1.size()); // Size of vector: 10
    cout<<format("Front of vector: {}\n",vi1.front()); // Front of vector: 20
    cout<<format("Back of vector: {}\n",vi1.back()); // Back of vector: 43
    
    cout<<format("Iterators: \n");
    auto vBegin = vi1.begin(); //this is a pointer to beginning of the vector
    cout<<format("Type of vBegin: {}\n",typeid(vBegin).name());//Type of vBegin: NSt3__111__wrap_iterIPiEE
    //cout<<format("Type of vBegin: {}\n",typeid(vBegin));
    //Call to consteval function 'fmt::basic_format_string<char, const std::type_info &>::basic_format_string<char[20], 0>' is not a constant expression

    auto vEnd = vi1.end();
    for(auto i = vBegin; i<vEnd; ++i){
        cout<<format("{} ",*i); //20 21 6 14 49 17 10 16 25 43
    }
    cout<<"\n";
    
    //Elements at certain indeex:
    cout<<format("At index 5 (using [] notation): {}\n",vi1[5]); // At index 5 (using [] notation): 17
    cout<<format("At index 5 (using .at method): {}\n",vi1.at(5)); // At index 5 (using .at method): 17
    
    cout<<"range-based for-loop\n";
    for(const auto& a: vi1){
        cout<<format("{} ",a); //20 21 6 14 49 17 10 16 25 43
    }
    cout<<"\n";
    
    //insert element at certain index
    cout<<"insert 42 at begin + 5\n";
    vi1.insert(vi1.begin()+5,42);
    cout<<format("Size of vector: {}\n",vi1.size()); // 11
    cout<<format("element 5: {}\n",vi1.at(5)); // 42
    
    for(const auto& a: vi1){
        cout<<format("{} ",a); //20 21 6 14 49 42 17 10 16 25 43
    }
    cout<<"\n";
    
    //erase an element from the vector
    cout<<"Erase 17 at index 6 from vector\n";
    vi1.erase(vi1.begin()+6);
    cout<<format("Size of vector: {}\n",vi1.size()); // 10
    cout<<format("element 6: {}\n",vi1.at(6)); // 10
     
    for(const auto& a: vi1){
        cout<<format("{} ",a); //20 21 6 14 49 42 10 16 25 43
    }
    cout<<"\n";
    
    //using the push_back function
    cout<<"push_back the value 108\n";
    vi1.push_back(108);
    cout<<format("Size of vector: {}\n",vi1.size()); //11
    cout<<format("element at end: {}\n",vi1.back()); //element at end: 108
    
    for(const auto& a: vi1){
        cout<<format("{} ",a); //20 21 6 14 49 42 10 16 25 43 108
    }
    cout<<"\n";
    
    //initializing vector with a c-array;
    const int size = 10;
    int arr[size] {20, 21, 6, 14, 49, 42, 10, 16, 25, 43};
    vector<int> vi2 {arr,arr+size};
    for(const int& a: vi2){
        cout<<format("{} ",a); // 20 21 6 14 49 42 10 16 25 43
    }
    cout<<"\n";
   
    //vector of Strings
    vector<std::string> vi3 {"one","two","drei","vier","fünf"};
    for(const auto& s: vi3){
        cout<<format("{} ",s); //one two drei vier fünf
    }
    cout<<"\n";
    
    
}
