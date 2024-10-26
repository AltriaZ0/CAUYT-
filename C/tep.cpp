class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=0,m=nums.size();
        while(n!=m){ 
            if(nums[m]>target){
                m--;  
            }
            else if(nums[n]+nums[m]>target){
                m--;
            }
            else{
                n++;
            }
            if(nums[m]+nums[n]==target){
                return n,m
            }
        }
        }
    };
