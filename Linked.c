#include<stdio.h>
void main()
{
    int f[50], p,i, st, len, end, j, c, k, a;
    for(i=0; i<50; i++)
        f[i]=0;
    printf("Enter how many blocks allocated: ");
    scanf("%d",&p);
    printf("Blocks are allocated: ");
    for(i=0; i<p; i++)
    {
        scanf("%d",&a);
        f[a]=1;
    }
x:
    printf("Index starting block: ");
    scanf("%d", &st);
y:
    printf("Index length: ");
    scanf("%d",&len);
z:
    printf("Index ending block: ");
    scanf("%d",&end);
    k=len;
    if(f[st]==0)
    {
        printf("\nInd Block  -------->  Allocated\n");
        for(j=st; j<(st+k); j++)
        {
            if(f[j]==0)
            {
                f[j]=1;
                printf("     %d  ------------>  %d\n",j,f[j]);
            }
            else
            {
                printf("     %d  ------------>  previously allocated \n",j);
                k++;
            }
        }
    }
    else
        printf("%d starting block is previously allocated \n",st);
    getch();
}
