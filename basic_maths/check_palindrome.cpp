class Solution {
public:
    bool isPalindrome(int x) {
        int org=x;
        int rev=0;
        int rem=0;
        if (org<0){
            return false;
        }
        while (x!=0){
            rem=x%10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev=rev*10 + rem;
            x=x/10;
        }
        if (rev==org){
            return true;
        }
        return false;
    }
};
