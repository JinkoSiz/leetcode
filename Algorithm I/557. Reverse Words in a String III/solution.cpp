class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                int j = i;
                for (; j < s.length() && s[j] != ' '; j++) { }
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        return s;
    }
};
