#include<iostream>
using namespace std;
class FOOD{
public:	
void permit();	
string vegetable[50];
string fruit[40];	
string diaryproduct[30];
string cholestrolproduct[20];	
};
int main(){
	int choice;
FOOD foods;
//foods.vegetable[50]={"potato","cabaje","tomato","apple","salad"};	
foods.fruit[40] = { "beans"};	
foods.diaryproduct[30] = { "milk, youghurt, cheese, kibe"};	
foods.cholestrolproduct[20] = {"nuts,yalawiz kibe,sweets"};

cout<<" enter u're choice";	
cin>>choice;	
void permit();	
cout<<foods.fruit;	
	

return 0;
}
