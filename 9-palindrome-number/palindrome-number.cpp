class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long sum =0;
        int n =x;
        
        for(int i =0;n!=0;i++){
            int digit = n%10;
     sum = sum * 10 + digit;   
      n =n/10;
        }
        if(x == sum){
            return true;
        }
        return false;
    }
};