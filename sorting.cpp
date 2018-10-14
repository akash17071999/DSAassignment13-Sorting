#include<iostream>
using namespace std;
class sort
{
int arr[50];
//char name[50];
int n;
public:
	void get()
	{
		cout<<"Enter the total no. of students\t";
		cin>>n;
		cout<<"Enter the percentage\t";		
		for(int i=0;i<n;i++)
		{
			//cout<<"Enter the name of student";
			//cin>>name;
			
			cin>>arr[i];
		}
	}
	void bubble()
	{
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

				}
			}
		}
	cout<<"BUBBLE SORT";
	}
	void selection()
	{
		int min;
		for(int i=0;i<n-1;i++)
		{
			min=i;
			for(int j=i+1;j<n;j++)
			{
			if(arr[j]<arr[min])
			min=j;
			}
			int temp;
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	cout<<"SELECTION SORT";
	}		
	void display()
	{
		for(int i=0;i<n;i++)
		{
		cout<<"\nsort "<<arr[i]<<endl;
		}
	}
};
int main()
{
sort s;
cout<<"SORTING";
s.get();
s.selection();
s.display();
s.bubble();
s.display();
}
