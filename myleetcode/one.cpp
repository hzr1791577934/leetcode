#1.two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = 0;
        int start = 6,end = 6;
        for(int i = 0;i<nums.size();i++)
        {          
            for(int j = 0;j<nums.size();j++)
            {   
                if(i == j)
                {
                    continue;
                }
                if(nums[i]+nums[j] == target)
                {
                    start = i; 
                    end = j;
                    goto part2;
                }
            }
        }
        part2:
        vector<int> v;
        v.push_back(start);
        v.push_back(end);
        return v;
    }
};
