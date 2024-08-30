#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
 void insertionSort(int *arr, int size) {
    
    for (int i = 1; i <size ; i++) {
        int temp = arr[i];
        int j = i-1;
        for ( ; j >= 0; j--) {
            if (arr[j]> temp ) {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }

}
 
void mergeSortedArr(int *arr1, int n1, int peak, int *arr2, int n2){
       int j=0;
       for (int i = peak+1; i < n1; i++)
       {
        arr1[i]= arr2[j];
        j++;
        
       }
       insertionSort(arr1, n1);
}

    int peakOfArray(int *arr, int n){
    int s = 0;
    int e = n;
    int mid = s +(e-s)/2;
    int peak=-1;
    while (s<e)
    {
        int mid = s +(e-s)/2;
        if (arr[mid]<arr[mid+1])
           s=mid+1;
        else
            e=mid;
    }
        
    return s;
}




int main(){
    int arr1[11]={0,1,2,3,4,5,0,0,0,0,0};
    int arr2[5]={10,9,8,7,6};
   
   int peakOfArray1 = peakOfArray(arr1,11);
   cout<<"peak element index of array1 :"<<peakOfArray1<<endl;
   mergeSortedArr(arr1, 11, peakOfArray1,arr2,5);
      for (int i =0; i<11 ;i++)
    {
       cout<<"element of index "<<i<<':'<<arr1[i]<<endl;
       
    }




return 0;

}