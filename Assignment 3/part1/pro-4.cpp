#include <iostream> 
using namespace std; 
 
double calculateVoltage(double current, double resistance) { 
    return current * resistance; 
} 
 
int main() { 
    double current, resistance; 
    cout<<"Enter the value of current: "; 
    cin >> current ; 
    cout<<"Enter the value of resistence: "; 
 cin>> resistance; 
     
    double total = calculateVoltage(current, resistance); 
     
    cout << "Total Voltage: " << total << " V" << endl; 
     
    return 0; 
}
