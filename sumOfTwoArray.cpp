#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>& v){
    int s=0;
    int e=v.size()-1;
    while (s<e)
    {
        swap(v[s++],v[e--]);
    }
    return v;

    
}
vector<int> sumOfArray(vector<int>& nums1, int n,vector<int>& nums2, int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry=0;

    while (i>=0 && j>=0)
    {
         int val1 = nums1[i];
         int val2 = nums2[j];

         int sum = val1 + val2 + carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum);
         i--;
         j--;
    }
    // first case num1 array has more element than num2
    while (i>=0)
    {
         int sum=nums1[i]+carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum);
         i--;

    }
    // second case : num2 array has more element than num1
    while (j>=0)
    {
         int sum=nums2[i]+carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum);
         j--;

    }

    // third case : when carry is in hand
    while (carry=0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);

    }
    reverse(ans);
return ans;
}
int main(){
    vector<int> nums1 = {1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> nums2 = {1, 1, 2, 2, 2, 2, 2};
    vector<int> answer = sumOfArray(nums1,8,nums2,7);
    cout<<"Sum Of The Two Arrays:";
    for (int i = 0; i < answer.size(); i++)
    {
        cout<<answer[i];
    }
    



    
   
    return 0;
}