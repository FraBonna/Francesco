#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define N 16

int main(){
	int sc, i, somma;
	char cdc[N+1];
	char lastC;
	int totale;
	char check;
	
	do{
		system("CLS");
		printf("1.Codice fiscale\n");
		printf("2.Stampa\n");
		printf("3.Check digit\n");
		printf("4.Fine programma\n");
		fflush(stdin);
		scanf("%d", &sc);
		
		switch(sc){
			case 1:
				{
					do{
						printf("Inserisci il codice fiscale: ");
						fflush(stdin);
						gets(cdc);
					}while(strlen(cdc) != N || isalpha(cdc[N-1]) == 0); //controlla se l'ultimo valore è una lettera
					system("pause");
					break;
				}
				
			case 2:
				{
					for(i = 0; i < N; i++){
						if(isdigit(cdc[i]) == 0){
							cdc[i] = toupper(cdc[i]);
						}
						printf("%c", cdc[i]);
					}
					printf("\n");
					lastC = cdc[N-1];
					system("pause");
					break;	
				}
				
			case 3:
				somma = 0;
				{
					for(i = 0; i < N-1; i++){
						if(i % 2 == 0){
							if(isalpha(cdc[i])!= 0){
								switch(cdc[i]){
								case 'A':{
										somma += 1;
										break;	
									}
									
								case 'B':{
										somma += 0;
										break;
									}
									
								case 'C':{
									somma += 5;
									break;
								}
									
								case 'D':{
									somma += 7;
									break;	
								}
								
								case 'E':{
									somma += 9;
									break;
								}
		
								case 'F':{
									somma += 13;
									break;
								}
		
								case 'G':{
									somma += 15;
									break;
								}
								
								case 'H':{
									somma += 17;
									break;
								}
								
								case 'I':{
									somma += 19;
									break;
								}
								
								case 'J':{
									somma += 21;
									break;
								}
								
								case 'K':{
									somma += 2;
									break;
								}
								
								case 'L':{
									somma += 4;
									break;
								}
								
								case 'M':{
									somma += 18;
									break;
								}
								
								case 'N':{
									somma += 20;
									break;
								}
								
								case 'O':{
									somma += 11;
									break;
								}
								
								case 'P':{
									somma += 3;
									break;
								}
								
								case 'Q':{
									somma += 6;
									break;
								}
								
								case 'R':{
									somma += 8;
									break;
								}
								
								case 'S':{
									somma += 12;
									break;
								}
								
								case 'T':{
									somma += 14;
									break;
								}
								
								case 'U':{
									somma += 16;
									break;
								}
								
								case 'V':{
									somma += 10;
									break;
								}
								
								case 'W':{
									somma += 22;
									break;
								}
								
								case 'X':{
									somma += 25;
									break;
								}
								
								case 'Y':{
									somma += 24;
									break;
								}
								
								case 'Z':{
									somma += 23;
									break;
								}								
							}
						}
						else{
							switch(cdc[i]){
								case '0':{
									somma += 1;
									break;
								}
									
								case '1':{
									somma += 0;
									break;
								}
									
								case '2':{
									somma += 5;
									break;
								}
									
								case '3':{
									somma += 7;
									break;
								}
									
								case '4':{
									somma += 9;
									break;
								}
									
								case '5':{
									somma += 13;
									break;
								}
									
								case '6':{
									somma += 15;
									break;
								}
									
								case '7':{
						 			somma += 17;
									break;
								}
									
								case '8':{
									somma += 19;
									break;
								}
									
								case '9':{
									somma += 21;
									break;
								}
							}
						}
					}
					else{
						if(isalpha(cdc[i]) != 0){
							switch(cdc[i]){
							case 'A':{
								somma += 0;
								break;
							}
							
							case 'B':{
								somma += 1;
								break;
							}
							
							case 'C':{
								somma += 2;
								break;
							}
							
							case 'D':{
								somma += 3;
								break;
							}
							
							case 'E':{
								somma += 4;
								break;
							}
							
							case 'F':{
								somma += 5;
								break;
							}
							
							case 'G':{
								somma += 6;
								break;
							}
							
							case 'H':{
								somma += 7;
								break;
							}
							
							case 'I':{
								somma += 8;
								break;
							}
							
							case 'J':{
								somma += 9;
								break;
							}
							
							case 'K':{
								somma += 10;
								break;
							}
							
							case 'L':{
								somma += 11;
								break;
							}
							
							case 'M':{
								somma += 12;
								break;
							}
							
							case 'N':{
								somma += 13;
								break;
							}
							
							case 'O':{
								somma += 14;
								break;
							}
							
							case 'P':{
								somma += 15;
								break;
							}
							
							case 'Q':{
								somma += 16;
								break;
							}
							
							case 'R':{
								somma += 17;
								break;
							}
							
							case 'S':{
								somma += 18;
								break;
							}
							
							case 'T':{
								somma += 19;
								break;
							}
							
							case 'U':{
								somma += 20;
								break;
							}
							
							case 'V':{
								somma += 21;
								break;
							}
							
							case 'W':{
								somma += 22;
								break;
							}
							
							case 'X':{
								somma += 23;
								break;
							}
							
							case 'Y':{
								somma += 24;
								break;
							}
							
							case 'Z':{
								somma += 25;
								break;
							}
						}
					}
					else{
						switch(cdc[i]){
							case '0':{
								somma += 0;
								break;
							}
							
							case '1':{
								somma += 1;
								break;
							}
							
							case '2':{
								somma += 2;
								break;
							}
							
							case '3':{
								somma += 3;
								break;
							}
							
							case '4':{
								somma += 4;
								break;
							}
							
							case '5':{
								somma += 5;
								break;
							}
							
							case '6':{
								somma += 6;
								break;
							}
							
							case '7':{
								somma += 7;
								break;
							}
							
							case '8':{
								somma += 8;
								break;
							}
							
							case '9':{
								somma += 9;
								break;
							}
						}
					}
				}
			}
			printf("%d\n", somma);
			totale = somma % 26;
			if(totale == 0){
				check = 'A';
			}
			if(totale == 1){
				check = 'B';
			}
			if(totale == 2){
				check = 'C';
			}
			if(totale == 3){
				check = 'D';
			}
			if(totale == 4){
				check = 'E';
			}
			if(totale == 5){
				check = 'F';
			}
			if(totale == 6){
				check = 'G';
			}
			if(totale == 7){
				check = 'H';
			}
			if(totale == 8){
				check = 'I';
			}
			if(totale == 9){
				check = 'J';
			}
			if(totale == 10){
				check = 'K';
			}
			if(totale == 11){
				check = 'L';
			}
			if(totale == 12){
				check = 'M';
			}
			if(totale == 13){
				check = 'N';
			}
			if(totale == 14){
				check = 'O';
			}
			if(totale == 15){
				check = 'P';
			}
			if(totale == 16){
				check = 'Q';
			}
			if(totale == 17){
				check = 'R';
			}
			if(totale == 18){
				check = 'S';
			}
			if(totale == 19){
				check = 'T';
			}
			if(totale == 20){
				check = 'U';
			}
			if(totale == 21){
				check = 'V';
			}
			if(totale == 22){
				check = 'W';
			}
			if(totale == 23){
				check = 'X';
			}
			if(totale == 24){
				check = 'Y';
			}
			if(totale == 25){
				check = 'Z';
			}
			
			if(lastC == check){
				printf("Il codice che hai inserito e' corretto\n");
			}
			else{
				printf("Il codice che hai inserito non e' corretto\n");
				printf("L'ultima lettera deve essere: %c\n", check);
			}
			system("pause");
			break;
		}
			
			case 4:
				{
					printf("Fine programma\n");
					system("pause");
					break;
				}
				
			default:
				printf("Errore\n");
				system("pause");
		}
	}while(sc != 4);
	
	return 0;
}
