#include <iostream> 
using namespace std; 
 
int calculateLowest(int scores[], int numberOfStudents) { 
    int lowestScore = scores[0]; 
    for (int i = 1; i < numberOfStudents; i++) { 
        if (scores[i] < lowestScore) { 
            lowestScore = scores[i]; 
        } 
    } 
    return lowestScore; 
} 
 
int calculateHighest(int testScores[], int numberOfStudents) { 
    int highestScore = testScores[0]; 
    for (int i = 1; i < numberOfStudents; i++) { 
        if (testScores[i] > highestScore) { 
            highestScore = testScores[i]; 
        } 
    } 
    return highestScore; 
} 
 
int main() { 
    int numberOfStudents; 
    int studentScores[100]; 
        cout<<"Enter Number of Stdents: "; 
    cin >> numberOfStudents; 
     
    for (int i = 0; i < numberOfStudents; i++) { 
     cout<<"Score for Student "<<i+1<<" "; 
        cin >> studentScores[i]; 
    } 
     
    cout << "Lowest Score: " << calculateLowest(studentScores, numberOfStudents) 
<< endl; 
    cout << "Highest Score: " << calculateHighest(studentScores, numberOfStudents) 
<< endl; 
     
    return 0; 
} 

