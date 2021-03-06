/* (60) Enter inputs, then display the 
prime and composite.
(void, struct, array functions) <Comp1/MATH1> */

#include<stdio.h>
struct sample
	{
	long x,i,j,array[100],count,temp;
	long prime[100],m,countprime;
	long composite[100],n,countcomposite;
	};


void print (struct sample);

main()
	{
	struct sample a;
	clrscr();
	a.m=0;
	a.n=0;
	a.countprime=0;
	a.countcomposite=0;

	printf("Input(s): ");
	scanf("%ld",&a.x);

	printf("Input: ");

	for (a.i=0;a.i<a.x;a.i++)
		{
		scanf("%ld",&a.array[a.i]);
		}


for (a.i=0;a.i<a.x;a.i++)
{
a.count=0;
	for (a.j=2;a.j<a.array[a.i];a.j++)
		{
		if (a.array[a.i]%a.j==0)
			{
			a.count++;
			}
		}

	if (a.count==0)
		{
		a.prime[a.m]=a.array[a.i];
		a.m++;
		a.countprime++;
		}
	else
		{
		a.composite[a.n]=a.array[a.i];
		a.n++;
		a.countcomposite++;
		}
}


for (a.i=0;a.i<a.countprime-1;a.i++)
	{
	for (a.j=0;a.j<a.countprime-a.i-1;a.j++)
		{
		if (a.prime[a.j]>a.prime[a.j+1])
			{
			a.temp=a.prime[a.j];
			a.prime[a.j]=a.prime[a.j+1];
			a.prime[a.j+1]=a.temp;
			}
		}
	}

for (a.i=0;a.i<a.countcomposite-1;a.i++)
	{
	for (a.j=0;a.j<a.countcomposite-a.i-1;a.j++)
		{
		if (a.composite[a.j]<a.composite[a.j+1])
			{
			a.temp=a.composite[a.j];
			a.composite[a.j]=a.composite[a.j+1];
			a.composite[a.j+1]=a.temp;
			}
		}
	}

	print (a);
	getch();
	}

void print (struct sample b)
	{
	printf("Output (Ascending): ");
	for (b.i=0;b.i<b.countprime;b.i++)
		{
		printf(" %ld ",b.prime[b.i]);
		}

	printf("\n");
	printf("Output (Descending): ");
	for (b.i=0;b.i<b.countcomposite;b.i++)
		{
		printf(" %ld ",b.composite[b.i]);
		}
	
	}


