#include <stdio.h>
#include <stdlib.h>
float test(float wow);
float tarifBerechnung(float monatsPreis, float minutenPreis, float minuten);


int main(void)
{
    switchCase();
}

void switchCase() {
    int caseProgram;
    printf("\nWas moechtest du starten? \n"
           "Option (1): Test-Funktion\n"
           "Option (2): Zinsberechnung\n"
           "Option (3): Zylinderberechnung\n"
           "Option (4): Tarifberechnung\n"
           "Option (5): Exit Program\n\t");
    scanf("%d", &caseProgram);

    switch (caseProgram){
        case 1: test(5.5); switchCase(); break;
        case 2: zinsBerechnung(); switchCase(); break;
        case 3: zylinderBerechnung(); switchCase(); break;
        case 4: tarif(); switchCase(); break;
        case 5: printf("\n--- exiting ---"); break;
        default: printf("\nBitte ein Case angeben\n"); scanf("%*c"); switchCase(); break;
    }
}

float test(float wow) {
//    wow = 10;
    int variable = wow + 10;
    printf("Hello world!\n");
    printf("Hello zahl: %d \n", variable);
    return wow;
}

void zinsBerechnung() {
    float kapital, zinssatz, zinsen;

    printf("\nHier das Kapital eingeben: ");
    scanf("%f", &kapital);
    printf("\nHier den Zinssatz eingeben: ");
    scanf("%f", &zinssatz);

    zinsen = kapital * zinssatz / 100;

    printf("\nDu zahlst %.2f Zinsen", zinsen);
}

void zylinderBerechnung() {
    float hoehe, radius, oberflaeche, volumen;
    float pi = 3.14159;

    printf("\nHier Zylinderhoehe eingeben: ");
    scanf("%f", &hoehe);
    printf("\nHier Zylinderradius eingeben: ");
    scanf("%f", &radius);

    volumen = pow(radius, 2) * pi * hoehe;
    oberflaeche = radius * 2 * pi * hoehe + pow(radius, 2) * pi * 2;

    printf("\nDas Volumen des Zylinders betraegt: %.2f \n"
           "Die Oberflaeche des Zylinders betraegt: %.2f\n", volumen, oberflaeche);
}

void tarif() {
    float minuten;

    printf("Wie viele Minuten hast du telefoniert?");
    scanf("%f", &minuten);

    printf("\nVertrag 1 kostet: %.2f Euro\n"
           "Vertrag 2 kostet: %.2f Euro\n",
           tarifBerechnung(9.2, 0.248, minuten),
           tarifBerechnung(12.8, 0.15, minuten));
}

float tarifBerechnung(float monatsPreis, float minutenPreis, float minuten) {
    float gesamtPreis = monatsPreis + minutenPreis * minuten;
    return gesamtPreis;
}


