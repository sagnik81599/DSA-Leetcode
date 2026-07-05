class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long original=x;
        long reminder;
        long reverse=0;
        while(x!=0){
            reminder = x%10;
            reverse = reverse * 10  + reminder;
            x=x/10;
        }
            if(original!=reverse){
                return false;
            }
            return true;
    }
};