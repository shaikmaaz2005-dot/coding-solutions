#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n,int k){
    int max_and=0;
    int max_or=0;
    int max_xor=0;
    
    //loop through all unique pairs(i,j) where 1<=i<j<=n
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int current_and=i&j;
            int current_or=i|j;
            int current_xor=i^j;
            
            // check if value are strictly less than k and greater than the current max
            if (current_and>max_and && current_and<k){
                max_and=current_and;
            }
            if (current_or>max_or&& current_or<k){
                max_or=current_or;
            }
            if(current_xor>max_xor&& current_xor<k){
                max_xor=current_xor;
            }
        }
    }
    //print the final maximum values
    printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}
int main(){
    int n, k;
    //Reads the space-separated integers n and k(e.g.,5 4)
    if(scanf("%d %d", &n ,&k)==2){
        calculate_the_maximum(n, k);
    }
    return 0;
}
