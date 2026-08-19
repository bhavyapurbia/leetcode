class Solution {
public:
    bool isPalindrome(int x) {
        if ( x < 0 ) {
            return false;
        }
        double rev = 0;
        int temp = x;
        while(x!=0){
            int n = x%10;
            x /= 10;
            rev = rev * 10 + n;
        }
        if ( rev == temp ) {
            return true;
        } else {
            return false;
        }
    }
};