#include "header.h"
#define length 256

void adminPage(){
	system("cls");
//	adminHeader();
	headerLayout("0. Back", "Admin Page\t");
	
	int chooseMenu;
	
	line(0);
	lineText("\t\t\t\t[1] User Data\t\t\t\t\t");
	lineText("\t\t\t\t[2] Games Data\t\t\t\t\t");
	lineText("\t\t\t\t[3] Help\t\t\t\t\t");
	lineText("\t\t\t\t[4] Exit\t\t\t\t\t");
	
	printf("\n\t\t\t\t Choose Menu :");
	scanf_s("%d", &chooseMenu);
	line(0);
	
	switch(chooseMenu){
		case 1:
			userData();
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

void userData(){
	system("cls");
//	adminHeader();
//	printf("Admin Data Page");

	headerLayout("0. Back", "Admin Page\t");
	
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
	printf("\t\t\t\t\t\t| NO | NAMA\t\t| ID\t| Email\t\t| Password  |\n");
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
			registerUser();
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
	
//	headerLayout("0. Back", "Edit Admin Page\t");
//	
//	User adm[50];
//	int id,index,i;
//		printf("\t\t\t\tInput ID \t: ");scanf("%i",&id);fflush(stdin);
//		printf("\n");
//		edit=fopen("user.txt","r");
//		index=0;
//	while (!feof(edit)){
//		fscanf(edit,"%[^_]_%i_%[^_]_%[^\n]\n",&adm[index].user,&adm[index].userId,&adm[index].email,&adm[index].password);
//		fscanf(file,"%[^_]_%i_%[^_]_%[^\n]\n",&log.user, &log.userId, &log.email, &log.password);
//		fflush(stdin);
//			if(id==adm[index].userId){
//				printf("\t\t\t\tInput Username \t\t: ");scanf("%[^\n]",&adm[index].user);fflush(stdin);
//				printf("\t\t\t\tInput User ID \t\t: ");scanf("%i",&adm[index].userId);fflush(stdin);
//				printf("\t\t\t\tInput Email \t: ");scanf("%s",&adm[index].email);fflush(stdin);
//				printf("\t\t\t\tInput Password \t: ");scanf("%[^\n]",&adm[index].password);fflush(stdin);
//		}
//		index++;
//	}
//	fclose(edit);
//		edit=fopen("user.txt","w");
//	fclose(file);
//		edit=fopen("user.txt","a");
//	for(i=0;i<index;i++){
//		fprintf(edit,"%s_%s_%s_%s\n",adm[i].user,adm[i].userId,adm[i].email,adm[i].password);
//	}
//	fclose(edit);
	
}

void deleteAdmin(){
	system("cls");
	
	headerLayout("0. Back", "Delete Admin Page\t");
}


void adminHelp(){
	system("cls");
	
	headerLayout("0. Back", "Admin Help Page\t");
}

void adminGamesData(){
	system("cls");

	headerLayout("0. Back", "Admin Page\t");
	
	char string[length];
	int chooseOption, a=0;
	
	if ((file=fopen("games.txt", "rt")) == NULL)
	{
		printf("File cannot be open!\r\n");
		exit(1);
	}
	/* Baca string dari file selama masih ada */
	printf("\t\t===========================================================\n");
	printf("\t\t| NO | GAME | ID | PUBLISHER | GENRE | PRICE | DESC |\n");
	printf("\t\t===========================================================\n");
	while ((fgets(string, length, file)) != NULL){
		a++;
		
		printf("\t\t %d. %s\r", a, string);
		printf("\t\t----------------------------------------------------------\n");
	}
	/* Tampilkan string ke layar */
	
	fclose(file); /* tutup file setiap selesai proses thd file */
	char gameOption;
	
	
	line(3);
	lineText("\t\t\t\t[1] Add Games\t\t\t\t\t");
	lineText("\t\t\t\t[2] Edit Games\t\t\t\t\t");
	lineText("\t\t\t\t[3] Delete Games\t\t\t\t");
	line(0);
	
	inputType(&gameOption);
	
	switch(gameOption){
		case '1':
			addGames();
			break;
			
		case '2':
			editGames();
			break;
			
		case '3':
			deleteGames();
			break;
	}
	
}

void addGames(){
	file=fopen("games.txt", "a+");
	
	line(3);
	
	printf("|\tInput Game ID\t\t| ");
	scanf_s(" %s", &dataGame.gameId);fflush(stdin);
	
	printf("|\tInput Game Name\t\t| ");
	scanf_s(" %s", &dataGame.gameName);fflush(stdin);
	
	printf("|\tInput Publisher\t\t| ");
	scanf_s(" %s", &dataGame.publisher);fflush(stdin);
	
	printf("|\tInput Genre\t\t| ");
	scanf_s(" %s", &dataGame.genre);fflush(stdin);
	
	printf("|\tInput Price\t\t| ");
	scanf_s(" %i", &dataGame.price);fflush(stdin);
	
	printf("|\tInput Description\t| ");
	scanf_s(" %s", &dataGame.description);fflush(stdin);
	
	fprintf(file, "%s_%s_%s_%s_%i_%s\n", dataGame.gameName, dataGame.gameId, dataGame.publisher, dataGame.genre, dataGame.price, dataGame.description);
	
	adminGamesData();
}

void editGames(){
	Game dataGame[50];
	int index,i;
	char id[50];
		
	printf("|\tInput Game ID to Edit \t| ");scanf("%s",id);fflush(stdin);
	file=fopen("games.txt","r");
	index=0;
	while (!feof(file)){
		fscanf(file,"%[^_]_%[^_]_%[^_]_%[^_]_%[^_]_%[^\n]\n",&dataGame[index].gameName,&dataGame[index].gameId,&dataGame[index].publisher,&dataGame[index].genre,&dataGame[index].price,&dataGame[index].description);
		fflush(stdin);
			if(id==dataGame[index].gameId){
				printf("|\tInput Game Name\t| ");scanf("%[^\n]",&dataGame[index].gameName);fflush(stdin);
//				printf("\t\t\t\tMasukkan ID Anda \t\t: ");scanf("%i",&dataGame[index].ID);fflush(stdin);
//				printf("\t\t\t\tMasukkan No Telepon Anda \t: ");scanf("%s",&dataGame[index].Telp);fflush(stdin);
//				printf("\t\t\t\tMasukkan Instagram Anda \t: ");scanf("%[^\n]",&dataGame[index].Instagram);fflush(stdin);
		}
		index++;
	}
	fclose(file);
		file=fopen("games.txt","w");
	fclose(file);
		file=fopen("games.txt","a");
	for(i=0;i<index;i++){
		fprintf(file,"%s_%s_%s_%s_%i_%s\n",dataGame[i].gameName,dataGame[i].gameId,dataGame[i].publisher,dataGame[i].genre,dataGame[i].price,dataGame[i].description);
	}
	fclose(file);
}

void deleteGames(){
	
	file=fopen("games.txt", "a+");
	Game dataGame[50];
	char id[50];
	int index,i;
	line(3);
	
	printf("|\tInput Game ID to Delete \t| ");scanf("%s",id);fflush(stdin);
	
	index=0, i;
	while (!feof(file)){
		fscanf(file,"%[^_]_%[^_]_%[^_]_%[^_]_%[^_]_%[^\n]\n",&dataGame[index].gameName,&dataGame[index].gameId,&dataGame[index].publisher,&dataGame[index].genre,&dataGame[index].price,&dataGame[index].description);
		fflush(stdin);
			if(id!=dataGame[index].gameId){
				index++;
			}
	}
	
	fclose(file);
		file=fopen("games.txt","w");
	fclose(file);
		file=fopen("games.txt","a");
	for(i=0;i<index;i++){
		fprintf(file,"%s_%s_%s_%s_%i_%s\n",dataGame[i].gameName,dataGame[i].gameId,dataGame[i].publisher,dataGame[i].genre,dataGame[i].price,dataGame[i].description);
	}
	fclose(file);
	
	adminGamesData();
	
//	%[^_]_%[^_]_%[^_]_%[^_]_%[^_]_%[^\n]\n
}
