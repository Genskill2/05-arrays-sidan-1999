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

int min(int k[], int n){
    int minimum=k[0];
    for (int i=0;i<n;i++){
        if (k[i]<minimum){
            minimum=k[i];
        }
    }
    return minimum;
}


float average(int k[], int n){
    float sum=0.00;
    for (int i=0;i<n;i++){
        sum+=k[i];
    }
    float result=sum/n ;
    return result;
}



int mode(int a[],int n) {
   int mod , max = 0;

   for (int i= 0; i < n; ++i) {
      int count = 0;
      
      for (int j= 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > max) {
         mod = a[i];
      }
   }

   return mod;
}



int factors(int n, int k[]){
    int prime,a=0,b=0;
    for (int i=2;n>1;i++){
        while (n%i==0){
            k[a]=i;
            a++;
            n=n/i;
            b++;
            
        }
    }
    
    return b;
    
}

