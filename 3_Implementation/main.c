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



