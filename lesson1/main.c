#include<stdio.h>


int main()
{
    int num1, num2, num3, largest;
    char name[20] = "gideon code";
    printf("enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    largest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("the largest number is: %d", largest);
    return 0;
}
