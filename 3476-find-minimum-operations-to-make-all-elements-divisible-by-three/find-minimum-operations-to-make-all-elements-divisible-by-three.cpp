class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int operations =0;
        for(int i=0;i<n;i++){
            if(nums[i]%3==1){
                nums[i]=nums[i]-1;
                operations=operations+1;
            }
            if(nums[i]%3==2){
                nums[i]=nums[i]+1;
                operations=operations+1;
            }
        }
        return operations;
    }
};