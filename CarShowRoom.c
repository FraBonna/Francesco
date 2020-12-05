#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 30
#define MAXAUTO 10

struct autoSalone{
	int cilindrata;
	int anno;
	char marca[N];
	char nome[N];
	char cognome[N];
};

int main(){
	int SC, i;
	int macchine;
	struct autoSalone autoM[MAXAUTO];
	char parola1[N];
	int r;
	int s;
	int e;
	int anno2;
    char nomecompleto;
      
    do{
    	system("CLS");
    	printf("1.How many cars you want enter?\n");
    	printf("2.Machine data entry\n");
    	printf("3.Look for the make of the car you are interested in\n");
    	printf("4.Machines with displacement over 1800\n");
    	printf("5.Machine search by year\n");
    	printf("6.End of program!\n");
    	printf("What do you want to do? ");
    	fflush(stdin);
    	scanf("%d", &SC);
    	
    	switch(SC){
    		case 1:
    			do{
    				printf("Enter the number of cars you want to add to the showroom: ");
    				fflush(stdin);
    				scanf("%d", &macchine);
				}while(macchine < 1 || macchine > 10);
    			system("pause");
    		break;
    		
    		case 2:
    			for(i = 0; i < macchine; i++){
    				printf("Number %d\n", i+1);
    				printf("Enter the brand: ");
    				fflush(stdin);
    				gets(autoM[i].marca);
    				
    				do{
    					printf("Enter the displacement of the car: ");
    					fflush(stdin);
    					scanf("%d", &autoM[i].cilindrata);
					}while(autoM[i].cilindrata < 800 || autoM[i].cilindrata > 2500);
					
					do{
						printf("Enter the year of the car: ");
						fflush(stdin);
						scanf("%d", &autoM[i].anno);
					}while(autoM[i].anno < 2000 || autoM[i].anno > 2019);
					
					printf("Enter the person's name: ");
					fflush(stdin);
					gets(autoM[i].nome);
					
					printf("Enter the person's username: ");
					fflush(stdin);
					gets(autoM[i].cognome);
					printf("\n");
				}
    			system("pause");
    		break;
    		
    		case 3:
    			printf("Enter the brand to search for in the car showroom: ");
    			fflush(stdin);
    			gets(parola1);
    			r = 0; 
    			for(i = 0; i < macchine; i++){
    				if(strstr(autoM[i].marca,parola1)){
    					r++;
    					if(r > 0){
    						strcat(autoM[i].nome, " ");
    						strcat(autoM[i].nome, autoM[i].cognome);
    						printf("%s\n",autoM[i].nome);
						}
					}
				}
    			system("pause");
    		break;
    		
    		case 4:
    			s = 0;
    			for(i = 0; i < macchine; i++){
    				if(autoM[i].cilindrata > 1800){
    					s++;
					}
				}
				printf("The machines that have a displacement above 1800 are: %d\n", s);
    			system("pause");
    		break;
    		
    		case 5:
    			printf("Enter the year to search: ");
    			scanf("%d", &anno2);
    			e = 0;
    			for(i = 0; i < macchine; i++){
    				if(anno2 == autoM[i].anno){
    					e++;
					}
				}
				printf("\nThe machines of the year %d are: %d\n", anno2, e);
    			system("pause");
    		break;
    		
    		case 6:
    			printf("End Programm!\n");
    			return;
    			system("pause");
    		break;
    		
    		default:
    			printf("Wrong choice...\n");
    			system("pause");
    		break;
		}
	}while(SC != 6);
	
	return 0;
}
