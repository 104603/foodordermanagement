#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
//void gotoxy(int x,int y);
void returnfunc(void);

void mainmenu(void);

void administration(void);
void customer(void);

void addrecord(void);
void deleterecord(void);
void searchrecord(void);
void viewrecord(void);

void vegetarian(void);
void nonvegetarian(void);
void details(void);
void aboutus(void);

void Password(void);
int getdata();

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

