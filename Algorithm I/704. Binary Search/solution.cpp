class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size() - 1, mid;
        mid=r/2;
        for(int i=0;i<mid + 1;i++){
            if(nums[l]==target){
                return l;
            }
            else if(nums[r]==target){
                return r;
            }
            l++;
            r--;
        }
        return -1;
    }
};
