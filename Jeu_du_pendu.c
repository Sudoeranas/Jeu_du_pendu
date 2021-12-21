#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define	MAX	80
char checker(char *ch);

int main(){
	const char chaine[MAX] = "rouge" ;
	char lettre[MAX];
	char chaine_mystere[MAX];
	int nb_essais = 10;
	int *longueur, existence, i=1;
	while(chaine[i]!='\0'){
		i++;
		} 
	longueur=i ;	
	for (int i=0; i<longueur-2; i++){
		chaine_mystere[i] = '*';
		}
	printf("Bienvenue dans le Pendu !\n\n");
	
	while(checker(chaine_mystere)==1 && nb_essais>0) {
		printf("Il vous reste %d coups à jouer \n", nb_essais);
		printf("Quel est le mot secret ? ");

		printf("%s", chaine_mystere);

		printf("\nProposez une lettre : ");
		gets(lettre);
		// tout rendre minuscule ou majuscule
		for (int j=0;j<longueur;j++){
			if (lettre==chaine[j]){
				chaine_mystere[j]=lettre;
				existence = 1;
				break;
				}
			else{
				existence=0;
				}			
			}
		if (existence==0)
			nb_essais--;
		}
	}
	
char checker(char *ch){
	int longueur = strlen(ch);
	for(int i=0;i<longueur-1;i++){
		if(ch[i]=='*')
			return 1;
		}
	}
