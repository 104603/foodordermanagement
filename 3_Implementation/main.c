#include <food.h>

struct employee
{

	char name[30];
	int id;
	char DOB[10];
	int dd; int mm; int yyyy;
	int YOJ;
	char place[20];
	float salary;
	char department[20];

	int quantity;
};
struct employee e;

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;


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
