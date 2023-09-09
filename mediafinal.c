#include <stdio.h>

int main() {

    float nota1, nota2, media;

    printf ("Inserir a nota da primeira prova: \n");
    scanf ("%f", &nota1);

    sleep(2);

    printf ("Inserir a nota da segunda prova: \n");
    scanf ("%f", &nota2);

    media = (nota1+nota2)/2.0;

    printf("A media final apos realizacao das provas eh de: %.2f\n", media);

return 0;

}