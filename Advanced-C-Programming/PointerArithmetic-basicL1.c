#include <stdio.h>
int main(int argc, char** argv){
    int arr[] = {100,200,300,400,500};
    int* p = arr;
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        printf("The value is %d, address is %d\n",*p,p++);
    }
}
//OUTPUT: wiht %p
//The value is 100, address is 0x16fdff0b0
//The value is 200, address is 0x16fdff0b4
//The value is 300, address is 0x16fdff0b8
//The value is 400, address is 0x16fdff0bc
//The value is 500, address is 0x16fdff0c0

//OUTPUT: with %d
//The value is 100, address is 1876947120
//The value is 200, address is 1876947124
//The value is 300, address is 1876947128
//The value is 400, address is 1876947132
//The value is 500, address is 1876947136

/*
 if we code our for-loop like so
 int arr[] = {100,200,300,400,500};
 int* p = arr;
 for(;*p;p++){
     printf("The value is %d, address is %p\n",*p,p);
 }
 
 OUTPUT:
 The value is 100, address is 0x16fdff0b0
 The value is 200, address is 0x16fdff0b4
 The value is 300, address is 0x16fdff0b8
 The value is 400, address is 0x16fdff0bc
 The value is 500, address is 0x16fdff0c0
 The value is 1, address is 0x16fdff0c4
 The value is 2092105904, address is 0x16fdff0c8
 The value is -45157570, address is 0x16fdff0cc
 The value is 1876947712, address is 0x16fdff0d0
 The value is 1, address is 0x16fdff0d4
 The value is -1740037920, address is 0x16fdff0d8
 The value is 1, address is 0x16fdff0dc
 */
    
