#include<iostream>
using namespace std;
float avgtat(int tat[], int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg=avg+tat[i];
	}
	avg=avg/n;
	return avg;
}
float avgwt(int wt[],int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg=avg+wt[i];
	}
	avg=avg/n;
	return avg;
}
int main()
{
	int n;
	cout<<"enter the no the processes: ";
	cin>>n;
	int pid[n],BT[n],CT[n],AT[n],TAT[n],WT[n],burst=0,i;
	float avg1,avg2;
	for(i=0;i<n;i++)
	{
		pid[i]=i+1;
		cout<<"AT for process "<<pid[i]<<":\n " ;
		cout<<"AT: ";
		cin>>AT[i];
		cout<<"BT: ";
		cin>>BT[i];
	}
	CT[0]=AT[0]+BT[0];
	TAT[0]=CT[0]-AT[0];
	WT[0]=TAT[0]-BT[0];
	burst=BT[0];
	for(i=1;i<n;i++)
	{
		burst=burst+BT[i];
		CT[i]=burst;
		TAT[i]=CT[i]-AT[i];
		WT[i]=TAT[i]-BT[i];
	}
	avg1=avgtat(TAT,n);
	avg2=avgwt(WT,n);
	cout<<"PID"<<"\t"<<"AT"<<"\t"<<"BT"<<"\t"<<"CT"<<"\t"<<"TAT"<<"\t"<<"WT\n\n";
	for(i=0;i<n;i++)
	{
		cout<<pid[i]<<"\t"<<AT[i]<<"\t"<<BT[i]<<"\t"<<CT[i]<<"\t"<<TAT[i]<<"\t"<<WT[i];
		cout<<endl;
	}
	cout<<"average TAT: "<<avg1;
	cout<<"avergae WT: "<<avg2;
}
