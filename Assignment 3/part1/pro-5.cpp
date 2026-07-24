#include <iostream> 
using namespace std; 
 
bool playerTeam(char initials[], int teamSize, char target) { 
     
     if (target >= 'A' && target <= 'Z') { 
        target = target + 32;  
    } 
 
    for (int i = 0; i < teamSize; i++) { 
        if (initials[i] == target) { 
            return true; 
        } 
    } 
    return false;  
} 
 
int main() { 
    char squad[11] = {'b', 'r', 's', 'f', 'h', 'i', 'n', 'a', 'w', 'm', 'z'}; 
    char target; 
    cout<<"Enter player Name: "; 
    cin >> target; 
    if (playerTeam(squad, 11, target) == true) { 
        cout << "Player is in the team" << endl; // 
    } else { 
        cout << "Player not found" << endl; // 
    } 
     
    return 0; 
}
