#include<iostream>
using namespace std;
int refrence;
int refrence(int &refrence,int &b){
    refrence = 2;
    b  = 3;
int z = refrence;
refrence= b;
b = z;
cout<<refrence<<endl<<b;
if (::refrence!= 0)
}
int main(){
int x = 12,n = 34;
refrence(x,n);



return 0;
}


