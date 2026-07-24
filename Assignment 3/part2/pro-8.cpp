#include <iostream> 
using namespace std; 
 
double calculateSum(int studentScores[], int totalStudents) { 
    double totalSum = 0; 
    for (int i = 0; i <totalStudents; i++) { 
        totalSum = totalSum + studentScores[i]; 
    } 
    return totalSum; 
} 
 
int main() { 
    int numberOfStudents; 
    cout<<"Enter the number of students:"; 
    cin >> numberOfStudents; 
     
    int testScores[100]; 
    for (int i = 0; i < numberOfStudents; i++) { 
  
     cout<<"Marks for student "<<i+1<<" is: " ; 
        cin >> testScores[i]; 
    } 
     
    cout <<"Sum of Marks is: "<< calculateSum(testScores, numberOfStudents) << endl; 
     
    return 0; 
} 
