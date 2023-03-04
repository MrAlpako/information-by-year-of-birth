#include <stdio.h>

int main()
{
	int day;
	int month;
	int year;
	printf("enter date of birth in the format dd-mm-yyyy: ");
	scanf("%i-%d-%i",&day,&month,&year);
	if(year%4==0) // проверка на високосный год
	{
		printf("leap year - ");
	}
	else
	{
		printf("non-leap year - ");

}
		int y=year%12; // чей год по восточному календарю
		switch(y)
		{      
			case 0:
			{
				printf("year of the monkey - ");
			break;
			}
			case 1:
			{	
				printf("year of the rooster - ");
			break;
			}
			case 2:
			{	
				printf("year of the dog - ");
			break;
			}
			case 3:
			{		
				printf("year of the boar - ");
			break;
			}
			case 4:
			{		
				printf("year of the rat - ");
			break;
			}
			case 5:
			{	
				printf("year of the bull - ");
			break;
			}
			case 6:
			{		
				printf("year of the tiger - ");
			break;
			}
			case 7:
			{	
				printf("year of the rabbit - ");
			break;
			}
			case 8:
			{	
				printf("year of the dragon - ");
			break;
			}
			case 9:
			{	
				printf("year of the snake - ");
			break;
			}
			case 10:
			{		
				printf("year of the horse - ");
			break;
			}
			case 11:
			{		
				printf("year of the goat - ");
			break;
			}
			
		}
		if ((month==12&&day>22)||(month==1&&day<21)) // определение знака зодиака
		{
			printf("zodiac sign: capricorn");
		}
		if ((month==1&&day>20)||(month==2&&day<20))
		{
			printf("zodiac sign: aquarius");
		}
		if ((month==2&&day>19)||(month==3&&day<21))
		{
			printf("zodiac sign: pisces");
		}
		if ((month==3&&day>20)||(month==4&&day<21))
		{
			printf("zodiac sign: aries");
		}
		if ((month==4&&day>20)||(month==5&&day<22))
		{
			printf("zodiac sign: taurus");
		}
		if ((month==5&&day>21)||(month==6&&day<21))
		{
			printf("zodiac sign: gemini");
		}
		if ((month==6&&day>21)||(month==7&&day<23))
		{
			printf("zodiac sign: cancer");
		}
		if ((month==7&&day>22)||(month==8&&day<22))
		{
			printf("zodiac sign: lion");
		}
		if ((month==8&&day>21)||(month==9&&day<24))
		{
			printf("zodiac sign: virgo");
		}
		if ((month==9&&day>23)||(month==10&&day<24))
		{
			printf("zodiac sign: libra");
		}
		if ((month==10&&day>23)||(month==11&&day<23))
		{
			printf("zodiac sign: scorpio");
		}
		if ((month==11&&day>22)||(month==12&&day<23))
		{
			printf("zodiac sign: sagittarius");
		}
	}






