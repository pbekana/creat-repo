# include <iostream>
using namespace std;


void showresult();
bool cals();
double coma(double w,double h);
int camera(int v,int c);
void showresult();
int camera(int v,int c)
{
cout<<" calculate uj're given'";
int sum,x,a;
cin>>x;
cout<<" \n ";
cin>>a;
cout<<" \n";
sum=x+a;
cout<<sum<<endl;	
	
return sum;	
}
bool cals( )
{
	
int n,k,pro;
cin>>n;
cout<<"\n";
cin>>k;
cout<<"\n";
pro= n*k;
//cout<<"that's function'"<<pro;
return pro;	
}
int main( )
{
	int v,c;
	double w,h;
	bool e,f;
	int r;
camera (v,c);
coma(w,h);
int g=cals();
cout<<g;


return 0;
}
double coma(double w,double h )
{

double c;
cin>>w;
cout<<"\n";
cin>>h;
cout<<"\n";
c=w*h;	
return c;	
	
}

