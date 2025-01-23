#include <stdio.h>
#include <stdlib.h>
#include "sample.h"
int main( void ) {
int choix;
char x,y;
int nombre,inverse,e,f,resultat;
int result = power( 2, 3 );
printf( "2³ == %d\n", result );
result = fact( 6 );
printf( "6! == %d\n", result );
while(1)
{
printf("entrer le numero de l'exercise :  ");
scanf("%d",&choix);
switch(choix)
{
	case 1:
		printf("exercise 1\n");
		exercise_1();
		break;
	case 2:
		printf("entrer un entier de trois chiffre:");
		scanf("%d",&nombre);
		if(nombre<100 || nombre>999)
		{
			printf("l'entier doit etre constitue de trois chiffres\n");
		}
		else
		{
		inverse=inverseNombre(nombre);
		printf("l'inverse de %d est :%d\n",nombre,inverse);
	}
		break;
	case 3:
		printf("exercise 3\n");
        produit();
		break;
	case 4:
		printf("exercise 4\n");
        parity();
		break;
	case 5:
		printf("exercise 5\n");
        compare(); 
		break;
	case 6:
		printf("exercise 6\n");
        ordrecroissant();
		break;
	case 16:
		printf("exercise 16\n");
		 printf( "entrer deux characteres a inverser x et y\n"); 
    scanf(" %c %c ", &x, &y);
    
         printf( "avant permutation x = %c, y = %c\n", x,y );  
         swap( &x, &y );
         printf( "apres permutation x = %c, y = %c\n", x, y );  
		break;
		
    case 17:
		printf("exercise 17\n");
		printf("entrer deux entiers\n");
		scanf("%d%d",&e,&f);
		resultat= Somme(e,f);
		printf("la somme de %d et de %d est: %d\n",e,f,resultat);
		 break;
	
	default:
		 printf("choix invalide\n");
		break;
}
}
return EXIT_SUCCESS;
}
