/* (47) Enter # of sets: 3
Element (1): 1 2 3 0
Element (2): 1 2 4 0
Element (3): 4 5 6 0
A union B (Ascending Prime Numbers)+ {1 2 3 4 5}
(?) 
(2D array, nested for loop functions) <Comp1/MATH1> */


#include<stdio.h>
main()
{
double array[10][100],temp;
long x,temp1,m,k,prime[100],eprime[100],countprime=0;
long i, j,count[100],array1[10][100],count1[100],ptemp;
long g,y;
clrscr();

printf("Enter # of sets: ");
scanf("%ld",&x);


for (i=0;i<x;i++)
	{
	printf("Element (%ld): ",i+1);
	count[i]=0;
	for (j=0;;j++)
		{
		scanf("%lf",&temp);
		temp1=(long)temp;
		if (temp1==0)
			{
			break;
			}

		else
			{
			array[i][j]=temp;
			count[i]++;
			}

		}
	}

printf("A union B (Ascending Prime Numbers)= ");

m=0;
for (i=0;i<x;i++)
	{
	for (j=0;j<count[i];j++)
		{
		count1[j]=0;
		array1[i][j]=(long)array[i][j];

		for (k=2;k<array1[i][j];k++)
			{
			if (array1[i][j]%k==0)
				{
				count1[j]++;
				}

			}

		if (count1[j]==0)
			{
			prime[m]=array1[i][j];
			m++;
			countprime++;
			}

		}

	}



	g=0;
	y=1;
for (i=0;i<countprime;i++)
{
	for(;y<=prime[i];)
			{
			if (prime[i]==y)
				{
				eprime[g]=y;
				g++;
				y++;
				}

			else
				{
				y++;
				}
			}

	y=1;
}
for(i=0;i<g;i++)
	{
	for (j=0;j<g-1;j++)
		{
		if (eprime[j]>eprime[j+1])
			{
			ptemp=eprime[j];
			eprime[j]=eprime[j+1];
			eprime[j+1]=ptemp;
			}
		}
	}

	printf("{");
for (i=0;i<g;i++)
	{
	if (eprime[i]!=eprime[i+1])
		{
		printf(" %ld ",eprime[i]);
		}

	}
	printf("}\n");



printf("A intersect B (Happy Numbers)= ");





getch();
}