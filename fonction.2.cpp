// some works on a functions
/*#include<iostream>
using namespace std;
bool minu(bool c,bool d);
// prototyping give info about function name,parameters,type the compiler
int main ()
{


  bool w = 2,r =  9;
  cout<< minu(w,r);


return 0;
}
// function definition is body of a function
bool minu(bool c, bool d)// gives function signatures
{

bool e;
e = c+d;
cout<<"enter some numbrs";
cin>>c>>d;
cout<<e;
return e;

}*/
// passing parameters by reference
#include <iostream>
using namespace std;
void duplicate (int& a, int& b, int& c)
{
a*=2;

b*=2;
c*=2;
}
int main ()
{
int x=1, y=3, z=7;
duplicate (x, y, z);
cout << "x="<< x << ", y="<< y << ", z="<< z;
return 0;
}
