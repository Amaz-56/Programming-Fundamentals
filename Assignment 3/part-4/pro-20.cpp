#include <iostream> 
using namespace std; 
 
int main() { 
    int totalRows, totalCols; 
     
    cout << "Enter number of rows and columns: "; 
    cin >> totalRows >> totalCols; 
     
    int dailyData[100][100]; 
     
    cout << "Enter the values for the table:\n"; 
    for (int currentRow = 0; currentRow < totalRows; currentRow++) { 
        for (int currentCol = 0; currentCol < totalCols; currentCol++) { 
            cin >> dailyData[currentRow][currentCol]; 
        } 
    } 
     
    int finalResult = dailyData[0][0]; 
     
    for (int currentRow = 0; currentRow < totalRows; currentRow++) { 
        for (int currentCol = 0; currentCol < totalCols; currentCol++) { 
            if (currentRow == 0 && currentCol == 0) { 
                continue; 
            } 
            finalResult -= dailyData[currentRow][currentCol]; 
        } 
    } 
     
    cout << "Final Result: " << finalResult << endl; 
     
    return 0; 
} 
