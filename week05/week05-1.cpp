//work05-1.cpp
//LeetCode�ǲ߭p�e
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;//�r��
        while(ss>>word){///cin>>word�@�� �{�b��ss�i�H��ss>>word
        cout << word;
    }
    cout << word;//�������� �ݿW���
    return word.length();
    }
};
