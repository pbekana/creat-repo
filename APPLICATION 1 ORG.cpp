//this program provide information about foods cholestrol level
//this program also shows lists of foods 

 #include<iostream>
using namespace std;
class FOOD{
	public:
string vegetable[50];
string fruit[40];
string diaryproduct[30];	
string cholestrolproduct[20];
void output();		
};
int main(){
	int choice;
FOOD foods;
foods.vegetable[49]={"potato,cabaje,tomato,apple"};
foods.fruit[39]={"bean,atar,shinbura,dube"};
foods.diaryproduct[29]={"milk,yoghurt,cheese"};
foods.cholestrolproduct[19]={"nuts,yalaiwz kibe,cocunut"};
cout<<"enter u're a number from one(1) up to four(4) to see the lists of foods "<<endl;
	cin>>choice;
void output ();
	if(choice == 1)
	cout<<foods.vegetable[49]<<endl<<" those are a vegetable and u're allowed to eat and it's cholestrol level is 3%";
 if(choice == 2)
	cout<<foods.fruit[39]<<endl<<" those are a fruits  and u're allowed to eat and it's cholestrol level is 1%";

	else if(choice == 3)
	cout<<foods.diaryproduct[29]<<endl<<" those are a diaryproduct  and u're allowed to eat and it's  cholestrol level is 5%";
	else if(choice == 4)

	cout<<foods.cholestrolproduct[19]<<endl<<" those are a cholestrolproduct and u're not allowed to eat and it's  cholestrol level is 70%";
	
return 0;	
}
