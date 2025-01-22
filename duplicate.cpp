class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
   for(i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
   return false;   
    }
};
