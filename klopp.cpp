ude <iostream>
using namespace std;                                                                                                                                                                                                                        
#include <cstring> 
const int MAX_STUDENTS = 100; 
int main()
{
int b,a;
for(b=1;b<5;b++)	
{
	for(a=5;a>b;a++)
	{
		
	cout" *";
}
cout<<endl;	
}
	

    return 0;
	}















/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
 float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
 cout << "Enter coefficients a, b and c: ";
 cin >> a >> b >> c;
 if (a == 0) {
 if (b != 0) {
 // Linear equation case
 x1 = -c / b;
 cout << "This is a linear equation. Root: " << x1 << endl;
 } else if (c == 0) {
 cout << "The equation has infinitely many solutions." << endl;
 } else {
 cout << "No solution exists." << endl;
 }
 } else {

 discriminant = b*b - 4*a*c;
 if (discriminant > 0) {
 x1 = (-b + sqrt(discriminant)) / (2*a);

 x2 = (-b - sqrt(discriminant)) / (2*a);
 cout << "Roots are real and different." << endl;
 cout << "x1 = " << x1 << endl;
 cout << "x2 = " << x2 << endl;
 } else if (discriminant == 0) {
 x1 = -b / (2*a);
 cout << "Roots are real and same." << endl;
 cout << "x1 = x2 = " << x1 << endl;
 } else {
 realPart = -b / (2*a);
 imaginaryPart = sqrt(-discriminant) / (2*a);
 cout << "Roots are complex and different." << endl;
 cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
 cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
 }
 }
 return 0;
}
Output
2 | P a g e
2.Pattern design
? write a c++ code to display an inverted right angle triangle pattern.
Solution*/
/*#include <iostream>
using namespace std;
int main() {
 int i, j, rows;
 cout << "Enter the number of rows : ";
 cin >> rows;
 cout << "Inverted Right-Angle Triangle Star Pattern:\n";
 for (i = rows; i > 0; i--) {
 for (j = 0; j < i; j++) {
 cout << "*";
 }
 cout << "\n";
 }
 return 0;
}
3 | P a g e
Output
3.The greatest and smallest of 3 numbers 
? Develop a c++ program to find the greatest and smallest of three 
numbers by accepting input from the user. 
Solution*/
/*#include <iostream>
using namespace std;
int main() {
 int n1, n2, n3, smallest, largest;
 cout << "Enter the three numbers:\n\n";
 cin >> n1 >> n2 >> n3;
 smallest = largest = n1;
 if (n2 < smallest) {
 smallest = n2;
 }
 if (n3 < smallest) {
 smallest = n3;
 }
 if (n2 > largest) {
 largest = n2;
 }
 if (n3 > largest) {
 largest = n3;
 }
 cout << "\n\nThe Smallest number among (" << n1 << ", " << n2 << ", " << n3 
<< ") is: " << smallest;
 cout << "\n\nThe Largest number among (" << n1 << ", " << n2 << ", " << n3 
<< ") is: " << largest;
 cout << "\n\n\n";
 return 0;
}/*
5 | P a g e
Output
4. Applying goto statement
? write c++ code to print hello,jimma based on your c++ lab group 
members size(use goto statement with while loop). 
Solution*/
/*#include <iostream>
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
 }*/                                                                                                
#include <iostream>
using namespace std;                                                                                                                                                                                                                

#include <iostream>
using namespace std;                                                                                                                                                                                                                        
#include <cstring> 
const int MAX_STUDENTS = 100; 
int main() {
    char stud_names[MAX_STUDENTS][100];
    int num_students = 0;
  cout << "Enter student names (one per line). Press Enter after each name finish:\n";
    while (num_students < MAX_STUDENTS) {                                                                                                                                                                                    
       cin.getline(stud_names[num_students], 100); 
        if (strlen(stud_names[num_students]) == 0) 
            break;
        num_students++;
    }
   cout << "\nIndividual student names:\n";
    for (int i = 0; i < num_students; ++i) {
       cout << "Student " << i + 1 << ": " << stud_names[i] << "\n";
    }

    return 0;}


 





