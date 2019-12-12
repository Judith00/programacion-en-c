#include <stdio.h>
#define PI 3.1415926

int main()
{
    /* Pasar km/h a m/s */

    int velocidad;
    float resultado;

    printf("Dime una velocidad en km/h.\n");
    scanf("%i", &velocidad);

    resultado = velocidad/3.6;

    printf("Esta es la velocidad pasada a m/s %.2f", resultado);  //%.2f Hace q solo se muestren 2 decimales

    //------------------------------------------------------------------------------------------------------

    /* Crea un programa que calcule el resto de 2 números, otro que calcule la suma, otro la
        resta, multiplicación y división (5 programas). */

    int num, num2, resto, resultado2;

    printf("\nDame un numero.\n");
    scanf("%i", &num);
    printf("Dame otro numero.\n");
    scanf("%i", &num2);

    resultado2 = num + num2;
    printf("Esta la suma de los 2 numeros %d.\n", resultado2);

    resultado2 = num - num2;
    printf("Esta es la resta de los 2 numeros %d.\n", resultado2);

    resultado2 = num * num2;
    printf("Esta es la multiplicacion de los 2 numeros %d.\n", resultado2);

    resultado2 = num / num2;
    resto = num % num2;
    printf("Esta es la division de los 2 numeros %d.\n", resultado2);
    printf("Este es el resto de la division de los 2 numeros %d.\n", resto);

    //-------------------------------------------------------------------------------------------------------

    /*Crea un programa que calcule el área y perímetro de un cuadrado, otro la del
        triángulo y otro la de la circunferencia. Para definir el número PI puedes escribir antes
        de la función main #define PI 3.1415926*/

        float base, altura, area, perimetro, radio;

        printf("Dame la base.\n");
        scanf("%f", &base);

        area = base * base;
        perimetro = base *4;
        printf("El area del cuadrado es %.2f.\n", area);
        printf("El perimetro del cuadrado es %.2f.\n", perimetro);

        printf("Dame la altura.\n");
        scanf("%f", &altura);

        area = (base * altura)/2;
        perimetro = base *3;
        printf("El area del triangulo es %.2f.\n", area);
        printf("El perimetro del triangulo es %.2f.\n", perimetro);

        printf("Dame el radio.\n");
        scanf("%f", &radio);

        area = PI * (radio * radio);
        perimetro = PI * (radio * 2);
        printf("El area del circulo es %.2f.\n", area);
        printf("El perimetro del circulo es %.2f.\n", perimetro);
}
