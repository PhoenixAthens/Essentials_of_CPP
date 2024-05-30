#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::format;
using std::string;

int main(int argc, char** argv){
    string s1 {"I am a string"};
    
    cout<< format("length is the same as size: {}\n",s1.length());
    cout<< format("size is the same as length: {}\n",s1.size());
//    length is the same as size: 13
//    size is the same as length: 13
    
    cout<<format("String Concatenation: \n");
    string s2 = s1 + ":" + "this is also a string";
    cout << format("{}\n",s2); //I am a string:this is also a string
    
    
    cout<<format("Copying and comparing strings: \n");
    //comparing strings with '=='
    cout<<format("is s1 == s2 ? (y/n) {}\n",s1==s2?"y":"n");
    s2 = s1; //copy-assing s2 = s1
    cout<<format("is s1 == s2 ? (y/n) {}\n",s1==s2?"y":"n");
//    is s1 == s2 ? (y/n) n
//    is s1 == s2 ? (y/n) y
    
    string otrStr {"other string"};
    cout<<format("is s1 > otrStr?(y/n) {}\n",s1>otrStr?"y":"n");
    cout<<format("is s1 < otrStr?(y/n) {}\n",s1<otrStr?"y":"n");
    cout<<format("is otrStr > s1?(y/n) {}\n",otrStr>s1?"y":"n");
    cout<<format("is otrStr < s1?(y/n) {}\n",otrStr<s1?"y":"n");
//    is s1 > otrStr?(y/n) n
//    is s1 < otrStr?(y/n) y
//    is otrStr > s1?(y/n) y
//    is otrStr < s1?(y/n) n
    
    //range based for-loop on strings
    cout<<format("printing each character: ");
    for(const auto& c: s1){
        cout<<format("{} ",c); //printing each character: I   a m   a   s t r i n g
    }
    cout<<"\n";
    
    //inserting character in strings
    s1.insert(s1.begin()+5,'X');
    cout<<format("s1 after insert: {}\n",s1); //s1 after insert: I am Xa string
    
    //erasing characters from string
    s1.erase(s1.begin()+5);
    cout<<format("s1 after erase: {}\n",s1); //s1 after erase: I am a string
    
    //replace words in string
    s1.replace(5,1,"not a");
    cout<<format("s1 after replace: {}\n",s1);//s1 after replace: I am not a string
    
    //extracting substring
    cout<<format("Substring of 5 chars from index 5: {}\n",s1.substr(5,5)); //Substring of 5 chars from index 5: not a
    
    s1 = s1+"s";
    //using left-find
    int post = s1.find('s'); //this position will be 0 based!
    cout<<format("first occurence of 's' in {} is  at position {}\n",s1,post);
    //first occurence of 's' in I am not a strings is  at position 11
    
    post = s1.rfind('s');
    cout<<format("last occurence of 's' in {} is  at position {}\n",s1,post);
    //last occurence of 's' in I am not a strings is  at position 17
    
    //using right-find
}
