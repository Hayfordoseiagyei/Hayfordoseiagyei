
#include<iostream>
using namespace std;

int main() {
	cout << "\n\t\t\t\t\t      UENR C.G.P.A SYSTEM"<< endl;
	cout << " \t\t\t\t\t   -------------------------" << endl;
   
    int num_of_courses;
    cout << "\n\t\t\t\t\t Enter the number of courses: ";
    cin >> num_of_courses;

     string course_name[num_of_courses];
    double grades[num_of_courses];
    double credits[num_of_courses];

    for(int i = 0; i < num_of_courses; i++) {
    	cout << "\n\t\t\t\t\t Enter course name " <<i+1 << ": " ;
         cin >> course_name[i];
    	
        cout << "\n\t\t\t\t\t Enter grade for course " << i+1 << ": ";
        cin >> grades[i];
        
        cout << "\n\t\t\t\t\t Enter credit hours for course " << i+1 << ": ";
        cin >> credits[i];
    }

    double total_grade_points = 0;
    double total_credits = 0;

    for(int i = 0; i < num_of_courses; i++) {
        total_grade_points += grades[i] * credits[i];
        total_credits += credits[i];
    }

    double cgpa = total_grade_points / total_credits;

    cout << "\n\t\t\t\t\t The CGPA is " << cgpa << endl;

    return 0;
}



