#include<stdio.h>
void checkFunction(int arr[],int s)
	{
	int i,c,j;
	//for checking prim number
	printf("prim \n");
	for(j=0;j<s;j++)
		{
		c=0;
		for(i=2;i<arr[j];i++)
		{
		if(arr[j]%i==0)
			{
			c++;
			}
		}
		if(c==0)
			{
			printf("\n%d is  prime",arr[j]);
			}
		else
			{
			printf("\n%d is  not prime",arr[j]);
			}
		
		}
	//for sorting even and odd
	printf("\nsorting \n");
	int ceven=0,codd=s-1,temp;
	for(i=0;i<s;i++)
		{
		if(arr[ceven]%2==0)
		{
			ceven++;
		}
		if(arr[codd]%2==1)
		{
			codd--;
		}
		if(ceven<codd)
			{
			temp=arr[ceven];
			arr[ceven]=arr[codd];
			arr[codd]=temp;
			}
			
		}
	for(i=0;i<s;i++)
		{
		printf("\t%d",arr[i]);
		}
	//check if there any negative in the array
	printf("\n checking if there is negative number\n");
	int found=0;
	for(i=0;i<s;i++)
		{
		if(arr[i]<0)
			{
			arr[i]=0;
			found++;
			}
		}
	printf("negative number in array is %d",found);
	
	}
void main()
	{
	int n,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arra[n];
	printf("enter %d numbers",n);
	for(j=0;j<n;j++)
		{
		scanf("%d",&arra[j]);
		}
	checkFunction(arra,n);
           }
		
	