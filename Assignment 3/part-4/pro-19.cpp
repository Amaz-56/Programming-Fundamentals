#include <iostream> 
using namespace std; 
 
int main() { 
    int totalRows, totalCols; 
     
    cout << "Enter number of rows and columns: "; 
    cin >> totalRows >> totalCols; 
     
    int marksTable[100][100];  
    int totalSum = 0; 
     
    cout << "Enter the values for the table:\n"; 
    for (int currentRow = 0; currentRow < totalRows; currentRow++) { 
        for (int currentCol = 0; currentCol < totalCols; currentCol++) { 
            cin >> marksTable[currentRow][currentCol]; 
            totalSum += marksTable[currentRow][currentCol]; 
        } 
    } 
     
    cout << "Sum of all elements: " << totalSum << endl; 
     
    return 0; 
} 
