// Ambiguity based on default arguments plus overloading .
# include <iostream >
using namespace std ;
int f( int a)
{
return a*a;
}
int f( int a, int b = 0)
{
return a*b;
}
int main ()
{
cout << f(10 , 2); // calls f(int , int )
cout << f (10) ; // ambiguous - call f(int ) or f(int , int )?
return 0;
}
