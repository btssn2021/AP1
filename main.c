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

    return 0;
}
