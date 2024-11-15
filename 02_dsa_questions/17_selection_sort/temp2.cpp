// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 


#include <iostream>
using namespace std;

int main(){

    int arr[7] = {5, 1, 7, 2, 8, 9, 6}; 
    int n = 7; 
  
    for (int i = 0; i < n - 1; i++) {
        int index = i; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        
        swap(arr[index], arr[i]);
    }

    
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

}