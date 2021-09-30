#include <stdio.h>

int main() {
    /************************Exercice n°1******************************/
    printf("%s","Alexandra Abramof\n"); //marche sans %s
    printf("%s","14 juillet 1975\n");
    printf("%s","0669674556\n");
    /***********************Exercice n°2********************************/
    int longueur=20,largeur=10;
    printf("Périmètre du rectangle=%d cm\n",(longueur+largeur)*2);
    printf("Aire du rectangle=%d cm carrés\n",longueur*largeur);

    /**********************Exercice n°3**********************************/
    float rayon=0;
    const float PI=3.14; //constante
    printf("Veuillez saisir le rayon en cm\n");
    scanf("%f",&rayon);
    printf("Périmètre du cercle %0.6f cm\n",2*PI*rayon);
    printf("Aire du cercle %0.6f cm carrés\n",PI*rayon*rayon);
    /*********************Exercice  n°4 et 6************************************/
    int n1=0,n2=0;
    printf("Entrer le premier nombre entier:");
    scanf("%d",&n1);
    printf("Entrer le deuxième nombre entier:");
    scanf("%d",&n2);
    printf("Somme des deux nombres entiers ci dessus=%d",n1*n2);
    /********************Exercice n°7*********************************************/
    float p1=0,p2=0,na1=0,na2=0;
    printf("\nPoids-Article1:");
    scanf("%f",&p1);
    printf("Nombre d'article1:");
    scanf("%f",&na1);
    printf("Poids-Article2:");
    scanf("%f",&p2);
    printf("Nombre d'article2:");
    scanf("%f",&na2);
    printf("\nValeur moyenne=%f",((p1*na1)+(p2*na2))/(na1+na2));
    return 0;
}
