#include <stdio.h>
#include <math.h>

int main() {

    float c1, c2, hipotenusa;

    printf ("Inserir o valor do primeiro cateto: \n");
    scanf ("%f", &c1);

    printf ("Inserir o valor do segundo cateto: \n");
    scanf ("%f", &c2);

    hipotenusa = sqrt(c1*c1+c2*c2);

    printf("o valor da hipotenusa do triangulo retangulo eh: %f\n",hipotenusa);

return 0;

}
