#include<stdio.h>


int main(){
    int inp,count;
    count = 0;
    while((inp = getchar()) != EOF) {
        if (inp == 'a'){
            count++;
        }
    };
    printf("\nnumber of a's in the input: %d \n",count);
    return 0;

}