#include <stdio.h>
int main(int argc, char** argv){
    char str1[] = "Hello!";
    char* str2 = "Hello!";
    printf("Str1: &str1: %d, str1(address): %d, str1[0](address): %d, str1(value): %s\n",&str1,str1,&str1[0],str1);
    //just str[0] with %d would print ASCII value of character
    printf("Str2: &str2: %d, str2(address): %d, str2[0](address): %d, str2(value): %s\n",&str2,str2,&str2[0],str2);
    //OUTPUT:
    //Str1: &str1: 1876947128, str1(address): 1876947128, str1[0](address): 1876947128, str1(value): Hello!
    //Str2: &str2: 1876947120, str2(address): 16136, str2[0](address): 16136, str2(value): Hello!
    
    //So basically when you creaet a pointer to char to store a string, the pointer variable is stored in a separate memory address
    //and the address it stores as value is the address of the first element of the array
    
    //On the other hand, when you create a char array using the array notation, the variable's address is the address of the first array element and
    //the value stored in the variable is the address that points to the first element of the array
    
    
}
