class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0){
            return false;
        }
        int sum=0;
        for(long long i=1; i<num; i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
            if(sum==num){
                return true;
        }
        return false;
    }
};