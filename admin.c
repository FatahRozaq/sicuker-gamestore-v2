#include "header.h"
#define length 256

void adminPage(){
	system("cls");
	adminHeader();
	
	int chooseMenu;

	printf("\t\t\t\t\t\t|  \t\t [1] Admin Data\t\t\t\t | \n");
	printf("\t\t\t\t\t\t|  \t\t [2] Games Data\t\t\t\t | \n");
	printf("\t\t\t\t\t\t|  \t\t [3] Help\t\t\t\t | \n");
	printf("\t\t\t\t\t\t|  \t\t [4] Exit\t\t\t\t |\n\n\n\n");
	
	printf("\t\t\t\t\t\t Choose Menu :");
	scanf_s("%d", &chooseMenu);
	
	switch(chooseMenu){
		case 1:
			adminData();
			break;
			
		case 2:
			adminGamesData();
			break;
			
		case 3:
			adminHelp();
			break;
			
		case 4:
			//exit
			break;
			
		default:
			printf("You are choose the wrong option , please choose the correct option");
			break;
	}
}

void adminGamesData(){
	system("cls");
	printf("Admin Games Data Page");
}

void adminData(){
	system("cls");
	adminHeader();
//	printf("Admin Data Page");
	
	FILE *f_text;
	char string[length];
	int chooseOption, a=0;
	
	/* pada output, tuliskan sebuah nama file yang akan dibaca, lengkap
	dengan ekstensinya! */
	/* buka file untuk dibaca */
	if ((f_text=fopen("user.txt", "rt")) == NULL)
	{
		printf("File cannot be open!\r\n");
		exit(1);
	}
	/* Baca string dari file selama masih ada */
	printf("\t\t\t\t\t\t===========================================================\n");
	printf("\t\t\t\t\t\t| NO | NAMA\t\t| ID\t| Email\t\t| Password\t|\n");
	printf("\t\t\t\t\t\t===========================================================\n");
	while ((fgets(string, length, f_text)) != NULL){
		a++;
		
		printf("\t\t\t\t\t\t %d. %s\r", a, string);
		printf("\t\t\t\t\t\t-------------------------------------------------------\n");
	}
	/* Tampilkan string ke layar */
	
	fclose(f_text); /* tutup file setiap selesai proses thd file */
	
	printf("\n\n\n");
	printf("\t\t\t\t\t\t[1] Add New Admin\n");
	printf("\t\t\t\t\t\t[2] Edit Admin\n");
	printf("\t\t\t\t\t\t[3] Delete Admin\n");
	printf("\t\t\t\t\t\t[4] Back\n");
	
	printf("\t\t\t\t\t\tChooese Option : ");
	scanf_s("%d", &chooseOption);
	
	switch(chooseOption){
		case 1:
			register2();
			break;
			
		case 2:
			editAdmin();
			break;
			
		case 3:
			deleteAdmin();
			break;
			
		case 4:
			adminPage();
			break;
			
		default:
			printf("You are choose the wrong option , please choose the correct option");
			break;
	}

}

void editAdmin(){
	system("cls");
	printf("Edit Admin Page");
	
}

void deleteAdmin(){
	system("cls");
	
	adminHeader();
	printf("Delete Admin Page");
}


void adminHelp(){
	system("cls");
	
	adminHeader();
	printf("Admin Help Page");
}


