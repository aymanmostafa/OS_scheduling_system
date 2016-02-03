#include <iostream>
using namespace std;
int main()
{
	
	/*int x;
	cout<<"enter no. of programs\n";
	cin>>x;
	float *arr=new float [x];
	float *bur=new float [x];
	int z=0;
	while(z++<x)
	{
		cout<<"enter the arrival time of p"<<z<<endl;
		cin>>arr[z-1];
		cout<<"and its burst time\n";
		cin>>bur[z-1];
	}
	cout<<"Enter 1 for FCFS or 2 for SJF-non primitive\n";
	int ff=0;
	cin>>ff;
	if(ff==1){
	float j=0,t=0,w=0;
	z=0;
	float suma=0,sumw=0;
	while(z++<x)
	{
		j+=bur[z-1];
		t=j-arr[z-1];
		w=t-bur[z-1];
		cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
		suma+=t;
		sumw+=w;
	}
		cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
    }
    if(ff==2){
    int c=0,s=0,min=0;
    float *fin=new float [x];
    z=0;
    while(z++<x)
    {
    	s=0,min=0;
    	while(s++<x)
    	if(arr[s-1]<=c&&arr[s-1]>=0&&bur[s-1]<bur[min])   	min=s-1;
    	arr[min]*=-1;
    	c+=bur[min];
    	fin[min]=c;
    }
    z=0;
    while(z++<x) cout<<fin[z-1]<<endl;
    z=0;
    float suma=0,sumw=0;
    while(z++<x)
	{
		float t=fin[z-1]-(arr[z-1]*-1);
		float w=t-bur[z-1];
		cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
		suma+=t;
		sumw+=w;
	}
	cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;
    }*/
    //--------------------------------------------------------------------
   /*int z=0,x;
    cout<<"enter no. of programs\n";
	cin>>x;
		float *arr=new float [x];
	float *bur=new float [x];
	float *prr=new float [x];
	while(z++<x)
	{
		cout<<"enter the arrival time of p"<<z<<endl;
		cin>>arr[z-1];
		cout<<"and its burst time\n";
		cin>>bur[z-1];
		cout<<"and its priority\n";
		cin>>prr[z-1];
	}


int c=0,s=0,min=0;
    float *fin=new float [x];
    z=0;
    while(z++<x)
    {
    	s=0,min=0;
    	while(s++<x)
    	if(arr[s-1]<=c&&arr[s-1]>=0&&prr[s-1]<prr[min])   	min=s-1;
    	arr[min]*=-1;
    	c+=bur[min];
    	fin[min]=c;
    }
   // z=0;
  //  while(z++<x) cout<<fin[z-1]<<endl;
    z=0;
    float suma=0,sumw=0;
    while(z++<x)
	{
		float t=fin[z-1]-(arr[z-1]*-1);
		float w=t-bur[z-1];
		cout<<"the T(a) of p"<<z<<" = "<<t<<endl<<"and its T(w) = "<<w<<endl;
		suma+=t;
		sumw+=w;
	}
	cout<<"Average T(a) = "<<suma/x<<"\n and average T(w) = "<<sumw/x<<endl;*/
	//-----------------------------------------------------------------------------------
	/*int x;
	cout<<"enter no of process";
	cin>>x;
	int all[x][3],max[x][3],ava[1][3];
	int i,j;
	for(i=0;i<x;i++)
	{
		cout<<"enter the allocation of P"<<i+1<<" sperated each digit with a space\n";
		for(j=0;j<3;j++)
		cin>>all[i][j];
	}
	for(i=0;i<x;i++)
	{
		cout<<"enter the max. of P"<<i+1<<" sperated each digit with a space\n";
		for(j=0;j<3;j++)
		cin>>max[i][j];
	}
	cout<<"enter the available sperated each digit with a space\n";
	cin>>ava[0][0]>>ava[0][1]>>ava[0][2];
	for(i=0;i<x;i++){
	for(j=0;j<3;j++)
	max[i][j]-=all[i][j];}
	int z=0,c=0,min=0;
	while(z++<x)
	{
		for(i=0;i<x;i++)
		{
			c=0;
			for(j=0;j<3;j++)
			{
				if(max[i][j]<=ava[0][j]&&max[i][0]!=-1)
				c++;
				if(c==3)
				{
					min=i;
					goto dd;
				}
			}
		}
	dd:	if(c<3)
		{
			cout<<"The system is not in safe-state\n";
			return 0;
		}
		for(i=0;i<3;i++)
		ava[0][i]+=all[min][i];
		max[min][0]=-1;
		cout<<"P"<<min+1<<" &new work="<<ava[0][0]<<" "<<ava[0][1]<<" "<<ava[0][2];
		if(z!=x) cout<<" --->";
	}
	cout<<"\nThe system is in safe-state";*/
    return 0;
}
