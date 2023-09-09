#include <stdio.h>

int main() {
    float tempF, tempC;

    printf ("Inserir a temperatura em graus Fahrenheit: \n");
    scanf ("%f", &tempF);

    tempC = (tempF-32)*(5.0/9.0);     // ver o pq que tem que colocar "5.0" e "9.0" ao inves do numero inteiro

    printf("A temperatura em celsius eh: %.2f\n", tempC); 

return 0;

}