// return by refrence of a function
/*
#include <iostream>
using namespace std;
int c;
// Step 1: Define a void function that accepts two parameters by reference
int& divideFunction() {
    // Store their division on the first parameter

    // Print the value of function parameters inside the function
    cout << "Inside the function, a: ";
    return c;
}
int& fun(int &a){
cout<<a;

return a;

}

int main() {
    // Step 2: Call the function with the actual variables
    divideFunction() = 12;
cout<<" the valueof a :"<<c<<endl;
    // Display the value of actual variables after the function call
int x = 10;
fun(x) = 12345;
cout<<x<<endl;
    return 0;
}*/
// this is called indirect
// passing and declaring arrays in a function
// passing string in a functtion
#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class Clock{
    public:
int age;
char name[50];
float ch;
void pri(int v,int b){
cout<<" am good"<<endl;
int d = v+b;
cout<<" the sum is " <<d<<endl;
}
void minus(int s, int e);

void priv(int f){
    hr =  5;
    min =  45;
cout<<" value of hr is : hr = " <<hr<<endl;
cout<<" value of min is : min = "<<min<<endl;
}
Clock (){

cout<<" am working hard"<<endl;}
private:
 int hr ;
int min ;
int sec;

};

void Clock::minus(int s , int e){
int f = s - e;
cout<<" this is the difference of two numbers" <<f<<endl;
}
void obj( Clock &c2){// this is pasing a class object as parameters  by value or refernce
cout<<" hi welcome to jimma";

}
int main(){
    int f= 6;
    int v = 9 ,b =5;
    int  s = 4,e=3;
Clock c;
c.age =20;
c.ch = 4.5;
cout<<"enter name";
cin.get(c.name,50);
cout<<c.age<<endl;
cout<<c.name<<endl;
cout<<c.ch<<endl;
c.pri(v,b);
c.minus(s,e);
obj(c);
c.priv(f);
    return 0;
}


