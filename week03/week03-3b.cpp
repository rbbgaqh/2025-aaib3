///week03-3b.cpp�G�X�@
///Leetcode �ǲ߭p�e
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) ans*=+1;
            if(nums[i]<0) ans*=-1;
            if(nums[i]==0) ans *=0;
            ///�Ʀr�V���V�j�G�u�୼+1 -1 0
        }//�Ʀr�V���V�j �N�z���F �G��week03-3b
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
