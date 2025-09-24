///week03-4a.cpp第一種寫法
///Leetcide 學習計畫第6題
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;//偷偷塞答案 在塞回去 nums
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=0)ans.push_back(nums[i]);
          }
        for(int i=0;i<nums.size();i++){
            if(i<ans.size())nums[i]=ans[i];///塞剛剛的備份的答案
            else nums[i]=0;//之後塞0的值
        }
    }
};
