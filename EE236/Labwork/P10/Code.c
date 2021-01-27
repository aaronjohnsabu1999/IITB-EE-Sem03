#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

long double esi = 1.05*pow(10,-10);
long double wt = 125.064*pow(10, -9);
long double q = 1.602176565*pow(10,-19);
long double ni = 9.817*pow(10,9);
long double k = 1.3806*pow(10, -23);
float T = 300.0;
long double c = (4*esi*k*T)/(q*q);
long double f1(long double x)
{
    return (c*log(x/ni)/x)-(wt*wt));
}
long double fprime(long double x)
{
    return (f(x+0.01)-f(x))/0.01);
}
int main()
{
    long double m = pow(10,15);
    while(f(m)>(2*pow(10,-8))||f(m)<(-2*pow(10,-8))
        m = m-(f(m)/fprime(m));
    cout<<m<<endl;
    return 0;
}
