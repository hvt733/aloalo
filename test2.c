#include <stdio.h>
#include <math.h>
double pi(int n){
    if(n>=0){
        int value = 4/(4*n+1)-4/(4*n+3);
    }
    else
        return 0;
    return pi(n+1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%f", pi(n));
}