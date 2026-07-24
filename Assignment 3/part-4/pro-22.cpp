#include <iostream> 
using namespace std; 
 
double ballavg(double runsConceded, double wicketsTaken) { 
    if (wicketsTaken == 0) { 
        return 0.0; 
    } 
    return runsConceded / wicketsTaken; 
} 
 
int main() { 
    double runsConceded, wicketsTaken; 
     
    cout << "Enter Runs Conceded and Wickets Taken: "; 
    cin >> runsConceded >> wicketsTaken; 
     
    double averageResult = ballavg(runsConceded, wicketsTaken); 
   
    cout << "Bowling Average: " << averageResult << endl; 
    
    return 0; 
}
