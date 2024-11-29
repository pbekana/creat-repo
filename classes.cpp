#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class food{
public:
string fruit;

string vegetable;
    food(string a, string b){
   fruit = a;
   vegetable = b;}
   food(food &obj){

   fruit = obj.fruit;
   vegetable = obj.vegetable;
   cout<<vegetable<<endl<<fruit<<endl;

   }
   food(int s = 6){
//this default constructor  gives value


   cout<<"wellcome to jimma";}
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
array(int ses){
size = ses;
color = " orange";

}
};

int main(){
    food s("favs","cabage");
    food z = s;
food x;
array arr[3] = {(8),
                      (2),
                      (5)};
for(int i = 0;i<3;i++)
    arr[i].print();

//cout<<c2.age<<endl<<c2.salary<<endl;
    return 0;
}
