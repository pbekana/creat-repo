#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,fact=1;
    cin>>i;
    fact = fact * i;
while (i < 100)
{
 cout<<fact;
 i++;
}
/*int r,i=2,num;
    cin>>num;
    r = sqrt(num);
if(i > r)
    cout<<"prime";
else if(num %i == 0)
    cout<<"not";*/
/*float disc,x1,x2,a,b,c;
cin>>a>>b>>c;
disc = b*b - 4*a*c;
if(disc < 0)
    cout<<"roota are imaginary";
else if (disc == 0)
{

    x1 = -b / 2*a;
    x2 = -b / 2*a;
    cout<<"roots are equal and true";
    cout<<x1<<endl;
    cout<<x2;
    }
else if(disc > 0)
{

    x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
    x2 = (-b - sqrt(b*b - 4*a*c))/2*a;
    cout<<"roots are true and different";
    cout<<x1<<endl;
    cout<<x2;
    }*/
    return 0;
}

