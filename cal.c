#include <stdio.h>
int main() {
    char c[1];
    int first, second;
    printf("Enter first Number: ");
    scanf("%d", &first);
    printf("Enter an operator (+, -, *,/): ");
    scanf("%s", &c);
    printf("Enter second number: ");
    scanf("%d", &second);

    switch (c[0]) {
    case '+':
        printf("%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("%d- %d = %d", first, second, first - second);
        break;
    case '*':
        printf("%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d", first, second, first / second);
        break;
    default:
        printf("Invalid Operator");
    }

    return 0;
}
