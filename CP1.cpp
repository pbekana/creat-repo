
# include<iostream> 
#  include<cmath>                                                                                                                                                  
using namespace std; 
# include <cmath>


 int main()                                                                                                                   
{
int m,n,lcm=1,gcd=1,denuminetor1,numinetor1,denuminetor2,numinetor2;

cout<<" enter number";
cin>>n>>m;
n=n*denuminetor1+denuminetor2;
m=denuminetor1*numinetor2;
for(int i=0;i<=n && i<= m;++i)
{

if((n%i==0) && (m%i==0))
{
gcd=i;
}
}
lcm=(n*m)/gcd;
cout<<denuminetor1<<"is this "<<endl;
cout<<numinetor1<<" is lcm"<<endl;


 


/*cout<<" enter num";
cin>>num;*/










return 0;
}
