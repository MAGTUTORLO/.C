/* (59) Wasteful Number.
If the prime factors of a number is greater
than its digit. 
(for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()

{
long num,digits,x,y,i,t,factors,rem;
clrscr();
printf("\n Enter a Number:");
scanf("%ld",&num);
digits=0;
x=num;
y=num;

for(;y!=0;)
	{
	y=y/10;
	digits++;

	}
i=2;
t=0;
factors=0;
for(;x!=0;)
	{
	if(x%i==0)
		{
		x=x/i;
		rem[t]=i;

		factors++;
		digits++;
		}
		if(x==1)
			{
			printf("\n wastefull number");
			break;
			}
		else
		{
		i++;
		}

	}






getch();
}