#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define	MAX	80
char checker(char *ch);

int main(int argc, char **argv[]){
	const char chaine[MAX] = "printemps" ;
	char lettre[MAX];
	char chaine_mystere[MAX];
	int nb_essais = 10;
	int longueur, existence, i=0, k=0;
	while(chaine[k]!='\0'){
		k++;
		} 
	longueur=k ;
	for (i=0; i<longueur; i++){
		chaine_mystere[i] = '*';
		}
	chaine_mystere[longueur]=' ';
	printf("Bienvenue dans le Pendu !\n\n");

	while(checker(chaine_mystere)==1 && nb_essais>0) {
		printf("\nIl vous reste %d coups à jouer \n", nb_essais);
		printf("Quel est le mot secret ? ");
		puts(chaine_mystere);
		printf("\nProposez une lettre : ");
		gets(lettre);
		// tout rendre minuscule ou majuscule
		for (int j=0;j<longueur;j++){
			if (lettre[0]==chaine[j]){
				chaine_mystere[j]=lettre[0];
				existence = 1;
				break;
				}
			else{
				existence=0;
				}			
			}
		if (existence==0)
			nb_essais=nb_essais-1;	
		}
	printf("Félicitations ! vous avez trouvé le mot %s ! Vous êtes bien dans ce jeu ! \n", chaine_mystere);
	}
	
char checker(char *ch){
	int longueur = strlen(ch);
	for(int i=0;i<longueur-1;i++){
		if(ch[i]=='*')
			return 1;
		}
	}
