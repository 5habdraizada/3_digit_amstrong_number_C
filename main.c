#include <math.h>
#include<stdio.h>

int main(){
    int number;
    printf("Enter a number between 100 and 999: ");
    scanf("%d",&number,"\n");
    if (number<100 || number>999) {
        printf("invalid input");
        return 0;
    }
    int last_digit = number%10;
    int middle_digit_1 = number/10;
    int middle_digit = middle_digit_1 % 10;
    int first_digit = middle_digit_1 / 10;
    int cube_last_digit = pow(last_digit,3);
    int cube_first_digit = pow(first_digit,3);
    int cube_middle_digit = pow(middle_digit,3);
    int sum_digits = cube_last_digit + cube_first_digit + cube_middle_digit;
    if (sum_digits == number) {
        printf("the given number is an amstrong number");
    }
    else{
    printf("the given number is not an amstrong number");
    }
}