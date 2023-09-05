#include<stdio.h>
int main(){
int bt[20],wt[20],tat[20],p[20],i,n,k,temp;
float wtavg, tatavg;
print("\n Enter the no.of processes");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i]=i;
printf("\nEnter burst time for process %d",i);
scanf("%d" ,&bt[i]);
}
for(i=0;i<n;i++)
for(k=i+1;k<n;k++)
if(bt[i]>bt[k])
{
temp=bt[i];
bt[i]=bt[k];
bt[k]=temp;
temp=p[i];
p[i]=p[k];
p[k]=temp;
}
wt[0]=wtavg=0;
tat[0]=tatavg=bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=tat[i-1]+bt[i];
wtavg=wtavg+wt[i];
tatavg=tatav=tat[i];
}
printf("\t Process \tBurstTime \tWaitingtime \tTurnaroundtime\n");
for(i=0;i<n;i++)
{
printf("\n\t &d \t\t %d \t\t %d \t\t %d",i,bt[i],wt[i],tat[i],p[i]);
printf("\nAverage Waiting Time %f",wtavg/n);
printf("\nAverage Turnaround Time %f",tatavg/n);
}
}
