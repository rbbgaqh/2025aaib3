///week11-1b.cpp
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;///HashSet
        for(int num:nums) numsSet.insert(num);///c++的進階迴圈
        /// original是否在numSet裡面?
        while( numsSet.find(original) !=numsSet.end() ){
            original = original*2;
        }
        return original;
    }
};
