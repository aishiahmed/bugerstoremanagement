

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "splash.h"

void login();
void add();         // prototype of FUNCTIONS
void room_rst();     //resturant
void list();
void menuofburger();
void edit();
void delete1();
void search();
void check_out();




char uname[10],c=' ';
char cs_name[20];
int room_no_res;
int rest_charges;

//structure for resturant
struct rest{
		char item_name[30];
		char item_chat[20];
		int unit;
		int charges;
	}res[20];


//STRUCTURE for room reservation
struct CustomerDetails
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[12];
	char nationality[15];
	char email[20];
	char time[10];
	char arrivaldate[10];
	int final_bill;
}s;

// login function
void login()
{


	splash_screen();
	int a=0,i=0;

    char pword[10],code[10];
    char user[10]="rafiahmed";     // username set
    char pass[10]="1234567";     // password set
    do
{
	system("cls");

    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t|        *****************************          |\n");
	printf("\t\t\t|        *                          *           |\n");
	printf("\t\t\t|        *     WELCOME TO Chillox   *             |\n");
	printf("\t\t\t|        *               *              |\n");
	printf("\t\t\t|        *                        *             |\n");
	printf("\t\t\t|        *                          *           |\n");
	printf("\t\t\t|        *****************************          |\n");
	printf("\t\t\t|                            |\n");
	printf("\t\t\t|                |\n");
	printf("\t\t\t|                           |\n");
	printf("\t\t\t|                                   |\n");
	printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;                                           //Enter button is the ASCII code of 13.. loop will end after pressing enter
	    else printf("*");                                          // printing **** for password
	    i++;
	}
	pword[i]='\0';

	i=0;
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)          // Comparing user and password with the user given one for going to next step
 	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");

	break;
	}
	else
	{
		printf("\n\n\n\t        SORRY !!!!  LOGIN IS UNSUCESSFUL");  // if wrong username or password is input then it will retry
		a++;
		printf("\n\t\t       Please try again!");

		getch();

	}
}
	while(a=1);
//	if (a>2)
//	{
//
//
//		getch();
//
//		}
		system("cls");
}                             //End of login function


