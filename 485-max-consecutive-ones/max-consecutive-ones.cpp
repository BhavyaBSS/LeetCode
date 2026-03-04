class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0, currLen = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]) currLen++;
            else currLen = 0;
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};