#include <iostream> 
using namespace std; 
 
int calculate2Low(int myArray[], int mySize) { 
    for (int i = 0; i < mySize - 1; i++) { 
        for (int j = 0; j < mySize - 1 - i; j++) { 
            if (myArray[j] > myArray[j + 1]) { 
                int tscore = myArray[j]; 
                myArray[j] = myArray[j + 1]; 
                myArray[j + 1] = tscore; 
            } 
        } 
    } 
    return myArray[1];  
} 
 
int calculate2High(int myArray[], int mySize) { 
    for (int i = 0; i < mySize - 1; i++) { 
        for (int j = 0; j < mySize - 1 - i; j++) { 
            if (myArray[j] > myArray[j + 1]) { 
                int tscore = myArray[j]; 
                myArray[j] = myArray[j + 1]; 
                myArray[j + 1] = tscore; 
            } 
        } 
    } 
    return myArray[mySize - 2];  
} 
 
int main() { 
    int totalStudents; 
        cout<<"Enter the number of students:"; 
 
    cin >> totalStudents; 
     
    int scoresArray[100]; 
    for (int i = 0; i < totalStudents; i++) { 
          cout<<"Marks for student "<<i+1<<" is: " ; 
 
        cin >> scoresArray[i]; 
    } 
     
    cout <<"2nd lowest is: "<< calculate2Low(scoresArray, totalStudents) << endl; 
    cout <<"2nd highest is: "<< calculate2High(scoresArray, totalStudents) << endl; 
     
    return 0; 
}
