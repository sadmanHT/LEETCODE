class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            long long int ans = 0;
    int actual_num = x;
    while (x != 0){
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x/10;
    }   
    if(ans == actual_num) return true;
    else return false;
        }
    }
};
