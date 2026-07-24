#include <iostream> 
using namespace std; 
 
void reverseWord(char myWord[], int wordSize) { 
    int leftIndex = 0; 
    int rightIndex = wordSize - 1; 
     
    while (leftIndex < rightIndex) { 
        char tchar = myWord[leftIndex]; 
        myWord[leftIndex] = myWord[rightIndex]; 
        myWord[rightIndex] = tchar; 
         
        leftIndex++; 
        rightIndex--; 
    } 
} 
 
int main() { 
    char wordToReverse[100]; 
     
    cout << "Enter a word to reverse: "; 
    cin >> wordToReverse; 
     
    int actualSize = 0; 
    while (wordToReverse[actualSize] != '\0') { 
        actualSize++; 
    } 
     
    reverseWord(wordToReverse, actualSize); 
     
    cout << "Reversed Word: " << wordToReverse << endl; 
     
    return 0; 
}
