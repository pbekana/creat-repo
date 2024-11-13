#include <iostream>
using namespace std; 
struct BOOK {int ID; string title; string author;double price;};
void booksdetail (double  const BOOK ,double p1 )
{

cout<<"the  ID  is :" << p1.ID <<endl<<" the title  is :"<< p1.title<<endl;
cout<<" the title  is :"<< p1.author<<endl<<" the author  is :"<< p1.price;	
	
}

int main()
{

BOOK p1;
p1.ID= 7712;
p1.title=" ATOMIC HABIT";
p1.author="JAMES CLEAR";
p1.price =6000;

booksdetail ( double const BOOK ,double p1);
{

cout<<"the  ID  is :" << p1.ID <<endl<<" the title  is :"<< p1.title<<endl;
cout<<" the title  is :"<< p1.author<<endl<<" the author  is :"<< p1.price;	
}




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
