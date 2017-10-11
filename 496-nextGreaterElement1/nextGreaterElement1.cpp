class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> answer;
        for(int i = 0; i < findNums.size(); ++i){
            int found = 0;
            for(int j = 0; j < nums.size(); ++j){
                if(nums[j] == findNums[i]){
                    found = 1;
                }
                if(found){
                    if(nums[j] > findNums[i]){
                        answer.push_back(nums[j]);
                        break;
                    }
                    if(nums[j] == nums[nums.size()-1]) answer.push_back(-1);
                }
            }
        }
        return answer;
    }
};
