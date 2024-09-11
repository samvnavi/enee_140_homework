#include<stdio.h>
#define start 10
#define end 50
#define step 5

int main(){
    float mpg_val,lpk_val;
    //miles per gallon to  litres per 100km
    for (mpg_val = start; mpg_val<= end; mpg_val += step){
        lpk_val = (1.0 / ((mpg_val * 1.60934)/ 3.78541))* 100 ;
        printf("%f %f\n",mpg_val,lpk_val);
    }
}