/* Enter your solutions in this file */
#include <stdio.h>

int max(int k[], int n){
    int maximum=k[0];
    for (int i=0;i<n;i++){
        if (k[i]>maximum){
            maximum=k[i];
            
        }
    }
    return maximum;
    
}

float average(int k[], int n){
    float sum=0.00;
    for (int i=0;i<n;i++){
        sum+=k[i];
    }
    float result=sum/n ;
    return result;
}

