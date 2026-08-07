#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    fstream file("students.txt", ios::in | ios::out);
    
    if (!file.is_open()) {
        cout << "Error: file not found!" << endl;
        return 1;
    }

    int searchRoll, roll; 
    string name; 
    float marks, newMarks;
    
    cout << "Enter Roll No to update: ";  
    cin >> searchRoll;
    cout << "Enter new Marks: ";           
    cin >> newMarks;

    bool found = false;
    
    while (file >> roll >> name >> marks) {
        if (roll == searchRoll) {
            streampos pos = file.tellg();
            pos -= 7;
            file.seekp(pos);
            file << setw(6) << left << newMarks;
            found = true;
            break;
        }
    }

    file.close();
    
    if (found) {
        cout << "Record updated successfully." << endl;
    } else {
        cout << "Roll No not found." << endl;
    }
    
    return 0;
}
