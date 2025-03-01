class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high = x ;
        int res=0;
        if(x==0||x==1){
            return x;
        }
        else{
            while(low<=high){
            long long mid= low+(high-low)/2;
            long long num = mid*mid;
            if(x==num){
                return mid;
                break;
            }
            else if(num<x){
                res=mid;
                low = mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }

        return res;
    }
};