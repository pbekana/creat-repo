# include <iostream>
using namespace std;
enum listCotFYrSPS{CP,maths,Anthropology,civic,English,Entrepreneurship,Emerging
};
int main ()
{
double marks[5];

cout<<" enter marks of CP "<<endl;
cin>>marks[CP];
 cout<<" enter marks of maths"<<endl;
cin>>marks[maths];
cout<<" enter marks of civic"<<endl;
cin>>marks[civic];
cout<<" enter marks of English"<<endl;
cin>>marks[English];
cout<<" enter marks for Entrepreneurship "<<endl;
cin>>marks[Entrepreneurship];
 cout<<" you're CP MARK is:"<<marks[CP]<<endl;
 cout<<" you're maths MARK is:"<<marks[maths]<<endl;
 cout<<" you're civic MARK is:"<<marks[civic]<<endl;
 cout<<" you're English MARK is:"<<marks[English]<<endl;
 cout<<" you're Entrepreneurship MARK is:"<<marks[Entrepreneurship];

return 0;	
	
}
