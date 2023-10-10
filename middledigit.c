#include <stdio.h>

int main() {
    int num, count = 0, middle_digit=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // count number of digits in num
    while (num > 0) {
        count++;
        num /= 10;
    }
    
    // check if count is odd or even
    if (count % 2 == 0) {
        printf("Middle digit cannot be found for even digit numbers.\n");
    }
    else {
        // find the middle digit
        middle_digit = num;
        for (int i = 0; i < count / 2; i++) {
            middle_digit = middle_digit / 10;
        }
        middle_digit = middle_digit % 10;
        printf("Middle digit is: %d\n", middle_digit);
    }
    return 0;
}
