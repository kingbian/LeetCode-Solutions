#include <iostream>
#include <vector>

using namespace std; 

vector<int> smallerThanCurrent(vector<int>& nums){
    vector<int> ans; 
    

    for(int i=0; i<nums.size(); ++i){
        int count =0; 
        for( int j=0; j<nums.size(); ++j){
            
            if(i !=j && nums[j]<nums[i]){
                count++;
            }

        }
        ans.push_back(count); 
    }

    return ans; 
}

// hashmap????

int main(){

    vector<int> nums{ 8, 1, 2, 2, 3 };

    for(int i: smallerThanCurrent(nums)){
        cout<<i;
    }
    cout<<endl;
}