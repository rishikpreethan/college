// Armstrong number between 1 and N(N is user input), print reverse of a given number

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("1. Armstrong Numbers between 1 and N\n");
    printf("2. Reverse a Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            int N, num, temp, digit, digits, sum;

            printf("Enter N: ");
            scanf("%d", &N);

            printf("Armstrong numbers between 1 and %d are:\n", N);

            for(num = 1; num <= N; num++)
            {
                temp = num;
                digits = 0;

                while(temp != 0)
                {
                    digits++;
                    temp /= 10;
                }

                temp = num;
                sum = 0;

                while(temp != 0)
                {
                    digit = temp % 10;
                    sum += pow(digit, digits);
                    temp /= 10;
                }

                if(sum == num)
                    printf("%d ", num);
            }
            break;
        }

        case 2:
        {
            int num, reverse = 0, digit;

            printf("Enter a number: ");
            scanf("%d", &num);

            while(num != 0)
            {
                digit = num % 10;
                reverse = reverse * 10 + digit;
                num /= 10;
            }

            printf("Reverse = %d\n", reverse);
            break;
        }

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}