// MAIN FUNCTION
int main()
{
    system("color B5");     // Changing background color and font color
	int i=0;

//	ClearConsoleToColors(1,14);         //function call to change console background color

    Sleep(1000);
	time_t t;            //declaring time with the computers time
	time(&t);
	char customername;
	char choice;
    login();                    //login function will take place here

    system("cls");              // console will goto new page
	while (1)                  // INFINITE LOOP
	{
		system("cls");

         //New page for displaying main page
		 for(i=0;i<80;i++)
		printf("-");           // printing ------- for design
		printf("\n");
		printf("   ~~~~~~~~~~~~~~~~~~~~~~  MENU   ~~~~~~~~~~~~~~~~~~~~~~\n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");


		printf("\t\t ***Enter the command you want to choose***:");
		printf("\n\n");
		printf("\n--------------------------------");
        printf(" \n Enter 1 -> chillox");
		printf("\n-----------------------------");
        printf(" \n Enter 2 -> Customer Details System ");
		printf("\n-------------------------------------");
		printf(" \n Enter 3 -> Delete Customer Details");
		printf("\n------------------------------------");
		printf(" \n Enter 4 -> Search Customer Details");
		printf("\n------------------------------------");
		printf(" \n Enter 5 -> Edit Details");
		printf("\n-------------------------");
		printf(" \n Enter 6-> Checkout option");
		printf("\n----------------------------");
		printf(" \n Enter 7 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++)
		printf("-");
	    printf("\nCurrent date and time : %s",ctime(&t));           //printing time and date mathching the computers one
 	    for(i=0;i<80;i++)
		printf("-");

		choice=getche();
		choice=toupper(choice);
		switch(choice)                 // SWITCH STATEMENT
		{
            case'1':                 //if user press 2 resturant order will appear
               menuofburger ();
                break;
			               //If user press 3 then list of booked room and information will appea

			          // if user press 8 thn system will be terminated
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				exit(0);
				break;
			default:


				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}











void menuofburger(void){


	system("cls");

	printf("\n\n\t\t\t    \n\n");


	printf("\n\nPress Any Key to See the Menu & Order Meal:");
	getch();
	system("cls");


	printf("\n\n\t\t\t\t    MENU\n\n");


	printf("\n\n\n\t\t\t\t\"Burger heaven\"");
	printf("\n\n");



	printf("\n\n\n\n\t\t\t\t   \"BARBECUES\"");
	printf("\n\n");

	printf("\n   %-10s %-30s %-20s %-10s \n\n","S.No","Item Name","Rate(BDT..)","Unit");


	printf("\n   %-10d %-30s %-20.0f %-10s \n",1,"Chicken Tikka",400.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",2,"Chicken Seekh Kababs",500.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",3,"Grilled Salmon Tikka",500.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",4,"Mutton Seekh Kababs",550.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n\n",5,"Grilled Lamb Chops",750.00,"PLATE");



	printf("\n\n\n\n\t\t\t\t\"CHINESE & SOUPS\"");
	printf("\n\n");

	printf("\n   %-10s %-30s %-20s %-10s \n\n","S.No","Item Name","Rate(BDT..)","Unit");


	printf("\n   %-10d %-30s %-20.0f %-10s \n",1,"Chicken Sizzler",900.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",2,"Chicken Shashlik",800.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",3,"Chicken Chilli Dry",750.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",4,"Chicken Tempure",800.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",5,"Chicken Chow Mien",750.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",6,"Chicken Sweet & Sour",700.00,"PLATE");


	printf("\n\n\n\n\t\t\t\t   \"SEA FOOD\"");
	printf("\n\n");

	printf("\n   %-10s %-30s %-20s %-10s \n\n","S.No","Item Name","Rate(BDT..)","Unit");


	printf("\n   %-10d %-30s %-20.0f %-10s \n",1,"Karahi Prawn",1100.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",2,"Masala Fish",1000.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",3,"Prawn Tikka Masala",1050.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",4,"Tawa Chilli Prawn",1100.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n\n",5,"Kurkuri Fried Fish",950.00,"PLATE");



	printf("\n\n\n\n\t\t\t     \"HAMBURGERS & SANDWICHES\"");
	printf("\n\n");

	printf("\n   %-10s %-30s %-20s %-10s \n\n","S.No","Item Name","Rate(BDT..)","Unit");


	printf("\n   %-10d %-30s %-20.0f %-10s \n",1,"Zinger Burger",600.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",2,"Chicken Cheese Burger",650.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",3,"Beef Cheese Burger",600.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",4,"Oriental Chicken Burger",550.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",5,"Club Sandwich",400.00,"PCS");
	printf("\n   %-10d %-30s %-20.0f %-10s \n",6,"French Fries",200.00,"PLATE");
	printf("\n   %-10d %-30s %-20.0f %-10s \n\n",7,"Crispy Fried Burger",600.00,"PCS");













	char ch='y';
	int bill,order_type;
	int i=0;
	printf("\n\n%c Please Order the Meal From the Above Menu:\n",4);


	printf("\n\n         Customer Name:");
	fflush(stdin);
	gets(s.name);

	//gotoxy(48,230);
	printf("Room Number:");
	//fflush(stdin);
	scanf("%d",&room_no_res);

	rest_charges=0; // this variable is for each item its not the final bill

	printf("\n\t %c Order Type(Restaurant=1 Room Service=2):",16);
	scanf("%d",&order_type);


	do{
		bill=0;
		printf("\n\n%c Category:",248);
		fflush(stdin);
		gets(res[i].item_chat);

		printf("\n%c Item Name:",248);
		fflush(stdin);
		gets(res[i].item_name);

		printf("\n%c Quantity:",248);
		fflush(stdin);
		scanf("%d",&res[i].unit);

		printf("\n%c Price:",248);
		scanf("%d",&res[i].charges);
        fflush(stdin);
		bill=res[i].unit*res[i].charges;

		rest_charges+=bill;// this will increment the cost of each item to the final bill

        printf("\n\nYou ordered %d %s",res[i].unit,res[i].item_name);
        printf("\nYour bill is :%d ", rest_charges);
		printf("\n\nDo You Want to Order Another Meal:\n");
 		i++;
		ch=getche();

	}

	while(ch=='y'||ch=='Y');


}



