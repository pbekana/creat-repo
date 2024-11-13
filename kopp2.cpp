#include <iostream>
using namespace std;
#include<cstring>
int main()
{
int cas[2][2];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>cas[i][j];	
}
cout<<cas[i][j]<<" \t";
}
cout<<endl;
int sum=0;
sum=cas[i][j]+sum;

//int* ptr = &i;
//*ptr = 11	
cout<<sum;
return 0;
}














