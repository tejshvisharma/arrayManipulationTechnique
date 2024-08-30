#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
void moveZeros(int *arr, int size) {
    int nonZeroIndex = 0;

    // Traverse the array and move non-zero elements to the front.
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros.
    while (nonZeroIndex < size) {
        arr[nonZeroIndex++] = 0;
    }
}
int main(){
    int arr[26]={1,1,0,0,2,0,3,0,4,0,5,0,0,1,0,2,0,6,0,7,0,8,0,9,0,10};
    moveZeros(arr,26);
    for (int i = 0; i <26; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}