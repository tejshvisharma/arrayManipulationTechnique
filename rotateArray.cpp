#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int rotateArray1time(int *arr,int n, int k){
    for(int j=1; j<=k ; j++){
    int lastIndexElement = arr[n-1];
    for (int i = n-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=lastIndexElement;
    }

    return 0;
};

int rotateArray(int *arr, int n, int k){
    //creating an extra array to stored rotated array : 
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[(i+k)%n]=arr[i];
        
    }
    // copy temp to arr
    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    return 0;
};

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    rotateArray1time(arr,10,5);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<',';
    }
    
}












