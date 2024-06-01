class Solution {
public:
    int reverse(int x) {
        long long int n = x;
        vector<int> number;
        long long int reversed = 0;

        if (n > 0) {
            while (n > 0) {
                number.push_back(n % 10);
                n = int(n / 10);
            }
            for (int value : number) {
                reversed = reversed*10 + value;
                if(reversed<INT_MIN || reversed>INT_MAX){
                    return 0;
                }
            }
            return reversed;
        } else {
            n = -n;
            while (n > 0) {
                number.push_back(n % 10);
                n = int(n / 10);
            }
            for (int value : number) {
                reversed = reversed*10 + value;
                if(reversed<INT_MIN || reversed>INT_MAX){
                    return 0;
                }
            }
            return (-1 * reversed);
        }
    }
};
