#include <iostream> 
using namespace std; 
 
double calAvg(int testScores[], int numberOfStudents) { 
    double totalScore = 0; 
    for (int i = 0; i < numberOfStudents; i++) { 
        total += testScores[i]; 
    } 
    return total / numberOfStudents; 
} 
 
int main() { 
    int stds; 
    int studentScores[100];  
    cout<<"Enter Number of Stdents:"; 
    cin >> stds; 
     
    for (int i = 0; i < stds; i++) { 
     cout<<"Score for Student "<<i+1<<" "; 
        cin >> studentScores[i]; 
    } 
     
    cout << calAvg(studentScores, stds) << endl; 
     
    return 0; 
} 
