class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0, n=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            if(nums[i]==0){
                k++;
            }
            nums[i]=abs(nums[i]);
        }
        if(k>0){
            sort(nums.begin(), nums.end(), greater<int>());
        }
        for (auto i = ans.begin(); i != ans.end(); ++i) {
            if (*i == 0) {
                ans.erase(i);
                i--;
            }
        }
        for(int i=0;i<nums.size() - k;i++){
            if(k==0) break;
            nums[i]=ans[i];
        }
    }
};
