#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no of process:");
	scanf("%d",&n);
	int Process[n],Burst[n];
	int Gantch[n],i;
	Gantch[0]=0;
	float a_wt=0,a_tt=0;
	printf("Enter the Burst Time:\n");
	for(i=0;i<n;i++)
	{
		Process[i]=i+1;
		printf("Enter the burst time for P%d Process:",Process[i]);
		scanf("%d",&Burst[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0){
			Gantch[i]=Gantch[i]+Burst[i];
			a_wt=0;
			a_tt=Gantch[i];
		}
		else
		{
			Gantch[i]=Gantch[i-1]+Burst[i];
			a_wt=a_wt+Gantch[i-1];
			a_tt=a_tt+Gantch[i];
		}
	}
	a_wt=(float)a_wt/n;
	a_tt=(float)a_tt/n;
	printf("Average waiting time:%.2f",a_wt);
	printf("Average Turnaround time:%.2f",a_tt);
	return 0;
}
