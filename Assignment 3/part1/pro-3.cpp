#include <iostream> 
using namespace std; 
 
int calculatePower(int base, int exponent) { 
    int mul = 1; 
    for (int i = 0; i < exponent; i++) { 
        mul = mul * base; 
    } 
    return mul; 
} 
 
int main() { 
    int base, exponent; 
    cout<<"Enter Base: "; 
    cin >> baseNumber; 
     cout<<"Enter Exponent: "; 
 cin >> exponentNumber; 
     
    int result = calculatePower(base, exponent); 
     
    cout <<  base << " raised to the power " << exponent << " is: " << result << endl; 
     
    return 0; 
} 
