#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char** argv){
    int a;
    srand((unsigned)time(NULL));
    for(a = 0; a<10; a++){
        printf("%4d ",rand()%100+1);
    }
    putchar('\n');
    
    return 0;
}
//OUTPUT
//  11   43   76   58   99   71   15   56   86   79 
