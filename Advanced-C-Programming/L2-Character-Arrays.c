//look into this program first
#include <stdio.h>
int main(int argc, char** argv){
    char* message = "Hello World!";
    printf("String Value: %s,\nAddress of First Element: %d,\nAddress of Array: %d,\nPrinting String as a decimal: %d\n",message,&message[0],&message,message);
    return 0;
}
//When declaring array as "char message[] = "Hello World!";"
//String Value: Hello World!,
//Address of First Element: 1876947128,
//Address of Array: 1876947128,
//Printing String as a decimal: 1876947128

//When declaring array as "char* message = "Hello World!";"
//String Value: Hello World!,
//Address of First Element: 16176,
//Address of Array: 1876947128,
//Printing String as a decimal: 16176

