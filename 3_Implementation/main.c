#include <food.h>

int main()
{
	mainmenu();
	return 0;
}



void mainmenu(void)
{
	system("cls");
	printf("                **************************************************************************\n");
	printf("                                    WELCOME TO FOOD ORDER SYSTEM\n");
	printf("                **************************************************************************\n\n\n");
	printf("          1. ADMINISTRATION SECTION--> \n\n          2. CUSTOMER SECTION--> \n\n          3. ABOUT US--> \n\n          4. Exit--> \n\n\n             Enter Your Choice --->");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		administration();
	}
	else if(choice==2)
	{
		customer();
	}
	else if(choice==3)
	{
		aboutus();
	}
	else if(choice==4)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");

		printf("*********Feeling HUNGRY ? Call or Walk-In FOODIE GOODIE KITCHEN***************\n\n");
		exit(0);
	}
	else
	{
		printf("Wrong Input !! PLease Re-enter The Correct Option");
		if(getch()){
                system("cls");
		mainmenu();}
	}
}
