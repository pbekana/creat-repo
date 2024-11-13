                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          

 #include <iostream>                                                                                                       
using namespace std;                                                                                           
 int main() { 
int groupSize; 
 cout << "The size of our C++ lab group: "; 
 cin >> groupSize; 
int count = 0; 
 loop_start: 
if (count < groupSize) { 
cout << "Hello, Jimma" << endl; 
count++; 
 goto loop_start; 
 } 
return 0; 
 } 

