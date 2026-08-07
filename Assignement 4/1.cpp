#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("students.txt"); 
    
    if (!outFile.is_open()) {
        cout << "Error: could not create file!" << endl;
        return 1;
    }

    int roll; 
    string name; 
    float marks;
    
    cout << "--- Enter 5 Student Data ---" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Student " << i << " - Enter Roll No, Name, Marks: ";
        cin >> roll >> name >> marks;
        outFile << roll << " " << name << " " << marks << endl;
    }

    outFile.close();
    
    cout << "Records saved successfully." << endl;
    
    return 0;
}
