#include <iostream>
#include <format>

using std::cout;
using std::string;

int main(int argc, char** argv){
    string text[] = {"one", "two", "three"};
    string* ptext = text;
    for(int i = 0; i < sizeof(text)/sizeof(string); i++){
        cout<<fmt::format("{} ",text[i]);
    }
    cout<<"\n";
    
    for(int i = 0; i< sizeof(text)/sizeof(string); i++){
        cout<<fmt::format("{} ",ptext[i]);
    }
    cout<<"\n";
    
    for(int i=0;i<sizeof(text)/sizeof(string);i++){
        cout<<fmt::format("{} ",*(ptext+i));
    }
    cout<<"\n";
    
    //this doesn't work, error = Invalid range expression of type 'string *' (aka 'basic_string<char> *'); did you mean to dereference it with '*'?
//    for(auto& c: ptext){
//        cout<<fmt::format("{} ",c);
//    }
    cout<<"\n";
    
    for(int i = 0 ;i < sizeof(text)/sizeof(string); i++){
        cout<<fmt::format("size of {} is {}\n",*(ptext+i),sizeof(*(ptext+i)));
    }
    
    //reversing a string in place
    char word[] = "Juliet Longen";
    int lastIndex = sizeof(word)-2;
    cout<<fmt::format("size of word/2: {}\n",sizeof(word));
    for(int i=0; i<sizeof(word)/2; i++, lastIndex--){
        if(word[i]!=word[lastIndex]){
            word[i] = (word[i] | word[lastIndex]) & ~(word[i] & word[lastIndex]);
            word[lastIndex] = (word[i] | word[lastIndex]) & ~(word[i] & word[lastIndex]);
            word[i] = (word[i] | word[lastIndex]) & ~(word[i] & word[lastIndex]);
        }
        cout<<fmt::format("we have at {}->{}, {}->{}\n",i,word[i],lastIndex,word[lastIndex]);
    }
    for(int i = 0;i < sizeof(word);i++){
        cout<<word[i];
    }
    cout<<"\n";
    cout<<fmt::format("word: {}\n",word);
}
