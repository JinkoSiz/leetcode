class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> res;
        for(int i=0;i<mat.size();i++){
            res.push_back(make_pair(accumulate(mat[i].begin(),mat[i].end(), 0),i));
        }
        sort(res.begin(), res.end());
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(res[i].second);
        }
        return result;
    }
};
