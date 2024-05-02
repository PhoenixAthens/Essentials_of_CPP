#include <stdio.h>
int main(int argc, char** argv){
    int* ptr; //This can also be written as int *ptr, * can come anywhere between data-type and variable name
    int num;
    int num2;
    num = 100;
    ptr = &num;
    num2 = *ptr;
    printf("The value stored in ptr is %d, i.e. a pointer to an address,\nthe value in memory at that address is %d\n",ptr,*ptr);
    printf("The value stored in ptr is the address of num in memory, i.e., %d which can be verified as &num == ptr equals %d\n",&num,(&num == ptr));
//    The value stored in ptr is 1876947220, i.e. a pointer to an address,
//    the value in memory at that address is 100
//    The value stored in ptr is the address of num in memory, i.e., 1876947220 which can be verified as &num == ptr equals 1
//
}
