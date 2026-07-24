#include <iostream> 
using namespace std; 
int countEvenNumbers(int arr[], int size) 
{ 
    int count = 0; 
    for(int i = 0; i < size; i++) 
    { 
        if(arr[i] % 2 == 0) 
        { 
            count++; 
        } 
    } 
    return count; 
} 
int countOddNumbers(int arr[], int size) 
{ 
    int count = 0; 
    for(int i = 0; i < size; i++) 
    { 
        if(arr[i] % 2 != 0) 
        { 
            count++; 
        } 
    } 
 
    return count; 
} 
int main() 
{ 
    int N; 
    cout << "Enter Size of aarray: "; 
    cin >> N; 
 
    int numbers[N]; 
    for(int i = 0; i < N; i++) 
    { 
        cout << "Enter value for " << i+1 << ": "; 
        cin >> numbers[i]; 
    } 
 
    cout << "Number of Even Numbers in Array: " 
         << countEvenNumbers(numbers, N) << endl; 
 
    cout << "Nuber of Odd Numbers in Array: " 
         << countOddNumbers(numbers, N) << endl; 
    return 0; 
}
