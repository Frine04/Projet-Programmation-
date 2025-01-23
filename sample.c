#include "sample.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
// exercise 1
void exercise_1()
{
printf("Bonjour\n");
}

// exercise 2
int inverseNombre(int nombre){
int centaine, dizaine, unite;
    centaine=nombre / 100;
    dizaine=(nombre / 10) % 10;
    unite=nombre % 10;
    return unite*100 + dizaine*10 + centaine;
}

// exercise 3
float produit()
{
float a,b,produit;
printf("entrer deux nombres réels\n");
scanf("%f",&a);
scanf("%f",&b);
produit=a*b;
printf("%f*%f=%.3f\n",a,b,produit);
return produit;
}
// exercise 4
void parity(){
	int a;
	printf("entrer un entier\n");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("%d est un nombre pair",a);
	
	}
	else {
		printf("%d est un nombre impaire",a);
	}
	
}
// exercise 5
void compare()
{
int a,b;
printf("entrer deux entier a et b\n");
scanf ("%d",&a);
scanf ("%d",&b);
	if (a==b)
	{
		printf("%d=%d\n",a,b);
	}
	else if(a<b)
	     { 
	     printf("%d<%d\n",a,b);
       	 }
    else{
    	printf("%d>%d\n",a,b);
	}
}
// exercise 6
void ordrecroissant()
{
	int i,j,min,tab[2];
	printf("entrer trois variable\n ");
	for(i=0;i<=2;i++)
	scanf("%d",&tab[i]);
	
	for(i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			if (tab[i]<tab[j])
			{
				min=tab[j];
				tab[j]=tab[i];
				tab[i]=min;
			}
			
		}
	
	}
	for (i=0;i<=2;i++)
	{ 
	printf("%d\n",tab[i]);
}
printf("\n");
}
// exercise 16
void swap( char*a, char*b ) {
	char temp;
    temp =*a;
    *a = *b;
    *b =temp;

}
//exercise 17
int Somme(int a,int b){
	return a+b;
}
