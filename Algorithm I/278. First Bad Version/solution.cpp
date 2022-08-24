class Solution {
public:
    int firstBadVersion(int n) {
        long l=1, r=n, mid=n/2;
        for(long i=1;i<=mid + 1;i++){
            if(isBadVersion(l)==true){
                return l;
            }
            if(isBadVersion(r)==false){
                return r + 1;
            }
            r--;
            l++;
        }
        return 0;
    }
};
