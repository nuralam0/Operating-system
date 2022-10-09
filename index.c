#include<stdio.h>
void main()
{
    int f[50],ind[50],n,i,j,k,c,indx,count=0;
    for(i=0; i<50; i++)
        f[i]=0;
x:
    printf("Enter Index block: ");
    scanf("%d",&indx);
    if(f[indx]!=1)
    {
        printf("Enter no of blocks needed: ");
        scanf("%d",&n);
        printf("Enter no of files for Index: ");
    }
    else
    {
        printf("%d Index is already allocated \n",indx);
        goto x;
    }
y:
    count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &ind[i]);
        if(f[ind[i]]==0)
            count++;
    }
    if(count==n)
    {
        for(j=0; j<n; j++)
            f[ind[j]]=1;
        printf("\nIndex Block------->File Indexed------->Allocated\n");
        for(k=0; k<n; k++)
            printf("  %d --------------> %d ----------------> %d\n",indx,ind[k],f[ind[k]]);
    }
    else
    {
        printf("File in the Index is already allocated \n");
        printf("Enter another file Indexed");
        goto y;
    }
    printf("\nDo you want to enter more file?\n(Press 1 for 'Yes'/Press 0 for 'No') --> ");
    scanf("%d", &c);
    if(c==1)
        goto x;
    else
        exit(0);
    getch();
}
