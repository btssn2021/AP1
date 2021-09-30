#include <stdio.h>
#include <math.h>

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

    /****************Exercice n°8**************************************************/
    int id=0;
    float mnthoraire=0,nbheures=0;
    printf("\nEntrez l'ID de l'employé:");
    scanf("%d",&id);
    printf("Montant du salaire/heure:");
    scanf("%f",&mnthoraire);
    printf("Nombres d'heures de travail:");
    scanf("%f",&nbheures);
    printf("ID employé:%d\n",id);
    printf("Salaire=%0.2f",nbheures*mnthoraire);
    /**************Exercice n°9******************************************************/
    int km=0;
    float carburant=0;
    printf("Distance total en km");
    scanf("%d",&km);
    printf("Entrez le carburant depensé en litres");
    scanf("%3f",&carburant);
    printf("Consommation moyenne (km/lt) %f",km/carburant);
    /***********exercice n°10***********************************************/
    float racine=0;
    racine= sqrt(5);
    printf("%f",racine);
    int carre;
    carre= pow(2,2); // 2 puissance 2
    return 0;
}
