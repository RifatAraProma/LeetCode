class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, bool> check;
        vector<int> result;
        int len = nums.size();
        int looking_for;
        
        for (int i = 1; i < len; i++){
            check[nums[i - 1]] = true;
            looking_for = target - nums[i];
            if (check[looking_for]){
                result.push_back(i);
                break;
            }
        }
        
        for (int i = 0; i < len; i++){
            if (nums[i] == looking_for && check[nums[i]]){
                result.push_back(i);
                break;
            }
        }
        
        return result;
    }
};