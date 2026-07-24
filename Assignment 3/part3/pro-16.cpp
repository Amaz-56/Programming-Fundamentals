#include <iostream> 
using namespace std; 
 
double calculateStrikeRate(int runs, int balls) { 
    return (static_cast<double>(runs) / balls) * 100; 
} 
 
int main() { 
    int runs, balls; 
    cout << "Enter Runs and Balls: "; 
    cin >> runs >> balls; 
     
    cout << "Strike Rate: " << calculateStrikeRate(runs, balls) << endl; 
     
    return 0; 
}
