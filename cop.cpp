#include<iostream>
//#include<string>
using namespace std;
int mostocurred(int num[],int size)
{
int max_count=0;
cout<<" most ocurred";	
for(int i=0;i<size;i++)	
{
int count=1;
for(int j=i+1;j<size;j++)	
if(num[i]==num[j])	
	count++;
	if(count>max_count)
	max_count=count;
	}	
for(int i=0;i<size;i++)	
int count=1;
for(int  j = i+1;j < size;j++)
if(num[i]==num[j])
count++;
if(count=max_count)
cout<<num[i]<<endl;
}
}
int main(){
int num[]={7,3,5,6,7,6,7}
int n=sizeof(num)/sizeof(num[0]);
for(int i=0;i<n;i++)
cout<<num[i];
mostocurred(num,n);

return 0;
}
