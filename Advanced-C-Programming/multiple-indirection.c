#include <stdio.h>
#define LENGTH 3
int data[LENGTH];

int main(int argc, char** argv){
    int* pi;
    int** ppi;
    
    for(int i = 0; i < LENGTH ; i++){
        data[i]=i;
    }
    
    for(int i=0;i<LENGTH;i++){
        printf("%d\n",data[i]);
    }
    
    pi = data;
    ppi = &pi;
    for(int i = 0; i<LENGTH; i++){
        printf("\n Loop iteration: [%d], array address is %p\n",i,data);
        printf("Item pointed to by pi is %d\n",*pi);
        printf("Item pointed to by ppi is %p\n",*ppi);
        printf("Item pointed to by double indirection of ppi is %d\n",**ppi);
        printf("The address of pi is %p and the value of pi (what pi points to) is %p\n",&pi,ppi);
        pi++;
    }
    return 0;
}
