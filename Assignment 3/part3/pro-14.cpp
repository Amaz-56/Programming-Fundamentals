#include <iostream> 
using namespace std; 
int main() { 
    int R, C; 
     
    cout << "Enter number of rows: "; 
    cin >> R; 
    cout << "Enter number of columns: "; 
    cin >> C; 
     
    int table[R][C]; 
     
    cout << "\n--- Enter Numbers ---" << endl; 
     
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            cout << "Enter value for [" << i << "][" << j << "]: "; 
            cin >> table[i][j]; 
        } 
    } 
     
    cout << "\n--- Seating Chart Matrix ---" << endl; 
     
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            cout << table[i][j] << " "; 
        } 
        cout << endl; 
    } 
     
    return 0; 
}
