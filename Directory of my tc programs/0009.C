/* (9) Determining if the date is valid/invalid 
(switching function) <Comp1> */


#include<stdio.h>
main()
{

int m1,y1,d1,def,def1,i=1996,j=1994;
float m,y,d,w,x,z;
clrscr();


printf("This program let's you: Determine if the date is valid/invalid.\n");
printf("Month: ");
scanf("%f",&m);
printf("Day: ");
scanf("%f",&d);
printf("Year: ");
scanf("%f",&y);

d1=(int)d;
m1=(int)m;
y1=(int)y;

x=(float)d1-d;
w=(float)m1-m;
z=(float)y1-y;

if (x<0||w<0||z<0)
	{
	printf("Ivalid Date! There's no Decimal Date!");
	}


switch(m1)
{
case 1:
case 3:
case 5:
case 7:
case 10:
case 12:
	if ((d1<=31)&&(d1>0))
	{
	printf("Valid Date!");
	}
	else
	{
	printf("Invalid Date");
	}
	break;

case 2:

	if (y1%4==0)
	{
		if((d1<=29)&&(d1>0))
		{
		printf("Valid date!");
		}
		else
		{
		printf("Invalid Date!");
		}
	}

	else
	{
		if ((d1<=28)&&(d1>0))
		{
		printf("Valid Date!");
		}
		else
		{
		printf("Invalid Date!");
		}

	}

	break;
case 4:
case 6:
case 8:
case 9:
case 11:
	if ((d1<=30)&&(d1>0))
	{
	printf("Valid Date!");
	}
	else
	{
	printf("Invalid Date!");
	}
	break;

default:

	printf("\nThere's isn't such month! ");
	break;


}

switch(d1)
{

case 9:

	if ((m1==12)&&(y1>=1996))
	{
		def=y1-i;
		if (def==0||def==1)
		{
		printf("\nYou guess Max' Birthday! \n%d Year old! ",def);
		}
		else
		{
		printf("\You guess Max' Birthday! \n%d Years old",def);
		}

		break;
	}


case 30:
	if ((m1==5)&&(y1>=1994))
	{
		def1=y1-j;
		printf("\nYou guess Lica's Birthday! \n%d Year old!",def1);
		break;
	}

default:
	break;

}

getch();
}