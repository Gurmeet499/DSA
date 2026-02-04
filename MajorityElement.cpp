#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// this is brute force aproach but this not optimiz solution
int Mjelement(vector<int> nums){
int n = nums.size();

for(int val:nums){
    int freq =0;
    for(int el:nums){
        if(el == val){
          freq++;
        }
    }
    if(freq > n/2){
        return val;
    }

}
return -1;}
// slight optimize solution
   int majorityElement(vector<int> nums) {
        int n = nums.size();
        int frq = 1;
        int ans = nums[0];

       sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                frq++;
            }
            else{
                frq = 1;
                ans = nums[i];
            }

            if(frq > n/2){
                return ans;
            }
        }

return -1;
}

// most optimize solution called moore's  vloting algo
int majorityElment(vector<int> nums){
    int n = nums.size();
    int freq =0,ans =0;

    for(int i=0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    // this extra code is for if majority elment doesnot exists
    
    int count =0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2) => ans;
    else => -1;

    
   return ans;
}


int main(){

    vector<int> nums = {1,2,2,1,1};
 
    cout<<majorityElment<<endl;


    return 0;

}
