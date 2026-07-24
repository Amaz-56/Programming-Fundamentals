#include <iostream> 
using namespace std; 
 
double celsiusToFahrenheit(double celsiusTemp) { 
    return (celsiusTemp * 9.0 / 5.0) + 32.0; 
} 
 
int main() { 
    double celsiusInput; 
    cout<<"Enter temp in Celcius: "; 
    cin >> celsiusInput; 
     
    cout << celsiusToFahrenheit(celsiusInput) << endl; 
     
    return 0; 
}
