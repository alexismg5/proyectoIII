#include <stdio.h>

int pedirEntero (void)
{
    int x;

    printf ("Da un valor numérico entero:\n");
    scanf ("%d", &x);

    return x;
}

void imprimeEntero (int x)
{
    printf ("%d\n", x);
}

int main ()
{
    imprimeEntero (pedirEntero ());

    return 0;
}