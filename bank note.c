#include <stdio.h>
int main()
{
    double n;
    int x,a,b,s,note_100,note_50,note_20,note_10,note_5,note_2,note_1,rem_1,rem_2,rem_3,rem_4,rem_5;
    int coin_50,coin_25,coin_10,coin_05,coin_01,rem_01,rem_02,rem_03,rem_04;
    scanf("%lf", &n);
    s = n;
    note_100 = s / 100;
    s = s % 100;
    note_50 = s / 50;
    s = s % 50;
    note_20 = s / 20;
    s = s % 20;
    note_10 = s / 10;
    s = s % 10;
    note_5 = s / 5;
    s  = s  % 5;
    note_2 = s / 2;
    note_1 = s % 2;


    a = n * 100;
    b = a;
    x = b % 100;
    coin_50 = x / 50;
    x = x % 50;
    coin_25 = x / 25;
    x = x % 25;
    coin_10 = x / 10;
    x =  x % 10;
    coin_05 = x / 5;
    coin_01 = x % 5;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", note_100);
    printf("%d nota(s) de R$ 50.00\n", note_50);
    printf("%d nota(s) de R$ 20.00\n", note_20);
    printf("%d nota(s) de R$ 10.00\n", note_10);
    printf("%d nota(s) de R$ 5.00\n", note_5);
    printf("%d nota(s) de R$ 2.00\n", note_2);
    printf("MOEDAS:\n%d nota(s) de R$ 1.00\n", note_1);
    printf("%d nota(s) de R$ 0.50\n", coin_50);
    printf("%d nota(s) de R$ 0.25\n", coin_25);
    printf("%d nota(s) de R$ 0.10\n", coin_10);
    printf("%d nota(s) de R$ 0.05\n", coin_05);
    printf("%d nota(s) de R$ 0.01\n", coin_01);
    return 0;
}
