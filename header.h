#ifndef header_h
#define header_h
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	long 	userId;
	char  	user[50], 
			email[50], 
			password[50];
} User;

typedef struct{
	long	gameId, price;
	char	gameName[50],
			publisher[50],
			genre[50],
			description[50];
} Game;

void firstHeader();
void firstPage();
void login(void);
void register2(void);
void forgot();
void adminPage();
void adminGamesData();
void adminData();
void adminHelp();
void editAdmin();
void deleteAdmin();

#endif
