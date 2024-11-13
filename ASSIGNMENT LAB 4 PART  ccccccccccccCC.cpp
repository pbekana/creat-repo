# include <iostream>
using namespace std;
struct BOOK{int ID;string title;string author;double price ;};
void bookdetail( int v)
{
cout<<" book detail"<<endl;	
	
}

int main ()
{
BOOK book;
book.ID= 7712;
book.title=" ATOMIC HABIT";
book.author="JAMES CLEAR";
book.price =6000;
  bookdetail( 7);

{

cout<<"the  ID  is :" << book.ID <<endl;
cout<<" the title  is :"<< book.title<<endl;
cout<<" the title  is :"<< book.author<<endl;
cout<<" the author  is :"<< book.price;	
}

return 0;	
}
