#include <stdio.h>
#include <math.h>
 
double ln(double x)
{
    x = x - 1;
    if (-1 <= x && x <= 1)
    {
        double t = x, _ln = x; long k = 1;
        do
            {
                t = -t*x*k/(k+1);
                _ln = _ln + t;
                k++;
            }  while (_ln != _ln +t);
        return _ln;
    }
    else return ln(1 + 1/x) - ln(1/x);
}
 
void main()
{   
    //thay x tùy ý//
    double x = 5;
    printf("\nHam cua ta viet, ln(%lf)= %.13lf\n",x,ln(x));
    printf("\nHam cua math.h, log(%lf)= %.13lf\n",x,log(x));
}