//this program provid information about foods cholestrol level
//this program also shows lists of foods 

 #include<iostream>
using namespace std;
class FOOD{
	public:
string menu;
	
string cholestrolproduct;
void foodlists();		
};
int main(){
	int index;
	int const bumnum=5;
	char choice;
FOOD foods[bumnum]={{" potato,cabaje,tomato,apple,it's cholestrol level is 3%"},
{"bean,atar,shinbura,dube,it's cholestrol level is 1.0%"},{"milk,yoghurt,cheese,it's cholestrol level is 5.0%"},
{"nuts,yalaiwz kibe,cocunut,it's cholestrol level is 70.0% " }};
cout<<"enter u're a spelling from one(A) up to four(D) to see the lists of foods"<<endl;
	cin>>choice;
void foodlists ();
	if(choice >= 'A' && choice <='D')
	{
	
	index = choice -'A';
	cout<<foods[index].menu<<endl;
	cout<<foods[index].cholestrolproduct;
	}
	else
	{
	
	cout<<" invalid option please try again and choice option option from A up D";
}
	//cout<<emp.name[5];

//cout<<.length fruit[0];
/*	int sum=0;
int sak[2][2];
int vb[2][2];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cin>>sak[i][j];	
	}		
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		cout<<sak[i][j]<<"\t";
	
	}
	cout<<endl;

}

for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		cin>>vb[i][j];
}
}
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
cout<<vb[i][j]<<"\t";
}
cout<<endl;
}
cout<<endl;
//int sum=0;
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{
sum=sak[i][j]*vb[i][j];
cout<<sum<<"\t";
}
cout<<endl;
}
*/
return 0;	
}
