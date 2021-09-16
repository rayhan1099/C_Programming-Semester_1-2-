# include <iostream >
using namespace std ;
class myclass
{ 
int a;
public :
void set_a ( int num );
int get_a ();
};
void myclass :: set_a ( int num )
{
a = num ;
}
int myclass :: get_a ()
{
return a;
}
int main ()
{ int p,q;
cout<<"Input 2 number: "<<endl;
cin>>p>>q;
myclass ob1 , ob2 ;
ob1 . set_a (p) ;
ob2 . set_a (q) ;
cout << ob1 . get_a () << "\n";
cout << ob2 . get_a () << "\n";
return 0;
}
