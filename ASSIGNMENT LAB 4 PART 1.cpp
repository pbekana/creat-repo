#include <iostream>
using namespace std; 
int main()
{
int *secton;
int size=10;
secton=new int[5];	
secton[0]=1;
secton[1]=2;
secton[2]=3;
secton[3]=4;
secton[4]=5;
for(int i =0;i<5;i++)
secton=secton[i]+1;
{
	

	
cout<<" the  address of secton= " << &secton[i]<<endl;

cout<<" the  value of secton =" << secton [i]<<endl;
}
delete []secton;
secton=NULL;


/*	cout<<" enter";
	cin>>n;

rem=num%10;
rev=rev*10+rem;
num=num/10;
if(num==rev)
cout<<num;
else
cout<<rev<<endl;
*/
return 0;
}
