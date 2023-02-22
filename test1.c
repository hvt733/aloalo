#include <stdio.h>
#include <math.h>
double calculate(int n){
    double value;
    double sum=1/2;
    for(int i=1 ; i<n ; i++){
        value=pow(-1,i+1)/((i)*(i+1));
        sum=sum+value;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%f", calculate(n));
}
