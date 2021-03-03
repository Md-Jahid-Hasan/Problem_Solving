#include <stdio.h>
int main()
{
    int i,a,j,x;
    while(scanf("%d", &a)==1)
        {
            x=0;
            int n[a],b[a];
            for(i=0;i<a;i++)
                scanf("%d", &n[i]);
            for(i=0;i<a-1;i++)
            {
                b[i] = n[i] - n[i+1];
                if(b[i] < 0)
                    b[i] *= (-1);
                if(b[i]>=1 && b[i]<a)
                    {
                        for(j=0;j<i;j++){
                        if(b[i] == b[j])
                            {
                                printf("Not jolly\n");
                                x = 1;
                                break;
                            }
                        }
                    }

                else{
                    printf("Not jolly\n");
                    x=1;
                }
                if(x == 1)
                    break;
            }
            if(x == 1)
                continue;
            printf("Jolly\n");
        }
    return 0;

}

