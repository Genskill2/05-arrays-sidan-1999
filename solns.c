/* Enter your solutions in this file */
#include <stdio.h>

float average(int k[], int n){
    float sum=0.00;
    for (int i=0;i<n;i++){
        sum+=k[i];
    }
    float result=sum/n ;
    return result;
}

