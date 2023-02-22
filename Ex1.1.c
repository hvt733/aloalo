#include<stdio.h>
#include<math.h>

double pi(double x, double n, double sum)
{
    double value;
    value = ((4/(4*n+1))-(4/(4*n+3)));
    sum += value;
    if (x == n)
        return sum;
    else return pi(x + 1, n, sum);
}

int main()
{
    int n;
    printf("Insert number n: ");
    scanf("%f",&n);
    printf("%f",pi(0, n, 8/3));
    return 0;
}


