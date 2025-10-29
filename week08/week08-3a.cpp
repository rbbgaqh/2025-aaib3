///week08-3a.cpp
class Solution {
public:
    void myPrint(int a[3][3]){
        for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
              }
              cout<<"\n";
        }
        cout<<"\n";
    }
    string tictactoe(vector<vector<int>>&moves){
        int a[3][3]={};//有大括號
        int now=1;//1:玩家A第一個玩家 2:玩家B 第二個玩家
        for(vector<int> move:moves){
            int i=move[0],j=move[1];
            a[i][j]=1;//玩家A是第一個玩家
            myPrint(a);//把陣列印出來
            if(now==1)now=2;//A下完換B下
            else now=1;//B下完將換A下
        }
        return"A";//先隨便return
    }
};
