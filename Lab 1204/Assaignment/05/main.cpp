# include <iostream >
using namespace std ;
class base
{
public :
base () { cout << " Constructing base class \n"; }
~ base () { cout << " Destructing base class \n"; }
};
class derived : public base
{
public :
derived () { cout << " Constructing derived class \n"; }
~ derived () { cout << " Destructing derived class \n"; }
};
int main ()
{
derived o;
return 0;
}
