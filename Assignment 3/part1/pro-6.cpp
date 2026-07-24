#include <iostream> 
#include<string> 
using namespace std; 
 
int wordLength(char word[]) { 
    int count = 0; 
     
    while (word[count] != '\0') { 
      count++; 
    } 
     
    return count; 
} 
 
int main() { 
    char userWord[100]; 
    cout<<"Enter a word: "; 
    cin.getline(userWord, 100); 
    cout << "Length of the word is: " << wordLength(userWord) << endl; 
     
    return 0; 
}
