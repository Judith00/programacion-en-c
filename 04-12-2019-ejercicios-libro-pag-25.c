#include <stdio.h>
#define PI 3.1415926

int main()
{
    /*Ejercicio 1 -> Haz un programa que nos indique si un número es par o impar.*/

    int num;

    printf("Introduce un numero.\n");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("%d es par.\n", num);
    }
    else
    {
        printf("%d es impar.\n", num);
    }

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 2 -> Programa que nos identifique si una letra es vocal o consonante.*/

    char letra;

    printf("Introduce una letra.\n");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("La letra %c es una vocal", letra);
    }
    else
    {
        printf("La letra %c es una consonante", letra);
    }


    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 3 -> Crea un programa que intercambie el valor de 2 variables.*/

    int a, b, c;

    printf("Introduce el valor de a.\n");
    scanf("%d", &a);
    printf("Introduce el valor de b.\n");
    scanf("%d", &b);

    printf("El valor de a es %d y el valor de b es %d.\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("El valor de a es %d y el valor de b es %d.\n", a, b);


    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 4 -> Programa que ordene 3 números enteros.*/

    int num1, num2, num3, menor, medio, mayor;

    printf("Introduce el primer numero entero.\n");
    scanf("%d", &num1);
    printf("Introduce el segundo numero entero.\n");
    scanf("%d", &num2);
    printf("Introduce el tercer numero entero.\n");
    scanf("%d", &num3);

    if(num1 < num2 && num1 < num3)
    {
        menor = num1;

        if(num2 < num3)
        {
            medio = num2;
            mayor = num3;
        }
        else
        {
            medio = num3;
            mayor = num2;
        }
    }
    else if(num2 < num1 && num2 < num3)
    {
        menor = num2;

        if(num1 < num3)
        {
            medio = num1;
            mayor = num3;
        }
        else
        {
            medio = num3;
            mayor = num1;
        }
    }
    else
    {
        menor = num3;

        if (num1 < num2)
        {
            medio = num1;
            mayor = num2;
        }
        else
        {
            medio = num2;
            mayor = num1;
        }
    }

    printf("Los numeros introducidos ordenados de menor a mayor son: %d, %d y %d.\n", menor, medio, mayor);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 5 -> Programa que calcule áreas de distintas figuras: -Cuadrado, rectángulo, triángulo,
    circunferencia y cilindro (pista: se calcula sumando el área de las 2 bases y después
    la de el contorno que si lo extendemos es un rectángulo).*/

    int menu, lado, lado2, base, altura, radio;
    float area;

    do
    {
        printf("\n*** MENU ***\n");
        printf("** 1- Cuadrado **\n");
        printf("** 2- Rectangulo **\n");
        printf("** 3- Triangulo **\n");
        printf("** 4- Circunferencia **\n");
        printf("** 5- Cilindro **\n");
        printf("** 6- Salir **\n");
        printf("\n");
        printf("Elige una opcion.\n");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                printf("Introduce el valor del lado del cuadrado.\n");
                scanf("%d", &lado);

                area = lado * lado;

                printf("El area del cuadrado es: %.2f.\n", area);
                break;

            case 2:
                printf("Introduce el valor del primer lado del rectangulo.\n");
                scanf("%d", &lado);
                printf("Introduce el valor del segundo lado del rectangulo.\n");
                scanf("%d", &lado2);

                area = lado * lado2;

                printf("El area del rectangulo es: %.2f.\n", area);
                break;

            case 3:
                printf("Introduce el valor de la base del triangulo.\n");
                scanf("%d", &base);
                printf("Introduce el valor de la altura del triangulo.\n");
                scanf("%d", &altura);

                area = (base * altura)/2;

                printf("El area del triangulo es: %.2f.\n", area);
                break;

            case 4:
                printf("Introduce el valor del radio de la circunferencia.\n");
                scanf("%d", &radio);

                area = PI * (radio * radio);

                printf("El area de la circunferencia es: %.2f.\n", area);
                break;

            case 5:
                printf("Introduce el valor del radio del cilindro.\n");
                scanf("%d", &radio);
                printf("Introduce el valor de la altura del cilindro.\n");
                scanf("%d", &altura);

                area = 2 * PI * radio * (radio + altura);

                printf("El area del cilindro es: %.2f.\n", area);
                break;

            case 6:
                printf("Adios.\n");
                break;

            default:
                printf("Numero no valido.\n");
                break;
        }
    }
    while(menu < 6 && menu !=6);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 6 -> Haz un programa parecido al número 1 que nos indique si un número es par o impar,
    y en caso de ser par si además es divisible entre 4.*/

    int num, resto;

    printf("Introduce un numero.\n");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("%d es par.\n", num);

        resto = num%4;

        if (resto == 0)
        {
            printf("%d es multiplo entre 4.\n", num);
        }
        else
        {
            printf("%d NO es multiplo entre 4.\n", num);
        }
    }
    else
    {
        printf("%d es impar.\n", num);
    }


    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 7 -> Un año es bisiesto si es divisible entre 4 excepto si es divisible entre 100, aunque los
    años divisibles entre 400 también son bisiestos. Crea un programa que te indique si
    un año es bisiesto o no.*/

    int anho;

    printf("introduce los 4 digitos de un anho.\n");
    scanf("%d", &anho);

    if((anho % 4 == 0 && anho % 100 != 0) || anho % 400 == 0)
    {
        printf("El anho %d es bisiesto.\n", anho);
    }
    else
    {
        printf("El anho %d NO es bisiesto.\n", anho);
    }

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 8 -> Programa una €uro calculadora. La €uro calculadora nos mostrará un menú en el que
    indicaremos si queremos pasar de €uros a Ptas o viceversa. (Nota: Cuando quieras
    imprimir un número concreto de decimales puedes especificarlo de esta forma: %.2f)*/

    int menu;
    float euro, peseta;

    do
    {
        printf("\n*** MENU ***\n");
        printf("** 1- Pasar euros a pesetas **\n");
        printf("** 2- Pasar pesetas a euros **\n");
        printf("** 3- Salir **\n");
        printf("\n");
        printf("Elige una opcion.\n");
        scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                printf("Introduce una cantidad en euros.\n");
                scanf("%f", &euro);

                peseta = euro * 166.386;

                printf("%.2f euros son %.2f pesetas.\n", euro, peseta);
                break;

            case 2:
                printf("Introduce una cantidad en pesetas.\n");
                scanf("%f", &peseta);

                euro = peseta / 166.386;

                printf("%.2f pesetas son %.2f euros.\n", peseta, euro);
                break;

            case 3:
                printf("Adios.\n");
                break;

            default:
                printf("Numero no valido.\n");
                break;
        }
    }
    while(menu < 3 && menu != 3);
}
