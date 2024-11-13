# include <iostream>
using namespace std;
int main ()
{
int n;
double average;
int marks[6];
int sum=0;
cout<<" enter a marks of students ";

for( int j=0;j<6;j++){
cin>>marks [j] ;
sum=sum+ marks[j];
average=sum/6;



cout<<"this is indvidual marks for student "<< marks[j] <<endl;
cout<<"this is entire class marks for student "<<average<<endl;
}
   return 0;
}
