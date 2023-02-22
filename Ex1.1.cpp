//de ca truoc//
#include<iostream>
#include<math.h>
using namespace std;

double cal(double x, double n, double sum)
{
    double value;
    value = (1/(2*x*(2*x-1)));
    sum += value;
    if (x == n)
        return sum;
    else return cal(x + 1, n, sum);
}

int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    cout << cal(1, n, 1/2);
    return 0;
}