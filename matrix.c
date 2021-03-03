#include<stdio.h>
int main()
{
    int node,i,j;
    int a=0;
    char x = 'A';
    scanf("%d", &node);
    int matrix[node][node];
    for(i=0;i<node;i++)
        for(j=0;j<node;j++)
            scanf("%d", &matrix[i][j]);
    for(i=0;i<node;i++)
    {
        for(j=0;j<node;j++)
       {
           if(matrix[i][j] == 1)
                a++;
        }
        printf("In Degree of %c is %d\n", x,a);
        a=0;
        for(j=0;j<node;j++)
            if(matrix[j][i] == 1)
                a++;
        printf("Out Degree of %c is %d\n", x++,a);
        a=0;
    }
    return 0;
}
