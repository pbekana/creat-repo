#include <iostream>
using namespace std; 
struct BOOK {int ID; string title; string author;double price;};

int main()
              
{                                                                                                                                                                     
const int numBOOK =3;
BOOK p1[numBOOK];                                       

p1[0].ID= 7712;
p1[0].title=" ATOMIC HABIT";
p1[0].author="JAMES CLEAR";
p1[0].price = 73;
p1[1].ID= 2312;
p1[1].title=" DERTOGADA ";
p1[1].author=" YISMAK WORKU ";
p1[1].price =60;
p1[2].ID= 1073;
p1[2].title=" THE ALKEMIST ";
p1[2].author="PAULO COSILHO";
p1[2].price =100;

for(int i=0;i<3;i++)
{
cout<<"the  ID  is :" <<p1[i].ID <<endl;
cout<<" the title  is :"<<p1[i].title<<endl;
cout<<" the author  is :"<<p1[i].author<<endl;
cout<<" the price  is :"<<p1[i].price<<endl;
}

return 0;

 
/*cin>>s1.type;
cout<<s1.type;
cin>>s1.colour;
cout<<s1.colour;*/
/*cout<<" hello fall";
	
}
int main()
{
int num,org_num,rev,rem;
 org_num=num;
 rem=num%10;
 rev=rev*10+rem;
 num=num/10;
 cout<<" emb";
 cin>>num;
 {
 
 ser(int l);

 }
int ispalindrome(int num);
if(org_num==num){
cout<<" true";	
return true;

}

else
{
cout<<" false";
return false;
}

*/
/*char str1[10];
cout<<" enter";
gets(str1);
strcpy(str1,"  ");
//strcpy(app,"mbn");
if(strcmp (str1," lan"))

cout<<" invalid in"<<endl;
else
cout<<" good";*/
/*
cout<<" enter square matrix";

for(int h=0;h<row;h++)
{
for(int k=0;k<col;k++){
	
	
cout<<h<<"]["<<k<<":]"<<endl;
cout<<man[h][k];
}
}
cout<<" enter square matrix As as follows";
for(h=0;h<=row;h++)
{
for(k=0;k<=col;k++)	{
cout<<man[h][k];
	
}
cout<<endl;
	
}


*/
return 0;
}
