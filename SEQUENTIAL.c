#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],s[10],l[10],n,m,c,i,j,k;
    int clrscr();
    printf("Enter the total memory you want: ");
    scanf("%d",&m);
    printf("Enter the Total number of files: ");
    scanf("%d",&n);
    for(i=0; i<=m; i++)
        a[i]=-1;
    for(i=0; i<n; i++)
    {
        printf("Enter the starting block of file: %d\n ",(i+1));
        scanf("%d",&s[i]);
        printf("Enter the length of the file: %d\n",(i+1));
        scanf("%d",&l[i]);
    }
    for(i=0; i<n; i++)
    {
        for(k=s[i],j=0; j<l[i]; j++,k++)
        {
            if(a[k]==-1)
                c=0;
            else
            {
                c=1;
                break;
            }
        }
        if(c==1)
            printf("This block was already filled by file: %d\n",(a[k]+1));
        if(c==0)
        {
            for(k=s[i],j=0; j<l[i]; j++,k++)a[k]=i;
            printf("The file %d is filled from %d to %d\n",(i+1),s[i],(s[i]+l[i]-1));
        }
    }
    getch();
}
