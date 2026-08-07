#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("students.txt"); 
    
    if (!inFile.is_open()) {
        cout << "Error: file not found!" << endl;
        return 1;
    }

    int roll, count = 0; 
    string name; 
    float marks;
    
    cout << "Roll\tName\tMarks" << endl;
    cout << "-----------------------" << endl;
    
    while (inFile >> roll >> name >> marks) {
        cout << roll << "\t" << name << "\t" << marks << endl;
        count++; 
    }

    inFile.close();
    
	cout << "-----------------------" << endl;
    cout << "Total records: " << count << endl;
    
    return 0;
}
