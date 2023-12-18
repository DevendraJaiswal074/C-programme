#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0, remainder;

    // Reversing the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        
        num = num / 10;
    }

    // Checking if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        return 1; // It's a palindrome
    } else {
        return 0; // It's not a palindrome
    }
}

int main() {
    int number;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is a palindrome
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}



// without using function
#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Save the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}

