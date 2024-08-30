#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
void reverseArray(int *arr,int s, int e){
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    
}
int main(){
    int arr[100];
    int a,n,m;
    // input the element of the array:
    cout<<"Enter the number of array element:";
    cin>>n;
    cout<<"Enter the value of element one by one:"<<endl;
    for (int i=0 ; i < n ;i++)
    {
       cout<<"element of index "<<i<<':';
       cin>>a;
       arr[i]=a;
    }
    cout<<"Enter the value of index from you want to reverse array :";
    cin>>m;
    
    // calling reverse function to reverse the array:
    reverseArray(arr,m,n-1);
    cout<<"after swapping the array :"<<endl;
     for (int i =0; i<n ;i++)
    {
       cout<<"element of index "<<i<<':'<<arr[i]<<endl;
       
    }
}