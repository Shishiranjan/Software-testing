#include<bits/stdc++.h>
using namespace std;

int t[7][3];
int a[3],b[3],c[3];
int a1,a2,b1,b2,c1,c2;

void equi_val()
{

	a[0]=a1-1,a[1]=a2+1,a[2]=(rand()%(a2-a1+1))+a1;
	b[0]=b1-1,b[1]=b2+1,b[2]=(rand()%(b2-b1+1))+b1;
	c[0]=c1-1,c[1]=c2+1,c[2]=(rand()%(c2-c1+1))+c1;
	
	int i=0;
	while(i<2)
	{
		t[i][0]=a[i];
		t[i][1]=b[2];
		t[i][2]=c2;
		i++;
	}
	while(i<4)
	{
		t[i][0]=a[2];
		t[i][1]=b[i-2];
		t[i][2]=c[2];
		i++;
	}
	while(i<6)
	{
		t[i][0]=a[2];
		t[i][1]=b[2];
		t[i][2]=c[i-4];
		i++;
	}
	t[i][0]=a[2];
	t[i][1]=b[2];
	t[i][2]=c[2];
}

int greatest(int x[])
{
	cout<<"\nThe values of a b and c are "<<x[0]<<" "<<x[1]<<" "<<x[2];
	
	if(x[0]<a1||x[0]>a2||x[1]<b1||x[1]>b2||x[2]<c1||x[2]>c2)
	{
		cout<<"\nInvalid Input";
		return -1;
	}

		int max;
		if(x[0]>x[1] && x[0]>x[2])
		{
			max=x[0];
		}
		else if(x[1]>x[0] && x[1]>x[2])
		{
			max=x[1];
		}
		else
		{
			max=x[2];
		}
	
	return max;
	
}

main()
{
	
	cout<<"Enter the range of first variable ";
	cin>>a1>>a2;
	cout<<"\nEnter the range of second variable ";
	cin>>b1>>b2;
	cout<<"\nEnter the range of third variable ";
	cin>>c1>>c2;
	
	equi_val();
	
	for(int i=0;i<7;i++)
	{
		int k=greatest(t[i]);
		if(k==-1)
		continue;
		else
		cout<<"\nThe maximum is "<<k;
	}
}
