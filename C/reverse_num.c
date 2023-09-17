#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, rev_num, next_digit,last_digit;

printf ("Enter 5 digits number: ");
scanf("%d", &number);

last_digit = number - ((number / 10) * 10);
rev_num = last_digit;

next_digit = (number / 10) - ((number / 100) * 10);
rev_num = (rev_num * 10) + next_digit;

next_digit = (number / 100) - ((number / 1000) * 10);
rev_num = (rev_num * 10) + next_digit;

next_digit = (number / 1000) - ((number / 10000) * 10);
rev_num = (rev_num * 10) + next_digit;

next_digit = (number / 10000) - ((number / 100000) * 10);
rev_num = (rev_num * 10) + next_digit;

printf ("The Reversed Number is: %d",rev_num);

    return 0;
}