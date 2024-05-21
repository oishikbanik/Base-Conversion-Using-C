#include <stdio.h>
#include <stdlib.h>

void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main()
{
    int choice;
    char num[50];

    do
    {
        printf("\nSelect the conversion type:\n");
        printf("1. Binary to Octal\n");
        printf("2. Binary to Decimal\n");
        printf("3. Binary to Hexadecimal\n");
        printf("4. Octal to Decimal\n");
        printf("5. Octal to Binary\n");
        printf("6. Octal to Hexadecimal\n");
        printf("7. Decimal to Binary\n");
        printf("8. Decimal to Octal\n");
        printf("9. Decimal to Hexadecimal\n");
        printf("10. Hexadecimal to Binary\n");
        printf("11. Hexadecimal to Decimal\n");
        printf("12. Hexadecimal to Octal\n");
        printf("0. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            printf("Enter the Binary number: ");
            scanf("%s", num);
            printf("Binary to Octal: %s = %o\n", num, strtol(num, NULL, 2));
            break;
        case 2:
            printf("Enter the Binary number: ");
            scanf("%s", num);
            printf("Binary to Decimal: %s = %ld\n", num, strtol(num, NULL, 2));
            break;
        case 3:
            printf("Enter the Binary number: ");
            scanf("%s", num);
            printf("Binary to Hexadecimal: %s = %lx\n", num, strtol(num, NULL, 2));
            break;
        case 4:
            printf("Enter the Octal number: ");
            scanf("%s", num);
            printf("Octal to Decimal: %s = %ld\n", num, strtol(num, NULL, 8));
            break;
        case 5:
            printf("Enter the Octal number: ");
            scanf("%s", num);
            printf("Octal to Binary: %s = ", num);
            int octalValue = strtol(num, NULL, 8);
            decToBinary(octalValue);
            printf("\n");
            break;
        case 6:
            printf("Enter the Octal number: ");
            scanf("%s", num);
            printf("Octal to Hexadecimal: %s = %lx\n", num, strtol(num, NULL, 8));
            break;
        case 7:
            printf("Enter the Decimal number: ");
            scanf("%s", num);
            printf("Decimal to Binary: %s = ", num);
            decToBinary(atoi(num));
            printf("\n");
            break;
        case 8:
            printf("Enter the Decimal number: ");
            scanf("%s", num);
            printf("Decimal to Octal: %s = %lo\n", num, strtol(num, NULL, 10));
            break;
        case 9:
            printf("Enter the Decimal number: ");
            scanf("%s", num);
            printf("Decimal to Hexadecimal: %s = %lx\n", num, strtol(num, NULL, 10));
            break;
        case 10:
            printf("Enter the Hexadecimal number: ");
            scanf("%s", num);
            printf("Hexadecimal to Binary: %s = ", num);
            long decimalValue = strtol(num, NULL, 16);
            decToBinary(decimalValue);
            printf("\n");
            break;
        case 11:
            printf("Enter the Hexadecimal number: ");
            scanf("%s", num);
            printf("Hexadecimal to Decimal: %s = %ld\n", num, strtol(num, NULL, 16));
            break;
        case 12:
            printf("Enter the Hexadecimal number: ");
            scanf("%s", num);
            printf("Hexadecimal to Octal: %s = %lo\n", num, strtol(num, NULL, 16));
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
