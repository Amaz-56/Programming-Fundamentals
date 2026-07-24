#include <iostream> 
using namespace std; 
 
int main() { 
    char letters[5]; 
     
    for (int i = 0; i < 5; i++) { 
     cout<<"Enter "<<i+1<<"letter :"; 
        cin >> letters[i]; 
    } 
     
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4 - i; j++) { 
            if (letters[j] > letters[j + 1]) { 
                char tletter = letters[j]; 
                letters[j] = letters[j + 1]; 
                letters[j + 1] = tletter; 
            } 
        } 
    } 
     
    cout << "Sorted Letters: "; 
    for (int i = 0; i < 5; i++) { 
        cout << letters[i]; 
    } 
    cout << endl; 
     
    return 0; 
}
