#include<stdio.h>
int myString(char mychar[],int s)
	{
	int i;
	
	for(i=0;mychar[i]!='\0';i++)
		{
		if(mychar[i]==' ')
			{
			printf("\n");
			}
		printf("%c",mychar[i]);
		}
	int upc=0,loc=0,rem=0;
	for(i=0;mychar[i]!='\0';i++)
		{
		if(mychar[i]>='a' &&mychar[i]<='z')
			{
			loc++;
			}
		else if (mychar[i]>='A' &&mychar[i]<='Z')
			{
			upc++;
			}
		else
		{
		rem++;
		}
		
		}
	printf("\n number of lower case is :%d",loc);
	printf("\n number of upper case is :%d",upc);
	printf("\n number of other char is :%d",rem);
	
	return loc+upc+rem;
	}
void main()
	{
	char ch[200];
	printf("Enter an string :");
	fgets(ch,200,stdin);
	//myString(ch,200);
	printf("\nsize is %d",myString(ch,200));
	}