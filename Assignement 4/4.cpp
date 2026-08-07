#include <iostream>
#include <fstream>
#include <cstdio> 
using namespace std;

int main() {
    ifstream inFile("students.txt");
    ofstream tempFile("temp.txt");
    
    if (!inFile.is_open() || !tempFile.is_open()) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    int searchRoll, roll; 
    string name; 
    float marks;
    
    cout << "Enter Roll No to delete: ";  
    cin >> searchRoll;

    bool found = false;
    
    while (inFile >> roll >> name >> marks) {
        if (roll == searchRoll) {
            found = true; 
            continue;
        }
        tempFile << roll << " " << name << " " << marks << endl;
    }

    inFile.close();
    tempFile.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found) {
        cout << "Record deleted successfully." << endl;
    } else {
        cout << "Roll No not found." << endl;
    }
    
    return 0;
}
