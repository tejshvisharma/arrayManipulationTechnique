#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if(nums[i-1] > nums[i])
            count++;
    }
    if(nums[0] < nums[n-1])
        count++;
    return count <= 1;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 10, 11, 9};
    
    cout << "Your inputs are: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums.at(i) << ", ";
    }
    cout << endl;
    
    bool result = check(nums);
    cout << "IS VECTOR SORTED AND ROTATED OR NOT -> " << (result ? "YES" : "NO") << endl;

    return 0;
}
