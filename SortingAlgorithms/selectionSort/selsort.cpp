#include<iostream.h>
#include<conio.h>
void selsort(int num[],int size)
{	int small,pos,temp;
	for(int i=0;i<size-1;i++)
	{	small=num[i];
		for(int j=i+1;j<size;j++)
		{	if(num[j]<small)
			{	small=num[j];
				pos=j;
			}
		}
		temp=num[i];
		num[i]=num[pos];
		num[pos]=temp;
	}
}
void main()
{	clrscr();
	int a[50],s;
	cout<<"\n\t\tEnter size of the array:";
	cin>>s;
	cout<<"\n\t\tEnter the records into the array:\n\t\t";
	for(int i=0;i<s;i++)
	       {	cin>>a[i];
			cout<<"\n\t\t";
	       }
	cout<<"\n\t\tSorted array is as follows:\n\t\t";
	selsort(a,s);
	for(int n=0;n<s;n++)
	       {	cout<<a[n]<<"\n\t\t";
	       }

}
