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
                                                                                                                                                         


/*ut<<" enter number";
cin>>num1>>num2>>den1>>den2;
if(den1==den2)
{

		sult=num1+num2;	
cout<<num1<<" /"<<den1<<" +"<<num2<<" /"<<den2<<"="<<result	<<" /"<<den1
;
}
else
	
	{
	num1=num1*den2;
	num2=num2*den1;
	result=num1+num2;
	cout<<num1<<" /"<<den1<<" +"<<num2<<" /"<<den2<<" ="<<result<<"/"<<den1*den2;	
		
		
	}
	
	*/

