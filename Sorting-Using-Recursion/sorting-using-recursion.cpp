#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &nums, int temp){
    if(nums.size()==0 ||  nums.back()<=temp){
        nums.push_back(temp);
        return;
    }
    int val=nums.back();
    nums.pop_back();
    insert(nums, temp);
    nums.push_back(val);
}

void sort(vector<int> &nums){
    if(nums.size()==1){
        return;
    }
    int temp=nums[nums.size()-1];
    nums.pop_back();
    sort(nums);
    insert(nums, temp);
}



void print(vector<int> nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums={4, 7, 1, 9, 3, 5};
    cout<<"Before Sorting: "<<endl;
    print(nums);
    cout<<endl;
    sort(nums);
    cout<<"After Sorting: "<<endl;
    print(nums);
}