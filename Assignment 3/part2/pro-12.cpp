#include <iostream> 
using namespace std; 
 
int countVowels(char inp[]) { 
    int totalVowels = 0; 
    int ind = 0; 
     
    while (inp[ind] !='\0') { 
        if (inp[ind] =='a' || inp[ind] =='e' || inp[ind] == 'i' || inp[ind] == 'o' || inp[ind] 
== 'u' || inp[ind] == 'A' || inp[ind] == 'E' || inp[ind] == 'I' || inp[ind] == 'O' ||  
   inp[ind] =='U') { 
            totalVowels++; 
        } 
        ind++; 
    } 
   return totalVowels; 
} 
 
int main() { 
    char name[100]; 
    cout<<"Enter Name: "; 
    cin >> name; 
     
    cout << "Total Vowels: " << countVowels(name) << endl; 
     
    return 0; 
}
