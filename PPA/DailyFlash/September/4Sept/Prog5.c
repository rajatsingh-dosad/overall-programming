

#include<stdio.h>

void main()  {

	int year, month, date;
	printf("Enter the date month and year: ");
	scanf("%d%d%d",&date,&month,&year);
	 
	switch(month)  {

		case 1:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;

		case 2:
			if(date>28) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		
		case 3:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		
		case 4:
			if(date>30) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 5:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 6:
			if(date>30) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 7:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 8:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 9:
			if(date>30) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 10:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 11:
			if(date>30) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;
		case 12:
			if(date>31) 
				printf("Date doesn't exist!\n");
			else
				printf("Date exist!\n");
			break;

		default:
			printf("You enetered a wrong month!\n");
	}
}
