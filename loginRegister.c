#include "header.h"

void tampilLogin() {

	int pilihMenuAwal;
	headerAwal();
	printf("\t\t\t | Press 1 to Login                      |\n");
	printf("\t\t\t | Press 2 to Register                   |\n");
	printf("\t\t\t | Press 3 to Forgot Password            |\n");
	printf("\t\t\t | Press 4 to Exit                       |\n\n");

	printf("\t\t\t Pilih menu : ");
	scanf_s("%d", &pilihMenuAwal);

	switch (pilihMenuAwal)
	{
	case 1:
		login();
		break;

	case 2:
		register2();
		break;

	case 3:
		forgot();
		break;

	case 4:
		exit();
		break;

	default:
		printf("Angka yang anda masukan salah, pilih kembali angka yang benar");
		main();
		break;
	}

}

void login() {
	system("cls");

	char *username = (char*)malloc(20 * sizeof(char)), 
		 *password = (char*)malloc(20 * sizeof(char));

	headerAwal();

	printf("\t\t\t Masukan Username :");
	scanf_s("%s", username);
	printf("\t\t\t Masukan Password :");
	scanf_s("%s", password);
}

void register2() {
	system("cls");

	char *usernameRegister = (char*)malloc(20 * sizeof(char)), 
		 *emailRegister = (char*)malloc(20 * sizeof(char)), 
		 *passwordRegister = (char*)malloc(20 * sizeof(char)), 
		 *konfirmasiPasswordRegister = (char*)malloc(20 * sizeof(char));

	headerAwal();



	printf("\t\t\t Masukan Username			   :");
	scanf_s("%s", usernameRegister);
	printf("\t\t\t Masukan Email			   :");
	scanf_s("%s", emailRegister);
	printf("\t\t\t Masukan Password            :");
	scanf_s("%s", passwordRegister);
	printf("\t\t\t Masukan Konfirmasi Password :");
	scanf_s("%s", konfirmasiPasswordRegister);
}

void forgot() {
	system("cls");

	headerAwal();
}