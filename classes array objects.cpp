
/*#include <iostream>
using namespace std;
class food{
    public:
string fruit ;
string vegetable;
food(string c,string d){

fruit = c;
vegetable = d;

}
void print(){
cout<<fruit<<endl<<vegetable<<endl;

}
food(food &v) {// this is coping a adrres of class
fruit = v.fruit;
vegetable = v.vegetable;

}
   //~ food();

};
class array{
public:
    int size ;
    string color ;
    void print(){
    cout<<size<<endl<<color<<endl;

    }
/*array(int sizes , string colors){
size = sizes;
color = colors;

}
*/
/*
array(int ses){
size = ses;
color = " orange";

}
};




int main(){

food f("ben","atar");
food f1 = f;
f1.print();
array arr[3] = {(8),
                      (2),
                      (5)};
for(int i = 0;i<3;i++)
    arr[i].print();

//cout<<c2.age<<endl<<c2.salary<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class heater{


public:
 static int cas;
   static void call(int b){
   cout<<"who are u " <<endl;
cout<<cas<<endl;
   }
int sum ;

void fun(){
cout<<" hi freshes"<<endl;
cout<<sum<<endl;
}

 int get()// this is acessor function that is used for acces but dont modify value of a private variables
 {
return id;
}
void set(int s){// this one is mutator function that uses for acces and modify private variables

id = s;
}
int age;
string name;
private:
int id;

};
int heater:: cas = 0;
int main(){

heater h;
h.set(9);
cout<<h.get();
heater::call(5);
cout<<h.cas<<endl;
heater h1;
h1.sum = 34;
heater *ptr = &h1;
ptr->sum = 234;
ptr->fun();
return 0;
}*/
/*
#include<iostream>
using namespace std;

class tourType{

public:
    int hr;
	string cityName;
		int min;
			int distance;
			void output(){

cout<<cityName<<endl;
cout<<min<<endl;
cout<<distance<<endl;
cout<<hr<<endl ;


			}

};

int main(){
tourType destination;
tourType* h1 = &destination;

h1->cityName = " JImma";
h1->min= 30;
h1->distance = 345;
h1->hr =11;
h1->output();
return 0;
}*/
#include<iostream>
using namespace std;
class person{
public:
int age;
string name;
string lastname;
person(int a,string c,string d){
age = a;
name = c;
lastname = d;
}
void result(person p){ // pass by value of when someone tryna pass object as parameters
     cout<<" tthis is result of my work upon question"<<endl;
cout<<age<<name<<endl<<lastname<<endl;

}
};

int main(){
  person p(23,"milk","bek");
p.result(p);
return 0;
}











