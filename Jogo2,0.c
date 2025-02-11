#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#define T 10 
#define F 5
#define ANSI_COLOR_RED      "\x1b[31m" 
#define ANSI_COLOR_RESET   "\x1b[0m"
int des=0;
enum{
	BLACK,                 
    BLUE,                  
    GREEN,                 
    CYAN,                  
    RED,                   
    MAGENTA,              
    BROWN,                              
    WHITE                  
};  
enum{
	_BLACK=0     
}; 
void textColor(int letra, int fundo){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), letra + fundo);
}
void iniciacao(){  //entrada do jogo
	int i;
	for(i=0;i<30;i++){
		printf("\n\n\n");
		printf("\n\t ||||||||||   ||||||||||  |||||||||||  ||||||||||  |||        |||    |||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t   |||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||||||||    |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t |||     |||  ||||||||||      |||      ||||||||||  |||        ||||||||||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t  ||||||||||   |||    |||      |||      |||    |||  |||||||||  |||    |||  |||    |||");
		system("cls");
	}
	for(i=0;i<30;i++){
		printf("\n\n\n");
		printf("\n\t||||||||||   ||||||||||  |||||||||||  ||||||||||  |||        |||    |||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||||||||    |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||     |||  ||||||||||      |||      ||||||||||  |||        ||||||||||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t||||||||||   |||    |||      |||      |||    |||  |||||||||  |||    |||  |||    |||");
		printf("\n");
		printf("\n\t\t\t ||||||    |||  ||||||||||  |||      |||  ||||||||||  |||      ");
		printf("\n\t\t\t||| |||   |||  |||    |||  |||      |||  |||    |||  |||      ");
		printf("\n\t\t\t  ||| |||   |||  |||    |||   |||    |||   |||    |||  |||      ");
		printf("\n\t\t\t|||  |||  |||  |||    |||   |||    |||   |||    |||  |||      ");
		printf("\n\t\t\t |||   ||| |||  ||||||||||    |||  |||    ||||||||||  |||      ");
		printf("\n\t\t\t|||   ||| |||  |||    |||    |||  |||    |||    |||  |||      ");
		printf("\n\t\t\t  |||    ||||||  |||    |||     ||||||     |||    |||  |||||||||");
		system("cls");
	}
	for(i=0;i<30;i++){
		printf("\n\n\n");
		printf("\n\t||||||||||   ||||||||||  |||||||||||  ||||||||||  |||        |||    |||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||||||||    |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t|||     |||  ||||||||||      |||      ||||||||||  |||        ||||||||||  ||||||||||");
		printf("\n\t|||     |||  |||    |||      |||      |||    |||  |||        |||    |||  |||    |||");
		printf("\n\t||||||||||   |||    |||      |||      |||    |||  |||||||||  |||    |||  |||    |||");
		printf("\n");
		printf("\n\t\t\t||||||    |||  ||||||||||  |||      |||  ||||||||||  |||      ");
		printf("\n\t\t\t||| |||   |||  |||    |||  |||      |||  |||    |||  |||      ");
		printf("\n\t\t\t||| |||   |||  |||    |||   |||    |||   |||    |||  |||      ");
		printf("\n\t\t\t|||  |||  |||  |||    |||   |||    |||   |||    |||  |||      ");
		printf("\n\t\t\t|||   ||| |||  ||||||||||    |||  |||    ||||||||||  |||      ");
		printf("\n\t\t\t|||   ||| |||  |||    |||    |||  |||    |||    |||  |||      ");
		printf("\n\t\t\t|||    ||||||  |||    |||     ||||||     |||    |||  |||||||||");
		system("cls");
	}
}
int menu(int op){  //menu principal
	textColor(BLUE,_BLACK);
	printf("\n||||||  |||||| |||||| |||||| ||    ||  || |||||| ");
	printf("\n||   || ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||||||  ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||   || ||||||   ||   |||||| ||    |||||| |||||| ");
	printf("\n||||||  ||  ||   ||   ||  || ||||| ||  || ||  || ");
	printf("\n");
	printf("\n\t\t ||||   || |||||| ||    || |||||| ||   ");
	printf("\n\t\t || ||  || ||  || ||    || ||  || ||   ");
	printf("\n\t\t || ||  || ||  ||  ||  ||  ||  || ||   ");
	printf("\n\t\t ||  || || ||||||  ||  ||  |||||| ||   ");
	printf("\n\t\t ||  ||||| ||  ||   ||||   ||  || |||||");
	
	printf("\n\n\n");
	textColor(RED,_BLACK);
	printf("\n\t=========MENU==========");
	printf("\n\t||                   ||");
	printf("\n\t|| 1-JOGO ALEATORIO  ||");
	printf("\n\t|| 2-JOGO NIVEIS     ||");
	printf("\n\t|| 3-PERSONALIZAR    ||");
	printf("\n\t|| 4-SOBRE           ||");
	printf("\n\t|| 5-SAIR            ||");
	printf("\n\t||                   ||");
	printf("\n\t=======================");
	textColor(WHITE,_BLACK);
	printf("\n\nDigite a opcao desejada: ");
	scanf("%d",&op);
	
	return op;
}
int menunivel(int opn){ //menu de niveis
	int con=1;
	textColor(BLUE,_BLACK);
	printf("\n||||||  |||||| |||||| |||||| ||    ||  || |||||| ");
	printf("\n||   || ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||||||  ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||   || ||||||   ||   |||||| ||    |||||| |||||| ");
	printf("\n||||||  ||  ||   ||   ||  || ||||| ||  || ||  || ");
	printf("\n");
	printf("\n\t\t ||||   || |||||| ||    || |||||| ||   ");
	printf("\n\t\t || ||  || ||  || ||    || ||  || ||   ");
	printf("\n\t\t || ||  || ||  ||  ||  ||  ||  || ||   ");
	printf("\n\t\t ||  || || ||||||  ||  ||  |||||| ||   ");
	printf("\n\t\t ||  ||||| ||  ||   ||||   ||  || |||||");
	
	printf("\n\n\n");
	textColor(RED,_BLACK);
	printf("\n\t==========MENU===========");
	printf("\n\t||                     ||");
	printf("\n\t|| 1-Nivel Facil       ||");
	printf("\n\t|| 2-Nivel Medio       ||");
	printf("\n\t|| 3-Nivel Dificil     ||");
	printf("\n\t|| 4-Voltar            ||");
	printf("\n\t||                     ||");
	printf("\n\t=========================");
	textColor(WHITE,_BLACK);
	printf("\n\nDigite a opcao desejada: ");
	scanf("%d",&opn);
	if((opn<1)||(opn>4))
		while(con==1){
			printf("\nOPCAO INVALIDA.");
			printf("\n\nDigite a opcao desejada: ");
			scanf("%d",&opn);
			if((opn>0)&&(opn<5))
				con=0;
		}
	system("cls");
	
	return opn;
}
int menuper(int opn){ //menu de tabuleiro personalizado
	int con=1;
	textColor(BLUE,_BLACK);
	printf("\n||||||  |||||| |||||| |||||| ||    ||  || |||||| ");
	printf("\n||   || ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||||||  ||  ||   ||   ||  || ||    ||  || ||  || ");
	printf("\n||   || ||||||   ||   |||||| ||    |||||| |||||| ");
	printf("\n||||||  ||  ||   ||   ||  || ||||| ||  || ||  || ");
	printf("\n");
	printf("\n\t\t ||||   || |||||| ||    || |||||| ||   ");
	printf("\n\t\t || ||  || ||  || ||    || ||  || ||   ");
	printf("\n\t\t || ||  || ||  ||  ||  ||  ||  || ||   ");
	printf("\n\t\t ||  || || ||||||  ||  ||  |||||| ||   ");
	printf("\n\t\t ||  ||||| ||  ||   ||||   ||  || |||||");
	
	printf("\n\n\n");
	textColor(RED,_BLACK);
	printf("\n\t=========TABELA==========");
	printf("\n\t||                     ||");
	printf("\n\t||       1-5X5         ||");
	printf("\n\t||       2-8X8         ||");
	printf("\n\t||       3-10X10       ||");
	printf("\n\t||       4-Voltar      ||");
	printf("\n\t||                     ||");
	printf("\n\t=========================");
	textColor(WHITE,_BLACK);
	printf("\n\nDigite a opcao desejada: ");
	scanf("%d",&opn);
	if((opn<1)||(opn>4))
		while(con==1){
			printf("\nOPCAO INVALIDA.");
			printf("\n\nDigite a opcao desejada: ");
			scanf("%d",&opn);
			if((opn>=1)&&(opn<=4))
				con=0;
		}
	system("cls");
	
	return opn;
}
void carregando(){
	int i, j, x, m;
	
	system("cls");
	textColor(BLUE,_BLACK);
	for(j=0;j<3;j++){
		for(i=0;i<31;i++){
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\tCARREGANDO...");
			system("cls");
		}
		for(x=0;x<21;x++){
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\tCARREGANDO. ..");
			system("cls");
		}
		for(m=0;m<21;m++){
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\tCARREGANDO. . .");
			system("cls");
		}
	}
	printf(ANSI_COLOR_RESET);
}
void iniciarTab(char tabuleiro[T][T]){ //inicializar tabuleiro
    int i, j;

    for (i=0; i<T; i++){
        for (j=0; j<T; j++){
            tabuleiro[i][j]='-';
        }
    }
}
void iniciarnf(char mat[F][F]){ //iniciando tab nivel facil
	int i, j;

    for (i=0; i<F; i++){
        for (j=0; j<F; j++){
            mat[i][j]='-';
        }
    }
}
void iniciarnm(char mat[F+3][F+3]){ //iniciando tab nivel medio
	int i, j;

    for (i=0; i<(F+3); i++){
        for (j=0; j<(F+3); j++){
            mat[i][j]='-';
        }
    }
}
void exibirTab(char tabuleiro[T][T]){ //printar tabuleiro
    int i, j;

	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7   8   9 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  ---------------------------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <T; i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<T; j++){
        	if(tabuleiro[i][j]=='~'){
        		if(j==T-1){
        			textColor(BLUE,_BLACK);
        			printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
        			textColor(BLUE,_BLACK);
        			printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}else if(tabuleiro[i][j]=='-'){
				if(j==T-1){
					printf("%c   \n", tabuleiro[i][j]);
					textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else
					printf("%c   ", tabuleiro[i][j]);
			}else if(tabuleiro[i][j]=='#'){
				if(j==T-1){
					textColor(BROWN,_BLACK);
					printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
					textColor(BROWN,_BLACK);
					printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}
        }
        printf("\n");
    }
}
void exibef(char tabuleiro[F][F]){ //exibe tabuleiro nivel facil
	int i, j;

	printf(ANSI_COLOR_RED "   0   1   2   3   4 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  -------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <F; i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<F; j++){
        	if(tabuleiro[i][j]=='~'){
        		if(j==F-1){
        			textColor(BLUE,_BLACK);
        			printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
        			textColor(BLUE,_BLACK);
        			printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}else if(tabuleiro[i][j]=='-'){
				if(j==F-1){
					printf("%c   \n", tabuleiro[i][j]);
					textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else
					printf("%c   ", tabuleiro[i][j]);
			}else if(tabuleiro[i][j]=='#'){
				if(j==F-1){
					textColor(BROWN,_BLACK);
					printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
					textColor(BROWN,_BLACK);
					printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}
        }
        printf("\n");
    }
}
void exibem(char tabuleiro[F+3][F+3]){ //exibe tabuleiro nivel medio
	int i, j;

	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  -------------------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <(F+3); i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<(F+3); j++){
        	if(tabuleiro[i][j]=='~'){
        		if(j==F+2){
        			textColor(BLUE,_BLACK);
        			printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
        			textColor(BLUE,_BLACK);
        			printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}else if(tabuleiro[i][j]=='-'){
				if(j==F+2){
					printf("%c   \n", tabuleiro[i][j]);
					textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else
					printf("%c   ", tabuleiro[i][j]);
			}else if(tabuleiro[i][j]=='#'){
				if(j==F+2){
					textColor(BROWN,_BLACK);
					printf("%c   \n", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        			textColor(GREEN,_BLACK);
        			printf("  |");
        			printf(ANSI_COLOR_RESET);
				}else{
					textColor(BROWN,_BLACK);
					printf("%c   ", tabuleiro[i][j]);
        			printf(ANSI_COLOR_RESET);
        		}
			}
        }
        printf("\n");
    }
}
int sortvida(){ //sorteia numero de vida
	int vida=0;
	
	srand(time(NULL));
	
	while(vida<40)
		vida=rand()%81;
	
	return vida;
}
int coordenadasB(char tab[T][T]){ //sorteia coordenada barco 10X10
	int x, y, barcos=0, cont=0;
	
	srand(time(NULL));
	
	while(barcos<15){
		barcos=rand()%26;
	}
	while(barcos>cont){
		x=rand()%T;
		y=rand()%T;
		if(tab[x][y]=='-'){
			tab[x][y]='#';
			cont++;
		}
	}
	
	return barcos;
}
int nivelNcoor(char mat[F][F]){ //sorteia cordenada barco N. facil
	int x, y, barcos=10, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%F;
		y=rand()%F;
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
	
	return barcos;
}
int nivelMcoor(char mat[F+3][F+3]){ //cordenadas dos barcos nivel medio
	int x, y, barcos=20, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%(F+3);
		y=rand()%(F+3);
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
	
	return barcos;
}
int nivelDcoor(char mat[T][T]){ //cordenadas dos barcos nivel medio
	int x, y, barcos=25, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%T;
		y=rand()%T;
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
	
	return barcos;
}
void pqcoor(char mat[F][F],int barcos){ //gera coordenada Per. 5X5
	int x, y, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%F;
		y=rand()%F;
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
}
void pmcoor(char mat[F+3][F+3],int barcos){ //gera coordenada Per. 8X8
	int x, y, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%(F+3);
		y=rand()%(F+3);
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
}
void pdcoor(char mat[T][T],int barcos){ //gera coordenada Per. 10X10
	int x, y, cont=0;
	
	srand(time(NULL));
	while(barcos>cont){
		x=rand()%T;
		y=rand()%T;
		if(mat[x][y]=='-'){
			mat[x][y]='#';
			cont++;
		}
	}
}
void vaco(char tab1[T][T]){ //preenche de agua a tabela
	int i, j;
	
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			if(tab1[i][j]!='#'){
				tab1[i][j]='~';
			}
		}
	}
}
void vacof(char tab1[F][F]){ //preenche de agua a tabela N. facil
	int i, j;
	
	for(i=0;i<F;i++){
		for(j=0;j<F;j++){
			if(tab1[i][j]!='#'){
				tab1[i][j]='~';
			}
		}
	}
}
void vacom(char tab1[F+3][F+3]){ //vaco nivel medio
	int i, j;
	
	for(i=0;i<(F+3);i++){
		for(j=0;j<(F+3);j++){
			if(tab1[i][j]!='#'){
				tab1[i][j]='~';
			}
		}
	}
}
int coordenadas(char tab1[T][T],char tab2[T][T]){
	int x, y, cont=0, coo=1, v=0;
	
	printf("\nDigite uma coordenada (");
	textColor(GREEN,_BLACK);
	printf("linha");
	printf(ANSI_COLOR_RESET);
	printf(", ");
	printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
	printf("): ");
	scanf("%d %d",&x,&y);
	while(v!=3){
		if((x!=10)&&(y!=10))
			v=1;
		else if((x==10)&&(y==10)){
			break;
		}else if((x==10)&&(y!=10)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==10)&&(y==10))
					break;
				else if((x!=10)&&(y!=10)){
					break;
				}
			}
		}else if((x!=10)&&(y==10)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==10)&&(y==10))
					break;
				else if((x!=10)&&(y!=10)){
					break;
				}
			}
		}
		if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
			v+=1;
		else if((tab1[x][y]=='~')||(tab1[x][y]=='#')){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA JÁ FOI ESCOLHIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
					break;
			}
		}
		if((x>=0)&&(x<=10)&&(y>=0)&&(y<=10))
			v+=1;
		else if((x<0)||(x>10)||(y<0)||(y>10)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x>=0)&&(x<=10)&&(y>=0)&&(y<=10))
					break;
			}		
		}
	}
	if((x==10)&&(y==10))
		des=1;
		
	tab1[x][y]=tab2[x][y];
	if(tab2[x][y]=='#'){
		cont++;
	}
    system("cls");
    return cont;
}
int coordenadasf(char tab1[F][F],char tab2[F][F]){ //nivel facil
	int x, y, cont=0, coo=1, v=0;
	
	printf("\nDigite uma coordenada (");
	textColor(GREEN,_BLACK);
	printf("linha");
	printf(ANSI_COLOR_RESET);
	printf(", ");
	printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
	printf("): ");
	scanf("%d %d",&x,&y);
	while(v!=3){
		if((x!=5)&&(y!=5))
			v=1;
		else if((x==5)&&(y==5))
			break;
		else if((x==5)&&(y!=5)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==5)&&(y==5))
					break;
				else if((x!=5)&&(y!=5)){
					break;
				}
			}
		}else if((x!=5)&&(y==5)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==5)&&(y==5))
					break;
				else if((x!=5)&&(y!=5)){
					break;
				}
			}
		}
		if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
				v+=1;
		else if((tab1[x][y]=='~')||(tab1[x][y]=='#')){
				v=0;
			while(coo=1){
				printf("\nESTA COORDENADA JÁ FOI ESCOLHIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
					break;
			}
		}
		if((x>=0)&&(x<=5)&&(y>=0)&&(y<=5))
			v+=1;
		else if((x<0)||(x>5)||(y<0)||(y>5)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x>=0)&&(x<=5)&&(y>=0)&&(y<=5))
					break;
			}		
		}
	}
	if((x==5)&&(y==5))
		des=1;
		
	tab1[x][y]=tab2[x][y];
	if(tab2[x][y]=='#'){
		cont++;
	}
    system("cls");
    return cont;
}
int coordenadasm(char tab1[F+3][F+3],char tab2[F+3][F+3]){ //nivel medio
	int x, y, cont=0, coo=1, v=0;
	
	printf("\nDigite uma coordenada (");
	textColor(GREEN,_BLACK);
	printf("linha");
	printf(ANSI_COLOR_RESET);
	printf(", ");
	printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
	printf("): ");
	scanf("%d %d",&x,&y);
	while(v!=3){
		if((x!=8)&&(y!=8))
			v=1;
		else if((x==8)&&(y==8))
			break;
		else if((x==8)&&(y==8)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==8)&&(y==8))
					break;
				else if((x!=8)&&(y!=8))
					break;
			}		
		}else if((x!=8)&&(y==8)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x==8)&&(y==8))
					break;
				else if((x!=8)&&(y!=8)){
					break;
				}
			}
		}
		if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
				v+=1;
		else if((tab1[x][y]=='~')||(tab1[x][y]=='#')){
				v=0;
			while(coo=1){
				printf("\nESTA COORDENADA JÁ FOI ESCOLHIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((tab1[x][y]!='~')&&(tab1[x][y]!='#'))
					break;
			}
		}
		if((x>=0)&&(x<=8)&&(y>=0)&&(y<=8))
			v+=1;
		else if((x<0)||(x>8)||(y<0)||(y>8)){
			v=0;
			while(coo=1){
				printf("\nESTA COORDENADA É INVALIDA.");
				printf("\nDigite uma coordenada (");
				textColor(GREEN,_BLACK);
				printf("linha");
				printf(ANSI_COLOR_RESET);
				printf(", ");			
				printf(ANSI_COLOR_RED "coluna" ANSI_COLOR_RESET);
				printf("): ");
				scanf("%d %d",&x,&y);
				if((x>=0)&&(x<=8)&&(y>=0)&&(y<=8))
					break;
			}		
		}
	}
	if((x==8)&&(y==8))
		des=1;
		
	tab1[x][y]=tab2[x][y];
	if(tab2[x][y]=='#'){
		cont++;
	}
    system("cls");
    return cont;
}
int desistir(){
	char res;
	int sair=0, cont=1;
	
	system("cls");
	fflush(stdin);
	printf("Deseja desistir? N-Não  S-Sim: ");
	scanf("%c",&res);
	fflush(stdin);
	if((res=='S')||(res=='s'))
		sair=1;
	else if((res!='N')&&(res!='n')){
		while(cont==1){
			printf("\nRESPOSTA INVALIDA.");
			printf("\nDeseja desistir? N-Não  S-Sim: ");
			scanf("%c",&res);
			fflush(stdin);
			if((res=='s')||(res=='S')||(res=='n')||(res=='N'))
				cont=0;
		}
		if((res=='s')||(res=='S'))
			sair=1;
	}
		
	return sair;
}
void infor(int cont, int barco, int vida){
	textColor(WHITE,_BLACK);
	printf("Barcos existentes: %d, Barcos encontrados: %d, vidas: %d\n\n",barco,cont,vida);
}
void legenda(){
	printf("\n -: Não foi escolido \t ");
	textColor(BLUE,_BLACK);
	printf("~");
	printf(ANSI_COLOR_RESET);
	printf(": água \t ");
	textColor(BROWN,_BLACK);
	printf("#");
	printf(ANSI_COLOR_RESET);
	printf(": navio encontrado \t");
	printf("\n\t\t10 10: desistir do jogo\n");
}
void legendaf(){
	printf("\n -: Não foi escolido \t ");
	textColor(BLUE,_BLACK);
	printf("~");
	printf(ANSI_COLOR_RESET);
	printf(": água \t ");
	textColor(BROWN,_BLACK);
	printf("#");
	printf(ANSI_COLOR_RESET);
	printf(": navio encontrado \t");
	printf("\n\t\t5 5: desistir do jogo\n");	
}
void legendam(){  //legenda nivel medio
	printf("\n -: Não foi escolido \t ");
	textColor(BLUE,_BLACK);
	printf("~");
	printf(ANSI_COLOR_RESET);
	printf(": água \t ");
	textColor(BROWN,_BLACK);
	printf("#");
	printf(ANSI_COLOR_RESET);
	printf(": navio encontrado \t");
	printf("\n\t\t8 8: desistir do jogo\n");
}
void parabens(){
	int x;
	
	textColor(GREEN,_BLACK);
	for(x=0;x<35;x++){
		printf("\n|||||| |||||| |||||| |||||| |||||  ||||| |||   || |||||| ");
		printf("\n||  || ||  || ||  || ||  || ||  || ||    || |  || |||    ");
		printf("\n|||||| |||||| |||||  |||||| |||||  ||||| || |  ||   ||   ");
		printf("\n||     ||  || ||  || ||  || ||  || ||    ||  | ||    ||| ");
		printf("\n||     ||  || ||  || ||  || |||||  ||||| ||  |||| |||||| ");
		system("cls");
	}
	for(x=0;x<35;x++){
		printf("\n||     || |||||| |||||| |||||");
		printf("\n ||   ||  ||  || ||     ||   ");
		printf("\n ||   ||  ||  || ||     |||||");
		printf("\n  || ||   ||  || ||     ||   ");
		printf("\n   |||    |||||| |||||| |||||");
		system("cls");
	}
	for(x=0;x<35;x++){
		printf("\n|||||| |||||| |||   || |||||| ||||| |||||| ||  || || ||  ||");
		printf("\n||     ||  || || |  || |||    ||    ||     ||  || || ||  ||");
		printf("\n||     ||  || || |  ||   ||   ||||| || ||| ||  || || ||  ||");
		printf("\n||     ||  || ||  | ||    ||| ||    ||  || ||  || || ||  ||");
		printf("\n|||||| |||||| ||  |||| |||||| ||||| |||||| |||||| || ||||||");
		system("cls");
	}
	for(x=0;x<20;x++){
		printf("\n!!!  !!!");
		printf("\n!!!  !!!");
		printf("\n!!!  !!!");
		printf("\n!!!  !!!");
		printf("\n        ");
		printf("\n !    ! ");
		printf("\n!!!  !!!");
		printf("\n !    ! ");
		system("cls");
	}
	printf(ANSI_COLOR_RESET);
}
void perdeu(){
	int x;
	
	textColor(RED,_BLACK);
	for(x=0;x<40;x++){
		printf("\n|||||| |||   || ||||| ||||| ||    || ||||| |||    ||| ||||| |||   || |||||| ||||| ");
		printf("\n  ||   || |  || ||    ||    ||    ||    /  || \\  / || ||    || |  ||   ||   ||    ");
		printf("\n  ||   || |  || ||||| ||||| ||    ||   /   ||  \\/  || ||||| || |  ||   ||   ||||| ");
		printf("\n  ||   ||  | || ||    ||    ||    ||  /    ||      || ||    ||  | ||   ||   ||    ");
		printf("\n|||||| ||  |||| ||    ||||| ||||| || ||||| ||      || ||||| ||  ||||   ||   ||||| ");
		system("cls");
	}
	for(x=0;x<35;x++){
		printf("\n|||   || |||||| ||||||      ||||| |||||| || ");
		printf("\n|| |  || ||  || ||  ||      ||    ||  || || ");
		printf("\n|| |  || |||||| ||  ||      ||||| ||  || || ");
		printf("\n||  | || ||  || ||  ||      ||    ||  || || ");
		printf("\n||  |||| ||  || ||||||      ||    |||||| || ");
		system("cls");
	}
	for(x=0;x<35;x++){
		printf("\n|||||  ||||| |||||| |||||| ||||||       ||     || ||||| |||||  ");
		printf("\n||  || ||    |||      ||   ||  ||        ||   ||  ||       /   ");
		printf("\n||  || |||||   ||     ||   ||||||        ||   ||  |||||   /    ");
		printf("\n||  || ||       |||   ||   ||  ||         || ||   ||     /     ");
		printf("\n|||||  ||||| ||||||   ||   ||  ||          |||    ||||| |||||  ");
		system("cls");
	}
	printf(ANSI_COLOR_RESET);
}
void perdeutabm(char tabuleirom[F+3][F+3], char tabuleiromg[F+3][F+3]){
	int i, j;

	printf("    USUARIO   ");
	printf("\t\t\t\t\t");
	printf("    GABARITO   \n\n");
	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7 " ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  -------------------------------" ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "  -------------------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <(F+3); i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<(F+3); j++){
        	if(tabuleirom[i][j]=='~'){
        		textColor(BLUE,_BLACK);
        		printf("%c   ", tabuleirom[i][j]);
       			printf(ANSI_COLOR_RESET);
			}else if(tabuleirom[i][j]=='-'){
				printf("%c   ", tabuleirom[i][j]);
			}else if(tabuleirom[i][j]=='#'){
				textColor(BROWN,_BLACK);
				printf("%c   ", tabuleirom[i][j]);
        		printf(ANSI_COLOR_RESET);
			}
        }
        printf("\t\t");
        textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<(F+3); j++){
        	if(tabuleiromg[i][j]=='~'){
        		textColor(BLUE,_BLACK);
        		printf("%c   ", tabuleiromg[i][j]);
        		printf(ANSI_COLOR_RESET);
			}else if(tabuleiromg[i][j]=='-'){
				printf("%c   ", tabuleiromg[i][j]);
			}else if(tabuleiromg[i][j]=='#'){
				textColor(BROWN,_BLACK);
				printf("%c   ", tabuleiromg[i][j]);			
				printf(ANSI_COLOR_RESET);
			}
        }
        printf("\n");
    }
}
void perdeutab(char tabuleirom[T][T], char tabuleiromg[T][T]){
	int i, j;

	printf("    USUARIO   ");
	printf("\t\t\t\t\t\t");
	printf("    GABARITO   \n\n");
	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7   8   9 " ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "   0   1   2   3   4   5   6   7   8   9 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  ---------------------------------------" ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "  ---------------------------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <T; i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<T; j++){
        	if(tabuleirom[i][j]=='~'){
        		textColor(BLUE,_BLACK);
        		printf("%c   ", tabuleirom[i][j]);
       			printf(ANSI_COLOR_RESET);
			}else if(tabuleirom[i][j]=='-'){
				printf("%c   ", tabuleirom[i][j]);
			}else if(tabuleirom[i][j]=='#'){
				textColor(BROWN,_BLACK);
				printf("%c   ", tabuleirom[i][j]);
        		printf(ANSI_COLOR_RESET);
			}
        }
        printf("\t\t");
        textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<T; j++){
        	if(tabuleiromg[i][j]=='~'){
        		textColor(BLUE,_BLACK);
        		printf("%c   ", tabuleiromg[i][j]);
        		printf(ANSI_COLOR_RESET);
			}else if(tabuleiromg[i][j]=='-'){
				printf("%c   ", tabuleiromg[i][j]);
			}else if(tabuleiromg[i][j]=='#'){
				textColor(BROWN,_BLACK);
				printf("%c   ", tabuleiromg[i][j]);
        		printf(ANSI_COLOR_RESET);
			}
        }
        printf("\n");
    }
}
void perdeutabf(char tabuleirom[F][F], char tabuleiromg[F][F]){
	int i, j;

	printf("    USUARIO   ");
	printf("\t\t\t\t");
	printf("    GABARITO   \n\n");
	printf(ANSI_COLOR_RED "   0   1   2   3   4 " ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "   0   1   2   3   4 \n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_RED "  -------------------" ANSI_COLOR_RESET);
	printf("\t\t");
	printf(ANSI_COLOR_RED "  -------------------\n" ANSI_COLOR_RESET);

    for (i=0; i <F; i++){
    	textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<F; j++){
        	if(tabuleirom[i][j]=='~'){
        		textColor(BLUE,_BLACK);
        		printf("%c   ", tabuleirom[i][j]);
				printf(ANSI_COLOR_RESET);
			}else if(tabuleirom[i][j]=='-'){
				printf("%c   ", tabuleirom[i][j]);
			}else if(tabuleirom[i][j]=='#'){
				textColor(BROWN,_BLACK);
				printf("%c   ", tabuleirom[i][j]);
        		printf(ANSI_COLOR_RESET);
			}
        }
        printf("\t\t");
        textColor(GREEN,_BLACK);
        printf("%c |", '0'+i);
        printf(ANSI_COLOR_RESET);
        for (j=0; j<F; j++){
        	if(tabuleiromg[i][j]=='~'){
        			textColor(BLUE,_BLACK);
        			printf("%c   ", tabuleiromg[i][j]);
        			printf(ANSI_COLOR_RESET);
			}else if(tabuleiromg[i][j]=='-'){
					printf("%c   ", tabuleiromg[i][j]);
			}else if(tabuleiromg[i][j]=='#'){
					textColor(BROWN,_BLACK);
					printf("%c   ", tabuleiromg[i][j]);
        			printf(ANSI_COLOR_RESET);
			}
        }
        printf("\n");
    }
}
void obri(){
	printf("\t\t\t~~~ INFORMAÇÕES DO JOGO ~~~\t\t\t\t\t");
	printf("\n\nDESENVOLVEDORA: MARIANE MENDONÇA ");
	printf("\nPROFESSOR ORIENTADOR: HUGO RESENDE ");
	printf("\nENSINO MEDIO INTEGRADO AO TECNICO EM INFORMATICA");
	printf("\nANO: 2023");
	printf("\n1º ANO DO ENSINO MEDIO");
	printf("\nTRABALHO DE FINALIZAÇÃO DE MATERIA");
	printf("\nMATERIA: LINGUAGEM DE PROGRAMAÇÃO I");
	printf("\nLINGUAGEM UTILIZADA: C\n\n");
	system("pause");
	system("cls");
}
int main(){
    char tabPlay[T][T], tabComp[T][T];
    char nivelF[F][F],nivelFcom[F][F];
    char nivelM[F+3][F+3], nivelMcom[F+3][F+3];
    char nome[200];
    int vito=0, derro=0, desistiu=0;
    int x, y, op, jogo=1, barco, vida=0, cont=0, sair=0;
    int opN;

	setlocale(LC_ALL, "portuguese");
	
	iniciacao();
	
	printf("QUAL É SEU NOME MARUJO?? \n");
	fgets(nome,200,stdin);
	strupr(nome);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t\t\tok marujo, vamos começar nossa aventura!!\n\n\n\n\n\n\n\n");
	system("pause");
	system("cls");
	
	while(jogo==1){
		op=menu(op);
		system("cls");
		
		switch(op){
			case 1:
				carregando();
				vida=sortvida();
				iniciarTab(tabPlay);
				iniciarTab(tabComp);
				barco=coordenadasB(tabComp);
				vaco(tabComp);
				while((vida>0)&&(cont<barco)){
					infor(cont,barco,vida);
					exibirTab(tabPlay);
					legenda();
					cont+=coordenadas(tabPlay,tabComp);
					while(des==1){
						sair=desistir();
						if(sair==1)
							break;
						else{
							des=0;
							system("cls");
							infor(cont,barco,vida);
							exibirTab(tabPlay);
							legenda();
							cont+=coordenadas(tabPlay,tabComp);
						}
					}
					if(sair==1)
						break;
					vida--;
					system("cls");
				}
				if(sair==1){
					desistiu+=1;
					system("cls");
					break;
				}
				if((vida==0)&&(cont<barco)){
					derro+=1;
					perdeu();
					printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
					printf("\nMAIS SORTE NA PROXIMA.\n");
					printf("\n");
					perdeutab(tabPlay,tabComp);
					printf("\n");
					system("pause");
					system("cls");
				}
				if(cont==barco){
					vito+=1;
					parabens();
					printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
					system("pause");
					system("cls");
				}
				break;
			case 2:
				opN=menunivel(opN);
				switch(opN){
					case 1:
						carregando();
						vida=22;
						iniciarnf(nivelF);
						iniciarnf(nivelFcom);
						barco=nivelNcoor(nivelFcom);
						vacof(nivelFcom);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibef(nivelF);
							legendaf();
							cont+=coordenadasf(nivelF,nivelFcom);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibef(nivelF);
									legenda();
									cont+=coordenadasf(nivelF,nivelFcom);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutabf(nivelF,nivelFcom);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 2:
						carregando();
						vida=45;
						iniciarnm(nivelM);
						iniciarnm(nivelMcom);
						barco=nivelMcoor(nivelMcom);
						vacom(nivelMcom);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibem(nivelM);
							legendam();
							cont+=coordenadasm(nivelM,nivelMcom);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibem(nivelM);
									legenda();
									cont+=coordenadasm(nivelM,nivelMcom);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutabm(nivelM,nivelMcom);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 3:
						carregando();
						vida=50;
						iniciarTab(tabPlay);
						iniciarTab(tabComp);
						barco=nivelDcoor(tabComp);
						vaco(tabComp);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibirTab(tabPlay);
							legenda();
							cont+=coordenadas(tabPlay,tabComp);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibirTab(tabPlay);
									legenda();
									cont+=coordenadas(tabPlay,tabComp);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutab(tabPlay,tabComp);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 4: 
						system("cls");
						printf("Voltando ao menu principal.\n");
						system("pause");
						system("cls");
						break;
				}
				break;
			case 3:
				barco=0;
				opN=menuper(opN);
				system("cls");
				switch(opN){
					case 1: 
						printf("\nDigite a quantidade de ");
						textColor(GREEN,_BLACK);
						printf("barcos ");
						printf(ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&barco);
						system("cls");
						if(barco>25){
							while(barco>25){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n");
								printf("\nDigite a quantidade de ");
								textColor(GREEN,_BLACK);
								printf("barcos ");
								printf(ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&barco);
								system("cls");
							}
						}
						textColor(GREEN,_BLACK);
						printf("Barcos");
						printf(ANSI_COLOR_RESET);
						printf(": %d\n",barco);
						printf("Digite a quantidade de ");
						printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&vida);
						system("cls");
						if((vida>25)||(vida<0)){
							while(vida>25){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}	
						}
						if(barco>vida){
							while(barco>vida){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}
						}
						carregando();
						iniciarnf(nivelF);
						iniciarnf(nivelFcom);
						pqcoor(nivelFcom,barco);
						vacof(nivelFcom);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibef(nivelF);
							legendaf();
							cont+=coordenadasf(nivelF,nivelFcom);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibef(nivelF);
									legenda();
									cont+=coordenadasf(nivelF,nivelFcom);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutabf(nivelF,nivelFcom);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 2:
						printf("\nDigite a quantidade de ");
						textColor(GREEN,_BLACK);
						printf("barcos ");
						printf(ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&barco);
						system("cls");
						if(barco>64){
							while(barco>64){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n");
								printf("\nDigite a quantidade de ");
								textColor(GREEN,_BLACK);
								printf("barcos ");
								printf(ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&barco);
								system("cls");
							}
						}
						textColor(GREEN,_BLACK);
						printf("Barcos");
						printf(ANSI_COLOR_RESET);
						printf(": %d\n",barco);
						printf("Digite a quantidade de ");
						printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&vida);
						system("cls");
						if((vida>64)||(vida<0)){
							while(vida>64){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}	
						}
						if(barco>vida){
							while(barco>vida){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}
						}
						carregando();
						iniciarnm(nivelM);
						iniciarnm(nivelMcom);
						pmcoor(nivelMcom,barco);
						vacom(nivelMcom);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibem(nivelM);
							legendam();
							cont+=coordenadasm(nivelM,nivelMcom);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibem(nivelM);
									legenda();
									cont+=coordenadasm(nivelM,nivelMcom);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutabm(nivelM,nivelMcom);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 3:
						printf("\nDigite a quantidade de ");
						textColor(GREEN,_BLACK);
						printf("barcos ");
						printf(ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&barco);
						system("cls");
						if(barco>100){
							while(barco>100){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n");
								printf("\nDigite a quantidade de ");
								textColor(GREEN,_BLACK);
								printf("barcos ");
								printf(ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&barco);
								system("cls");
							}
						}
						textColor(GREEN,_BLACK);
						printf("Barcos");
						printf(ANSI_COLOR_RESET);
						printf(": %d\n",barco);
						printf("Digite a quantidade de ");
						printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
						printf("desejada: ");
						scanf("%d",&vida);
						system("cls");
						if((vida>100)||(vida<0)){
							while(vida>100){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}	
						}
						if(barco>vida){
							while(barco>vida){
								printf("NÃO É POSSIVEL JOGAR ESTE JOGO\n\n");
								textColor(GREEN,_BLACK);
								printf("Barcos");
								printf(ANSI_COLOR_RESET);
								printf(": %d\n",barco);
								printf("Digite a quantidade de ");
								printf(ANSI_COLOR_RED "vida " ANSI_COLOR_RESET);
								printf("desejada: ");
								scanf("%d",&vida);
								system("cls");
							}
						}
						carregando();
						iniciarTab(tabPlay);
						iniciarTab(tabComp);
						pdcoor(tabComp,barco);
						vaco(tabComp);
						while((vida>0)&&(cont<barco)){
							infor(cont,barco,vida);
							exibirTab(tabPlay);
							legenda();
							cont+=coordenadas(tabPlay,tabComp);
							while(des==1){
								sair=desistir();
								if(sair==1)
									break;
								else{
									des=0;
									system("cls");
									infor(cont,barco,vida);
									exibirTab(tabPlay);
									legenda();
									cont+=coordenadas(tabPlay,tabComp);
								}
							}
							if(sair==1)
								break;
							vida--;
							system("cls");
						}
						if(sair==1){
							desistiu+=1;
							system("cls");
							break;
						}
						if((vida==0)&&(cont<barco)){
							derro+=1;
							perdeu();
							printf("\nINFELIZMENTE NÃO FOI DESTA VEZ %s",nome);
							printf("\nMAIS SORTE NA PROXIMA.\n");
							printf("\n");
							perdeutab(tabPlay,tabComp);
							printf("\n");
							system("pause");
							system("cls");
						}
						if(cont==barco){
							vito+=1;
							parabens();
							printf("\nPARABENS!!! \nVOCÊ CONSEGUIU!!\n");
							system("pause");
							system("cls");
						}
						break;
					case 4:
						system("cls");
						printf("Voltando ao menu principal.\n");
						system("pause");
						system("cls");
						break;	
				}
				break;
			case 4: 
				printf("  Batalha naval é um jogo tradicional infantil que permite trabalhar o");
				printf("\nraciocíno lógico e a resolução de problemas!");
				printf("\n  Tente afundar todos os navios inimigos neste jogo de batalha naval!");
				printf("\n\nCOMO JOGAR:\n");
				printf("\n  Você possui sorte? ");
				printf("\n  Pois aqui você precisará, tente achar todos os navios que estão ");
				printf("\nescondido neste grande mar antes que suas chances acabe.");
				printf("\n  BOA SORTE, você precisará.");
				printf("\n\nQUAIS AS 3 OPÇÕES DE JOGO DISPONÍVEIS: \n");
				printf("\n1.JOGO ALEATÓRIO:\n");
				printf("\n  Na opção de jogo aleatório, será sorteada a quantidade de barcos e ");
				printf("\nde vida, a quantidade de barco estará entre 15 e 25, a quantidade de ");
				printf("\nvida estará entre 40 e 80.");
				printf("\n\n2.JOGO NÍVEIS:\n");
				printf("\n  Esta opção possui 3 níveis diferentes: o facil, o medio e o dificil, ");
				printf("\ncom algumas diferenças que são:");
				printf("\nNível Fácil: a tabela é 5X5, contendo 22 vidas e 10 barcos.");
				printf("\nNível Médio: a tabela é 8X8, contendo 45 vidas e 20 barcos.");
				printf("\nNível Difícil: a tabela é 10X10, contendo 50 vidas e 25 barcos");
				printf("\n\n3.PERSONALIZAR:\n");
				printf("\n  Nesta opção você poderá escolher e montar o seu jogo de diversas ");
				printf("\nformas diferentes, como:");
				printf("\nOpções de tabela: 5X5, 8X8 e 10X10.");
				printf("\nEscolher a quantidade de vidas e barcos desejada. OBS: não é possivel");
				printf("\njogar com menos vida que barco.\n\n");
				system("pause");
				system("cls");
				break;
			case 5:
				system("cls");
				obri();
				printf("\n\t%s OS SEUS RESULTADOS: ",nome);
				printf("\n\nVITORIAS: %d", vito);
				printf("\nDERROTA: %d",derro);
				printf("\nDESISTENCIA: %d\n",desistiu);
				system("pause");
				system("cls");
				printf("\nOBRIGADO(A) POR JOGAR!!");
				printf("\nESPERO VELO NOVAMENTE!\n");
				printf("\nTCHAU MARUJO\n\n\n");
				system("pause");
				return 0;
			default: 
				printf("ESCOLHA INVALIDA!!\n");
				system("pause");
				system("cls");
		}
		cont=0;
		des=0;
		sair=0;	
	}
    
    return 0;
}
