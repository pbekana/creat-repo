#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class Clock{
    public:
        int age;
        float salary;
Clock(int x,float b);

Clock(){ // this is diffult consttructor
cout<<" weeeeelvome"<<endl;

}
display(){
cout<<age<<endl<<salary<<endl;

}
Clock(Clock &obj){

age = obj.age;
salary = obj.salary;
}
};
Clock::Clock(int x, float b){
age = x;
salary = b;


}

int main(){
    Clock cl;
    Clock c2(14,14.7 );
    Clock c3 = c2;
c3.display();
//cout<<c2.age<<endl<<c2.salary<<endl;
    return 0;
}
