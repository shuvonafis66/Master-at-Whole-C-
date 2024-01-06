#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    int i = 0, y, sum = 0;
    int originalNum = num; // Store the original number

    // Calculate the number of digits in num
    int numDigits = 0;
    while (num != 0) {
        num = num / 10;
        numDigits++;
    }

    // Reset num to the original value
    num = originalNum;

    while (num != 0) {
        y = num % 10;
        sum = sum + pow(y, numDigits); // Use numDigits as the exponent
        num = num / 10;
    }

    if (sum == originalNum) // Compare with the original number
        return true;
    else
        return false;
}