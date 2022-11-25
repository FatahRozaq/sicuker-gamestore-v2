#include "header.h"

void firstPage() {
	system("cls");
	
	int chooseMenu;
	firstHeader();
	printf("\t\t\t\t\t\t\t | Press 1 to Login\t\t\t|\n");
	printf("\t\t\t\t\t\t\t | Press 2 to Register\t\t\t|\n");
	printf("\t\t\t\t\t\t\t | Press 3 to Admin\t\t\t|\n");
	printf("\t\t\t\t\t\t\t | Press 4 to Exit\t\t\t|\n\n");

	printf("\t\t\t\t\t\t\t Cho0se menu : ");
	scanf_s("%d", &chooseMenu);

	switch (chooseMenu)
	{
	case 1:
		login();
		break;

	case 2:
		register2();
		break;

	case 3:
		adminPage();
		break;

	case 4:
//		exit(1);
		break;

	default:
		printf("You are choose the wrong option , please choose the correct option");
		main();
		break;
	}

}

void login() {
	
	system("cls");
	
	FILE *file;
	
	long id, userId;
	int c=0;
	char name[50], password[50], pass[50], email[50];
	
	printf("\t\t\t Masukan Id :");
	scanf_s("%i", &userId);
	
	printf("\t\t\t Masukan Username :");
	scanf_s("%s", &name);
	
	printf("\t\t\t Masukan Password :");
	scanf_s("%s", &password);
	
	printf("nilai %d", userId );
	
	file = fopen("user.txt", "r");
//	
//	 while(1) {
//        
        int stop = fscanf(file, "%d %s %s %s",&name, &id, &email, &pass);
        if(stop == EOF) {
            //break;
        }
        
        // CHECK LOGIN
        if(id == userId) {
        	printf("Berhasil");
//            if(strcmp(pass, password) == 0) {
//                printf("You are logged");
//                c = 0;
//                break;
//            } else {
//                c = 1;
//            }
//        } else {
//            c = 1;
        }
//
//    }
//    
//    if(c) {
//        printf("Wrong");
//    }
//    
//    printf("\n");
	
	
//
////	char *username = (char*)malloc(20 * sizeof(char)), 
////		 *password = (char*)malloc(20 * sizeof(char));
//

//
//	firstHeader();
//
//	printf("\t\t\t Masukan Username :");
//	//fgets(name, sizeof(name), stdin); 
//    scanf_s("%s", name);
//	printf("\t\t\t Masukan Password :");
////	fgets(password, sizeof(password), stdin); 
//	scanf_s("%s", password);
//	
//	ifstream input("records.txt");
//	
//	while (input>>id>>pass){
//		if(id == name && pass == password){
//			count = 1;
//			system("cls");
//		}
//		
//		input.close();
//		
//		if(xount==1){
//			printf("%s \n Your Login is Succesful \n Thanks for logging in ! \n", name);
//			main();
//		}
//		else{
//			printf("\n LOGIN ERROR \n Please check your username and password \n");
//			main();
//		}
//	}
}

void register2() {
	system("cls");
	
	FILE *file;
	
	User reg;
	
	printf("\t\t\t Masukan Username\t\t:");
	scanf_s("%s", &reg.user);fflush(stdin);
	
	printf("\t\t\t Masukan ID\t\t:");
	scanf_s("%i", &reg.userId);fflush(stdin);
	
	printf("\t\t\t Masukan Email\t\t:");
	scanf_s("%s", &reg.email);fflush(stdin);
	
	printf("\t\t\t Masukan Password\t\t:");
	scanf_s("%s", &reg.password);fflush(stdin);
	
//	printf("\t\t\t Konfirmasi Password\t\t:");
//	scanf_s("%s", kPasswordR);
	
	file = fopen("user.txt", "a+");
    fprintf(file, "%s\t%i\t%s\t%s\n", reg.user, reg.userId, reg.email, reg.password);
    
    fclose(file);
    
    printf("\n");
    
    firstPage();
	
//
//	char userRegister[50], emailRegister[50], passwordRegister[50], kPasswordRegister[50];
//	
//	firstHeader();
//
//	printf("\t\t\t Masukan Username\t\t:");
//	scanf_s("%s", userRegister);
//	printf("\t\t\t Masukan Email\t\t\t:");
//	scanf_s("%s", emailRegister);
//	printf("\t\t\t Masukan Password\t\t:");
//	scanf_s("%s", passwordRegister);
//	printf("\t\t\t Masukan Konfirmasi Password\t:");
//	scanf_s("%s", kPasswordRegister);
//	
//	offstream f1("records.txt", ios::app);
//	f1<<userRegister<<' '<< emailRegister<<' '<<passwordRegister<<' '<<kPasswordRegister;
//	system("cls");
//	
//	printf("\n\t\t\t Registration is succesfull \n");
//	main();

	
}

void forgot() {
	system("cls");

	firstHeader();
}
