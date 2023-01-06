#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int day, month, year;
	printf("day=");
	scanf("%i",&day);
	printf("month=");
	scanf("%i",&month);
	printf("year=");
	scanf("%i",&year);
	
	if(year%4==0)
	{
		printf("Visokosnyi year\n\n");
	}
	else
	{
		printf("NE Visokosnyi year\n\n");
	}

	switch(year%12)
	{
		case 2:
			{
				printf("dog year\n\n");
			}
			break;
		case 3:
			{
				printf("boar year\n\n");
			}
			break;
		case 4:
			{
				printf("mouse year\n\n");
			}
			break;
		case 5:
			{
				printf("bull year\n\n");
			}
			break;
		case 6:
			{
				printf("tiger year\n\n");
			}
			break;
		case 7:
			{
				printf("rabbit year\n\n");
			}
			break;
		case 8:
			{
				printf("dragon year\n\n");
			}
			break;
		case 9:
			{
				printf("snake year\n\n");
			}
			break;
		case 10:
			{
				printf("horse year\n\n");
			}
			break;
		case 11:
			{
				printf("goat year\n\n");
			}
			break;
		case 12:
			{
				printf("monkey year\n\n");
			}
			break;
		case 13:
			{
				printf("rooster year\n\n");
			}
			break;
	}
	
	if((month==3&&day>20)||(month==4&&day<20))
	{
		printf("You are Aries");
	}
	if((month==4&&day>19)||(month==5&&day<21))
	{
		printf("You are Calf");
	}
	if((month==5&&day>20)||(month==6&&day<21))
	{
		printf("You are Twins");
	}
	if((month==6&&day>20)||(month==7&&day<23))
	{
		printf("You are Cancer");
	}
	if((month==7&&day>22)||(month==8&&day<23))
	{
		printf("You are Lion");
	}
	if((month==8&&day>22)||(month==9&&day<23))
	{
		printf("You are Virgo");
	}
	if((month==9&&day>22)||(month==10&&day<23))
	{
		printf("You are Scales");
	}
	if((month==10&&day>22)||(month==11&&day<22))
	{
		printf("You are Scorpion");
	}
	if((month==11&&day>21)||(month==12&&day<22))
	{
		printf("You are Sagittarius");
	}
	if((month==12&&day>21)||(month==1&&day<20))
	{
		printf("You are Capricorn");
	}
	if((month==1&&day>19)||(month==2&&day<19))
	{
		printf("You are Aquarius");
	}
	if((month==2&&day>18)||(month==3&&day<21))
	{
		printf("You are Fish");
	}
}
