#include <stdio.h>

int main() {

    float distancia, totallt, media;

    printf ("Inserir a distancia percorrida pelo veiculo: \n");
    scanf ("%f", &distancia);

    sleep(1);

    printf ("Inserir a quantidade total de litros abastecido: \n");
    scanf ("%f", &totallt);

    media = (distancia/totallt);

    printf("A media obtida pelo veiculo em KM eh de: %.4f\n", media);

return 0;

}