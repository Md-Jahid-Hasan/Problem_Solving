#include<stdio.h>
int main()
{
    int i,j,r;
    double n;
    scanf("%lf", &n);
    int s = n*100;
    int note[] = {10000,5000,2000,1000,500,200};
    int coin[] = {100,50,25,10,5,1};
    int note1[6];
    int coin1[6];
    for(i=0;i<6;i++){
        note1[i] = s/note[i];
        s = s%note[i];
    }

    for(i=0;i<6;i++){
        coin1[i] = s/coin[i];
        s = s%coin[i];
    }

    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        printf("%d nota(s) de R$ %d\n", note1[i], note[i]/100);
    }

    printf("MOEDAS:\n");
    for(i=0;i<6;i++){
        printf("%d moeda(s) de R$ %.2lf\n", coin1[i],(double)coin[i]/100);
    }
    return 0;
}
