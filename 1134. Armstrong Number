bool checkArmstrong(int n){
	 
   long long int ans = 0;  // To store the sum of cubes of digits
    int actual_num = n;  // Store the original number
    int count = 0;
    while (n != 0) {
        n = n / 10;  // Remove the last digit
        count++;
    }
    n = actual_num;
    while (n != 0){
        int digit = n % 10;
        ans = ans + pow(digit, count);
        n = n/10;
    }   

    // Compare the sum of cubes with the original number
    return ans == actual_num;
}
