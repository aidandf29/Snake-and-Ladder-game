//Faris Hassan Aly Firman - 1906381552
//Muh. Aidan Daffa J - 1906300800
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "SnakeHead.h"

#define RED_TEXT "\x1B[31m"
#define DARKGREEN_TEXT "\x1B[38;2;0;97;62m"
#define RESET "\x1b[0m"



int main() {

	menu:
	fullscreen();
	system("Color 07");
	printf(RED_TEXT"");
	judul();
	
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t   					   - - - - - - - - - =========================== - - - - - - - - -\n");
	printf("\t\t\t\t   					   ||                                                           ||\n");
	printf("\t\t\t\t					   ||    >--(' ){}           Menu        \\______\\               ||\n");
	printf("\t\t\t\t					   ||            {}      1. Play Game     \\______\\              ||\n");
	printf("\t\t\t\t					   ||           {}       2. How to Play    \\______\\             ||\n");
	printf("\t\t\t\t					   ||          {}        3. Leaderboard     \\______\\            ||\n");
	printf("\t\t\t\t					   ||         {}         4. Exit Game        \\______\\           ||\n");
	printf("\t\t\t\t					   ||        {}                               \\______\\          ||\n");
	printf("\t\t\t\t					   ||        {}                                \\______\\         ||\n");
	printf("\t\t\t\t					   ||        {}        {}{}{}                   \\______\\        ||\n");
	printf("\t\t\t\t					   ||         {}      {}    {}                   \\______\\       ||\n");
	printf("\t\t\t\t					   ||          {}{}{}{}    {}      {}{}{}         \\______\\      ||\n");
	printf("\t\t\t\t					   ||                     {}      {}    {}         \\______\\     ||\n");
	printf("\t\t\t\t					   ||                      {}{}{}{}      {}{}>>     \\      \\    ||\n");
	printf("\t\t\t\t					   ||                                                           ||\n");
	printf("\t\t\t\t					   - - - - - - - - - =========================== - - - - - - - - -");
	printf("\n\t\t\t\t					                             select: ");
	scanf("%d", &opsi); 
	
	switch(opsi) {
		case 1:
			playgame();
			system("cls");
			goto menu;
			break;
		case 2:
			howtoplay();
			system("cls");
			fullscreen();

			goto menu;
			break;
		case 3:
			leaderboard();
			system("cls");
			goto menu;
			break;
		case 4:
			system("cls");
			keluar();
			break;
		default:
			printf("masukan menu yang tersedia saja!");
			goto menu;
			break;
	}
	return 0;
}
