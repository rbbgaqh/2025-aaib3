///week03-3a.cpp二合一
///Leetcode 學習計畫
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++){
            ans *=nums[i]*;
        }//數字越成越大 就爆炸了 故有week03-3b
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
