#include<stdio.h>

int main()
{
    int n,i,j,sum,tq,count=0;
    int wt[20],bt[20],tat[20],t_bt[20];
    printf("\nEnter Number of Process:");
    scanf("%d",&n);
    printf("\nEnter Time quantum:");
    scanf("%d",&tq);
    printf("\nEnter Burst Time:");
    for(i=0; i<n; i++)
    {
        printf("p[%d]:", i+1);
        scanf("%d",&bt[i]);
    }
    for(i=0; i<n; i++)
    {
        t_bt[i]=bt[i];
    }

    for(i=0; i<n; i++)
    {
        sum+=bt[i];
    }

    printf("\nProcess\t\t Burst time\t waiting Time\tTurnaround Time");
    while(count<=sum)
    {
        for(i=0; i<n; i++)
        {
            if(bt[i]>tq)
            {
                count=count+tq;
                bt[i]=bt[i]-tq;


            }
            else
            {
                if(bt[i]!=0)
                {
                    count=count+bt[i];
                    bt[i]=0;
                    tat[i]=count;
                    if(bt[i]==0)
                    {

                        printf("\np[%d]\t\t%d\t\t%d\t\t%d",i+1,t_bt[i],tat[i]-t_bt[i],tat[i]);



                    }
                }
            }
        }


    }



    return 0;
}
