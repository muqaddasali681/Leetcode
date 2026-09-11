class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sumNumber = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                sumNumber = nums[i] + nums[j]; 
                if(sumNumber == target) {
                    return {i,j};
                }               
            } 
        }
        

      return {0};  
    }
};