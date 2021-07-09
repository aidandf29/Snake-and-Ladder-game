int* kotak;
int i, j, nolak, opsi, score, dadu, length, turn = 0;
int counterA, failA, jumlahA;
int counterB, failB, jumlahB;

typedef struct node {				
	char data[150];
	struct node * next;
}node;

struct node *headNode, *currentNode, *temp;
struct node * tmpAddress ;
struct node * iteratorPtr;

char data2[150];

int fullscreen() { //untuk membuat layar penuh
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void judul() { //untuk mencetak Judul
    FILE *ptrJudul;
    char text[1000];
    ptrJudul = fopen("Judul.txt","r");
 
    while(fgets(text,1000, ptrJudul)!=NULL) {
        printf("%s",text);
        if(opsi != 1) {
		Sleep(50);
		}
	}
	fclose(ptrJudul);
}

int kocokdadu(int jumlah) { //untuk mengocok dadu
	srand(time(NULL));
    dadu = rand()%6 + 1;
    printf("\n\tdadu = %d", dadu);
    getch();
    jumlah = jumlah + dadu;
    return jumlah;
}

int ulartangga(int jumlah) { //untuk mengecek posisi ular dan tangga
	//letak tangga
	if(jumlah==2){jumlah=23;}
	if(jumlah==13){jumlah=29;}
	if(jumlah==33){jumlah=53;}
	if(jumlah==39){jumlah=62;}
	if(jumlah==45){jumlah=85;}
	if(jumlah==87){jumlah=93;}
	//Letak ular
	if(jumlah==24){jumlah=14;}
	if(jumlah==38){jumlah=1;}
	if(jumlah==58){jumlah=44;}
	if(jumlah==89){jumlah=67;}
	if(jumlah==91){jumlah=12;}
	if(jumlah==94){jumlah=85;}
	if(jumlah==99){jumlah=77;}
	
	return jumlah;
}

void kartu() { //garis saat TOD
	
	printf("\n\t|==================================================|");
}


void listtod() { //menampilkan dan menambah list TOD challenge			
																				// materi Linked List
	// node 1 (dare)
	tmpAddress = malloc(sizeof(struct node)); //langkah 4
	strcpy((*tmpAddress).data, " Let ur opponent hack ur Social Media");
	(*tmpAddress).next = NULL; 
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 2(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, "  Do Sit up 30x");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 3(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, "  Do Push up 20x");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 4(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Eat a raw piece of garlic");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 5(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Eat a snack without using your hands");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 6(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Show off your secret talent");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 7(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Dance without music for 1 minutes");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 8(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Keep three ice cubes in your mouth until they melt");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 9(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Sing a song");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 10(dare)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Ask stranger's social media'");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 11(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What's your biggest fear?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 12(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What's a secret you've never told anyone?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 13(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What's your biggest insecurity?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;	

	//tambahkan node di depan
	// node 14(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What's your biggest regret?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 15(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What's the worst thing anyone's ever done to you?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 16(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Who is the sexiest person that you knowed well?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 17(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " Who is your crush?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 18(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, "  Have you ever cheated or been cheated on");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 19(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What do most people think is true about you, but is not?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;
	
	//tambahkan node di depan
	// node 20(truth)
	tmpAddress = malloc(sizeof(struct node)); //minta alamat kapling baru
	strcpy((*tmpAddress).data, " What is the stupidest thing you have ever done?");
	(*tmpAddress).next = headNode;
	
	headNode = tmpAddress;

	printf("\n\tAdd your own TOD challenge.");
	printf("\n\n\tEnter number of TOD challenge : ");
	scanf("%d",&length);

	while (i<length){ 
		
	tmpAddress = malloc (sizeof(struct node)); 

	printf("\n\tEnter dare : ");
	getchar();
	strcpy(tmpAddress->data, gets(data2));
//	scanf("%s", &tmpAddress->data);

			tmpAddress->next = headNode;
			headNode = tmpAddress;
	i++;
	}


	if(headNode != NULL){
		printf("\n\tList berisi:\n\n");
		temp = headNode;
		while(temp != NULL){
			printf(" [%s]\n", (*temp).data);
			temp = (*temp).next;
		}
	}
	else{
		printf("List kosong\n");
	}
}


int confirm(int choice) { //konfirmasi challenge
	int pilihan;
	pilihan:
	printf("\n\t\t\t1. Lakukan\n\t\t\t2. Skip");
	printf("\n\t\t\tselect: "); scanf("%d", &pilihan);
	switch(pilihan) {
		case 1:
			choice = choice + 0;
			break;
		case 2:
			choice = choice + 1;
			break;
		default:
			printf("masukan menu yang tersedia saja!");
			goto pilihan;
			break;
	}
	return choice;
}

int tod(int jumlah) { //merandom dan menampilkan TOD Challenge
	if(jumlah == 5 || jumlah == 8 || jumlah == 16 || jumlah == 20
	|| jumlah == 27 || jumlah == 30 || jumlah == 41 || jumlah == 48
	|| jumlah == 54 || jumlah == 55 || jumlah == 60 || jumlah == 61
	|| jumlah == 65 || jumlah == 66 || jumlah == 73 || jumlah == 75
	|| jumlah == 79 || jumlah == 81 || jumlah == 84 || jumlah == 96
		) {
	int random;
	srand(time(0));
	random = rand()%21 + 1;
	
	iteratorPtr = headNode;
	for(i=0;i<random;i++) {
		iteratorPtr = (*iteratorPtr).next;
	}
	
	kartu();
	printf("\n\t%s",(*iteratorPtr).data);
	kartu();
	nolak = confirm(nolak);
	return nolak;
	} else
	return nolak = 0;
}

void help() { //menampilkan menu how to play 1
	system("cls");
	judul();

	printf("\n\n\n\t\t\t\t\t                                                    ____                  ____\n");
	printf("\t\t\t\t\t                                                   (    )                (    )\n");
	printf("\t\t\t\t\t                                                  (      )              (      )\n");
	printf("\t\t\t\t\t                                                 (   ||   )            (   ||   )\n");
	printf("\t\t\t\t\t                                                 (   ||   )            (   ||   )\n");
	printf("\t\t\t\t\t                                                  (      )              (      )\n");
	printf("\t\t\t\t\t                                                   (____)                (____)");

	printf("\n\n\t\t\t\t\t\t\t     ==========================================================================================");
	printf("\n\t\t\t\t\t\t\t     ||  permainan ini merupakan permainan ular tangga yang dielaborasi dengan Truth or Dare  ||");
	printf("\n\t\t\t\t\t\t\t     ||        Sebelum bermain player diminta untuk menginput dare yang mereka inginkan       ||");
	printf("\n\t\t\t\t\t\t\t     ||          akan terdapat kotak yang berisi Truth or Dare yang harus pemain ikuti        ||");
	printf("\n\t\t\t\t\t\t\t     ||                      pemain akan menang saat berada dikotak 100                       ||");
	printf("\n\t\t\t\t\t\t\t     ||                       terdapat 1 buah dadu dengan 6 mata dadu                         ||");
	printf("\n\t\t\t\t\t\t\t     ||                         Game terdiri dari 100 kotak (10x10)                           ||");
	printf("\n\t\t\t\t\t\t\t     ==========================================================================================");

	printf("\n\n\t\t\t\t\t\t\t     ==========================================================================================");
	printf("\n\t\t\t\t\t\t\t     ||                               Klik Enter untuk Lanjut                                 ||");
	printf("\n\t\t\t\t\t\t\t     ==========================================================================================\n");
	getch();
	system("cls");
	
} 		
	
void rules() { //menampilkan menu how to play 2

	judul();

	printf("\n\n\t\t\t\t\t                                                    _____                                            ");
	printf("\n\t\t\t\t\t                                                    |  _ \\       ___                                 ");
	printf("\n\t\t\t\t\t                                                    | (_) )_   _ | |    ____ ____                              ");
	printf("\n\t\t\t\t\t                                                    |    /( ) ( )| |   / __ \\  __)                                  ");
	printf("\n\t\t\t\t\t                                                    | |\\ \\| (_) || |__(  ___/__  \\                                  ");
	printf("\n\t\t\t\t\t                                                    (_) (_)\\___/ |____)\\____)____/                                  ");
	

	
	
	printf("\n\t\t\t\t\t     ____________________________________________________________________________________________________________________________");
	printf("\n\t\t\t\t\t     ||________________________________________________________________________________________________________________________||");
	printf("\n\t\t\t\t\t     ||                                                                                                                        ||");	
	printf("\n\t\t\t\t\t     ||              *Jika player menolak melaksanakan tantangan atau menjawab jujur maka posisi akan dikurang 25              ||");
	printf("\n\t\t\t\t\t     ||        *Saat kedua player berada diposisi yang sama, maka player yang pertama datang akan dipindah keposisi awal       ||");
	printf("\n\t\t\t\t\t     ||                        *Point game ini dihitung berdasarkan jumlah turn yang didapat untuk menang                      ||");
	printf("\n\t\t\t\t\t     ||                                  *Semakin sedikit jumlah turn semakin tinggi point nya                                 ||");
	printf("\n\t\t\t\t\t     ||                                                                                                                        ||");		                     
	printf("\n\t\t\t\t\t     ||                    __    __    __    __                                                                                ||");
	printf("\n\t\t\t\t\t     ||                   /  \\  /  \\  /  \\  /  \\                                                                               ||");
	printf("\n\t\t\t\t\t     ||__________________/  __\\/  __\\/  __\\/  __\\______________________________________________________________________________||");
	printf("\n\t\t\t\t\t     ||_________________/  /__/  /__/  /__/  /_________________________________________________________________________________||");
	printf("\n\t\t\t\t\t                        | / \\   / \\   / \\   / \\  \\____                                                                    ");
	printf("\n\t\t\t\t\t                        |/   \\_/   \\_/   \\_/   \\    o \\                                                                   ");
	printf("\n\t\t\t\t\t                                                \\_____/--<                                                                    ");
	
	printf("\n\n\t\t\t\t\t\t\t     ==========================================================================================");
	printf("\n\t\t\t\t\t\t\t     ||                               Klik Enter untuk Lanjut                                 ||");
	printf("\n\t\t\t\t\t\t\t     ==========================================================================================\n");
	
	getch();

}

void howtoplay() { //masuk ke meu how to play
	help();
	rules();
}

void enterscore(int score) { //menambah nama dan score ke leaderboard
    FILE *hs;
    char nama[15];
    hs = fopen("hs.txt", "a");
    printf("\t\t\t");

    printf("\n\tInput your name (one word): ");
    scanf("%s", &nama);
    fprintf(hs, "%s \t\t %d\n", nama, score);
	fclose(hs);
	getch();
}

void leaderboard() { //menampilkan leaderboard
	
	FILE *hs;
    char str[MAXCHAR];
    char filename[] = "hs.txt";
    system("cls");
	int number = 1;
	
	hs = fopen("hs.txt","r");
	
	if (hs == NULL){
        // printf("Could not open file %s", filename);
        // return 1;
        printf("\t\t\tScoreboard is empty.\n");
    }
    else{
    	printf("\n\n\t\t\t\t     LeaderBoard");
		printf("\n\n\t\t\t\t Name \t\t Score\n\n");
	}
	

    while (fgets(str, MAXCHAR, hs) != NULL){
		printf("\t\t\t\t %s",  str);
        number++;
        if(number == 11){
        	break;
		}
	}

    fclose(hs);
    printf("\n\n\t\t\tEnter to go to main.");
    getch();
}

void keluar() { //tampilan saat exit game
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t                                          ");
	for(i=0;i<7;i++) {
	printf("- ");
  	Sleep(15);
 	}
 	
 	for(i=0;i<28;i++) {
	printf("=");
  	Sleep(15);
 	}
 	
 	printf(" ");

 	for(i=0;i<7;i++) {
	printf("- ");
  	Sleep(15);
 	}
 	
	printf("\n\n\t\t\t\t                                                               See You Again!");
	 
	printf("\n\n\t\t\t\t                                          ");
	for(i=0;i<7;i++) {
	printf("- ");
  	Sleep(15);
 	}
 	
 	for(i=0;i<28;i++) {
	printf("=");
  	Sleep(15);
 	}
 	
 	printf(" ");

 	for(i=0;i<7;i++) {
	printf("- ");
  	Sleep(15);
 	}
 	getch();
}

void papan() { //menampilkan papan permainan
	printf("    ---------------------------------------------------------------------------------------------------------------------------- \n");
	printf("    |100[%d]|      |99[%d]|>-(') |98[%d]|      |97[%d]|      |96[%d]|      |95[%d]| (')-<|94[%d]|      |93[%d]|      |92[%d]| (')-<|91[%d]|\n",
               kotak[100],    kotak[99],    kotak[98],    kotak[97],    kotak[96],    kotak[95],    kotak[94],    kotak[93],    kotak[92],    kotak[91]);
	printf("    ------------------------{}------------------------------------------------{}-------------/--/--------------------{}--------- \n");
	printf("                            {}                                    {}{}{}{}{}{}{}            /--/                     {}          \n");
	printf("    ------------------------{}-----------------------------------{}------------------------/--/----------------------{}--------- \n");
	printf("    | 81[%d]|      |82[%d]|   {} |83[%d]|      |84[%d]|      |85[%d]|<{}   |86[%d]|      |87[%d]|/--/  |88[%d]| (')-<|89[%d]| {}   |90[%d]|\n",
                kotak[81],    kotak[82],    kotak[83],    kotak[84],    kotak[85],    kotak[86],    kotak[87],    kotak[88],    kotak[89],    kotak[90]);
	printf("    ------------------------{}------------------------------------|--|----------------------------------{}-----------{}--------- \n");
	printf("                            {}{}{}{}{}{}{}                        |--|                                  {}           {}          \n");
	printf("    ------------------------------------{}------------------------|--|----------------------------------{}-----------{}--------- \n");
	printf("    | 80[%d]|      |79[%d]|      |78[%d]|   {}>|77[%d]|      |76[%d]|  |--||75[%d]|      |74[%d]|      |73[%d]| {}   |72[%d]| {}   |71[%d]|\n",
                kotak[80],    kotak[79],    kotak[78],    kotak[77],    kotak[76],    kotak[75],    kotak[74],    kotak[73],    kotak[72],    kotak[71]);
	printf("    --------------------------------------------------------------|--|----------------------------------{}-----------{}--------- \n");
	printf("                                                                  |--|                      {}{}{}{}{}{}{}           {}          \n");
	printf("    --------------------------------------------------------------|--|----------------------{}-----------------------{}--------- \n");
	printf("    | 61[%d]|      |62[%d]|      |63[%d]|      |64[%d]|      |65[%d]|  |--||66[%d]|      |67[%d]|<{}   |68[%d]|      |69[%d]| {}   |70[%d]|\n",
                kotak[61],    kotak[62],    kotak[63],    kotak[64],    kotak[65],    kotak[66],    kotak[67],    kotak[68],    kotak[69],    kotak[70]);
	printf("    ----------|--|------------------------------------------------|--|-----------------------------------------------{}--------- \n");
	printf("              |--|                                                |--|                                               {}          \n");
	printf("    ----------|--|------------------------------------------------|--|-----------------------------------------------{}--------- \n");
	printf("    | 60[%d]|  |--||59[%d]|      |58[%d]|>-(') |57[%d]|      |56[%d]|  |--||55[%d]|      |54[%d]|      |53[%d]|      |52[%d]| {}   |51[%d]|\n",
                kotak[60],    kotak[59],    kotak[58],    kotak[57],    kotak[56],    kotak[55],    kotak[54],    kotak[53],    kotak[52],    kotak[51]);
	printf("    ----------|--|-----------------------{}-----------------------|--|-----------------------------------|--|--------{}--------- \n");
	printf("              |--|                       {}                       |--|                                   |--|        {}          \n");
	printf("    ----------|--|-----------------------{}-----------------------|--|-----------------------------------|--|--------{}--------- \n");
	printf("    | 41[%d]|  |--||42[%d]|      |43[%d]|   {}>|44[%d]|      |45[%d]|      |46[%d]|      |47[%d]|      |48[%d]|  |--||49[%d]| {}   |50[%d]|\n",
                kotak[41],    kotak[42],    kotak[43],    kotak[44],    kotak[45],    kotak[46],    kotak[47],    kotak[48],    kotak[49],    kotak[50]);
	printf("    ----------|--|---------------------------------------------------------------------------------------|--|--------{}--------- \n");
	printf("              |--|                                                                                       |--|        {}          \n");
	printf("    ----------|--|---------------------------------------------------------------------------------------|--|--------{}--------- \n");
	printf("    | 40[%d]|      |39[%d]| (')-<|38[%d]|      |37[%d]|      |36[%d]|      |35[%d]|      |34[%d]|      |33[%d]|      |32[%d]| {}   |31[%d]|\n",
                kotak[40],    kotak[39],    kotak[38],    kotak[37],    kotak[36],    kotak[35],    kotak[34],    kotak[33],    kotak[32],    kotak[31]);
	printf("    ----------------------{}-----------------------------------------------------------------------------------------{}--------- \n");
	printf("                          {}                                                                                         {}          \n");
	printf("    ----------------------{}-----------------------------------------------------------------------------------------{}--------- \n");
	printf("    | 21[%d]|      |22[%d]| {}   |23[%d]|      |24[%d]|>-(') |25[%d]|      |26[%d]|      |27[%d]|      |28[%d]|      |29[%d]| {}   |30[%d]|\n",
                kotak[21],    kotak[22],    kotak[23],    kotak[24],    kotak[25],    kotak[26],    kotak[27],    kotak[28],    kotak[29],    kotak[30]);
	printf("    ----------------------{}--/--/--------------------{}--------------------------------------------------/--/-------{}--------- \n");
	printf("              {}{}{}{}{}{}{} /--/                     {}{}{}{}{}{}{}{}{}{}{}{}{}                         /--/        {}          \n");
	printf("    ----------{}------------/--/-----------------------------------------------{}-----------------------/--/---------{}--------- \n");
	printf("    | 20[%d]|  {}  |19[%d]|  /--/|18[%d]|      |17[%d]|      |16[%d]|      |15[%d]|   {}>|14[%d]|      |13[%d]|/--/  |12[%d]|<{}   |11[%d]|\n",
                kotak[21],    kotak[19],    kotak[18],    kotak[17],    kotak[16],    kotak[15],    kotak[14],    kotak[13],    kotak[12],    kotak[11]);
	printf("    ----------{}----------/--/-------------------------------------------------------------------------------------------------- \n");
	printf("              {}         /--/                                                                                                    \n");
	printf("    ----------{}--------/--/---------------------------------------------------------------------------------------------------- \n");
	printf("    | 1[%d]|<{}{}  | 2[%d]|-/    | 3[%d]|      | 4[%d]|      | 5[%d]|      | 6[%d]|      | 7[%d]|      | 8[%d]|      | 9[%d]|      |10[%d]|\n",
                kotak[1],      kotak[2],     kotak[3],     kotak[4],     kotak[5],     kotak[6],     kotak[7],     kotak[8],     kotak[9],    kotak[10]);
	printf("    ---------------------------------------------------------------------------------------------------------------------------- \n");
}

void playgame() { //menjalankan game	
	failA = 0;
	jumlahA = 1;
	failB = 0;
	jumlahB = 1;
	
	kotak = (int*) calloc (101, sizeof(int));
	
	if (kotak == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using calloc.\n");
        Sleep(100);
	}
	
	system("cls");
	listtod();
	getch();
	
	while(jumlahA != 100 && jumlahB != 100) {
		system("cls");
		papan();
		
		if(turn%2 == 0) {
			printf("\n\t\t\tPlayer 1 turn.");
			printf("\n\t\t\tPress any key to roll the dice.");
			getch();
			jumlahA = kocokdadu(jumlahA);
			if(jumlahA > 100) {
				jumlahA = 100 - (jumlahA - 100);
			}
			jumlahA = ulartangga(jumlahA);
			failA = failA + tod(jumlahA);
			if(jumlahA == jumlahB) {
				jumlahB = 1;
			}

			printf("\n\tPosisi Player 1 = %d", jumlahA);
			counterA = counterA + 1;
		} else {
			printf("\n\t\t\tPlayer 2 turn.");
			printf("\n\t\t\tPress any key to roll the dice.");
			getch();
			jumlahB = kocokdadu(jumlahB);
			if(jumlahB > 100) {
				jumlahB = 100 - (jumlahB - 100);
			}
			jumlahB = ulartangga(jumlahB);
			failB = failB + tod(jumlahB);
			if(jumlahB == jumlahA) {
				jumlahA = 1;
			}
			
			printf("\n\tPosisi Player 2 = %d", jumlahB);
			counterB = counterB + 1;
		}
		
		for(i=1;i<101;i++) {
			kotak[i] = 0;
		}
		
		kotak[jumlahA] = 1;
		kotak[jumlahB] = 2;
		turn = turn + 1;
		printf("\n\n\ttotal turn = %d, P2 total turn = %d", counterA, counterB);
		getch();
	}

	system("cls");
	if(jumlahA == 100) {
			printf ("\n\n\n\n\n\n\n\n");
		    printf ("\t\t\t\t\t\t\t                                  _                         __  \n");
            printf ("\t\t\t\t\t\t\t                                 | |                       /  | \n");
            printf ("\t\t\t\t\t\t\t                            _ __ | | __ _ _   _  ___ _ __  `| | \n");
            printf ("\t\t\t\t\t\t\t                           | '_ \\| |/ _` | | | |/ _ \\ '__|  | | \n");
            printf ("\t\t\t\t\t\t\t                           | |_) | | (_| | |_| |  __/ |    _| |_\n");
            printf ("\t\t\t\t\t\t\t                           | .__/|_|\\__,_|\\__, |\\___|_|    \\___/\n");
            printf ("\t\t\t\t\t\t\t                           | |             __/ |                \n");
            printf ("\t\t\t\t\t\t\t                           |_|            |___/                 \n");
            printf ("\t\t\t\t\t\t\t                                _    _ _____ _   _  _____ \n");
            printf ("\t\t\t\t\t\t\t                               | |  | |_   _| \\ | |/  ___|\n");
            printf ("\t\t\t\t\t\t\t                               | |  | | | | |  \\| |\\ `--. \n");
            printf ("\t\t\t\t\t\t\t                               | |/\\| | | | | . ` | `--. \\ \n");
            printf ("\t\t\t\t\t\t\t                               \\  /\\  /_| |_| |\\  |/\\__/ / \n");
            printf ("\t\t\t\t\t\t\t                                \\/  \\/ \\___/\\_| \\_/\\____/ \n");
		getch();
		score = (100-counterA)*100-(25*failA);
		printf("\n\n\tSCORE : %d", score);
		getch();
		enterscore(score);
	}
	if(jumlahB == 100) {
			printf ("\n\n\n\n\n\n\n\n");
			printf ("\t\t\t\t\t\t\t                                  _                         _____ \n");
		    printf ("\t\t\t\t\t\t\t                                 | |                       / __  \\ \n");
		    printf ("\t\t\t\t\t\t\t                            _ __ | | __ _ _   _  ___ _ __  `' / /' \n");
		    printf ("\t\t\t\t\t\t\t                           | '_ \\| |/ _` | | | |/ _ \\ '__|   / /   \n");
		    printf ("\t\t\t\t\t\t\t                           | |_) | | (_| | |_| |  __/ |    ./ /___ \n");
		    printf ("\t\t\t\t\t\t\t                           | .__/|_|\\__,_|\\__, |\\___|_|    \\_____/ \n");
		    printf ("\t\t\t\t\t\t\t                           | |             __/ |                  \n");
		    printf ("\t\t\t\t\t\t\t                           |_|            |___/                   \n");
		 	printf ("\t\t\t\t\t\t\t                                _    _ _____ _   _  _____ \n");
		    printf ("\t\t\t\t\t\t\t                               | |  | |_   _| \\ | |/  ___|\n");
		    printf ("\t\t\t\t\t\t\t                               | |  | | | | |  \\| |\\ `--. \n");
		    printf ("\t\t\t\t\t\t\t                               | |/\\| | | | | . ` | `--. \\ \n");
		    printf ("\t\t\t\t\t\t\t                               \\  /\\  /_| |_| |\\  |/\\__/ / \n");
		    printf ("\t\t\t\t\t\t\t                                \\/  \\/ \\___/\\_| \\_/\\____/ \n");		
		
		getch();
		score = (100-counterB)*100-(25*failB);
		printf("\n\n\tSCORE : %d", score);
		getch();
		enterscore(score);
	}
	
	getch();
}

