#include <stdio.h>
#define PI 3.1415926
#include <math.h>

const float cambio = 1.33250;

int main()
{
    /*Ejercicio 1: Cálculo de precios con descuento
    Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te
    diga el precio con descuento. Por ejemplo, si el precio que introduce el usuario es 300 y
    el descuento 20, el programa dirá que el precio final con descuento es de 240.*/

    float precio = 0, descuento = 0, precio_final = 0;

    printf("Introduce el precio.\n");
    scanf("%f", &precio);

    printf("Introduce el descuento.\n");
    scanf("%f", &descuento);

    precio_final = precio - ((precio * descuento)/100);
    printf("El precio con el descuento queda en %.2f.\n", precio_final);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 2: Cálculo de área y perímetro
    Escribe un programa que pregunte al usuario los dos lados de un rectángulo y
    presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por
    altura).*/

    float lado1, lado2, area, perimetro;

    printf("Introduce un lado del rectangulo.\n");
    scanf("%f", &lado1);

    printf("Introduce el otro lado del rectangulo.\n");
    scanf("%f", &lado2);

    perimetro = (lado1 * 2) + (lado2 *2 );
    area = lado1 * lado2;

    printf("El rectangulo tiene %.2f de perimetro y %.2f de area.\n", perimetro, area);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 3: Cambio de dólares a euros.
    Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
    usuario un número de dólares y calcule el cambio en euros.*/

    float dolar, euro;

    printf("Introduce una cantidad en dolares.\n");
    scanf("%f", &dolar);

    euro = dolar / cambio;

    printf("%.2f dolares son %.2f euros.\n", dolar, euro);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 4: Cálculo de perímetro de circunferencia, área del
    círculo, y volumen de la esfera.
    Suponiendo que pi = 3.1416. Escribe un programa que pida al usuario que introduzca el
    radio, y presente por pantalla el cálculo del perímetro de la circunferencia (2*pi*r), el
    área del círculo (pi*r 2 ), y el volumen de la esfera (V = 4*pi*r 3 /3).*/

    float perimetro2, area2, volumen, radio;

    printf("Dame el radio.\n");
    scanf("%f", &radio);

    area2 = PI * (radio * radio);
    perimetro2 = PI * (radio * 2);
    volumen = (4  * PI * (radio * radio * radio)) / 3;

    printf("El area del circulo es %.2f.\n", area2);
    printf("El perimetro del circulo es %.2f.\n", perimetro2);
    printf("El volumen de la esfera es %.2f.\n", volumen);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 5: Pasar de días, horas y minutos a segundos.
    Escribe un programa que pida al usuario los siguientes datos: días, horas y minutos. Y le
    conteste con la cantidad de segundos totales que son esos datos.*/


    int dia_p, hora_p, minuto_p, horas, minutos, segundos;

    printf("Introduce el numero de dias.\n");
    scanf("%d", &dia_p);
    printf("Introduce el numero de horas.\n");
    scanf("%d", &hora_p);
    printf("Introduce el numero de minutos.\n");
    scanf("%d", &minuto_p);

    horas = dia_p * 24;  //paso los dias a horas

    minutos = (hora_p + horas) * 60;  //a las horas le sumo el resultado de pasar dias a horas y luego lo paso a minutos

    segundos = (minuto_p + minutos) * 60;  // a los minutos le sumo el resultado de pasar horas a minutos y luego lo paso a segundos

    printf("Nos da un total de %d segundos.\n", segundos);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 6: Pasar de segundos a días, horas y minutos.
    Escribe un programa que pida al usuario que introduzca los segundos, y le conteste
    diciéndole el número de días, horas, minutos y segundos que son.*/

    int segundos_p, segundos, minutos, horas, dias;

    printf("Introduce los segundos.\n");
    scanf("%d", &segundos_p);

    minutos = segundos_p / 60;  //paso los segundos a minutos
    segundos = segundos_p % 60;  //me quedo con los segundos restantes

    horas = minutos / 60;  //paso los minutos a horas
    minutos = minutos % 60;  // me quedo con los minutos restantes

    dias = horas / 24;  //paso las horas a dias
    horas = horas % 24;  //me quedo con las horas restantes

    printf("Nos da un total de %d dias, %d horas, %d minutos, %d segundos.\n", dias, horas, minutos, segundos);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 7: Solución de la ecuación de segundo grado.
    Escribir un programa que pida por teclado los tres coeficientes (a, b y c) de la ecuación
    ax 2 +bx+c=0 y calcule las dos soluciones suponiendo que ambas serán reales (es decir
    que la raíz queda positiva). Nota: x 1,2 =(a±sqrt(b 2 -4ac))/2, sqrt es una función que
    devuelve la raíz cuadrada, para poder invocarla es necesario poner en la cabecera del
    programa: #include <math.h>*/

    int a, b, c, x1, x2;

    printf("Introduce el coeficiente de segundo grado 'a'.\n");
    scanf("%d", &a);
    printf("Introduce el coeficiente de primer grado 'b'.\n");
    scanf("%d", &b);
    printf("Introduce el coeficiente independiente 'c'.\n");
    scanf("%d", &c);

    if(a != 0)
    {
       x1 = (-b + sqrt(b^2-4*a*c)) / (2*a);
       x2 = (-b - sqrt(b^2-4*a*c)) / (2*a);

       printf("las raices son %d y %d", x1, x2);
    }

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 8: Cálculo de la resistencia equivalente.
    Escribir un programa que pida por teclado dos resistencias y calcule y presente la
    resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)).*/

    float r1, r2, Req;


    printf("Introduce la primera resistencia.\n");
    scanf("%f", &r1);
    printf("Introduce la segunda resistencia.\n");
    scanf("%f", &r2);

    Req = (r1*r2)/(r1+r2);
    printf("La resistencia requerida es %f.\n", Req);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 9: Media de cuatro números.

    Escribir un programa que pida por teclado cuatro números y calcule y presente la media
    de los cuatro.*/

    float n1, n2, n3, n4, media;

    printf("Introduce el primer numero.\n");
    scanf("%f", &n1);
    printf("Introduce el segundo numero.\n");
    scanf("%f", &n2);
    printf("Introduce el tercer numero.\n");
    scanf("%f", &n3);
    printf("Introduce el cuarto numero.\n");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/2;

    printf("la media de %.2f, %.2f, %.2f y %.2f es: %.2f.\n", n1, n2, n3, n4, media);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 10: ¿Qué imprime?.
    ¿Qué imprime el siguiente fragmento de código? Compruébalo.*/

    int x = 2, y = 6, z = 4;

    y = y + 4 * z;  // y = 6 + (4 * 4) -> y = 22 (aqui primero se hace la multiplicacion y luego la suma)
    y += x;         // y = 22 + 2 -> y = 24

    printf("%d",y);

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 11: ¿Qué imprime?.
    ¿Qué imprime el siguiente fragmento de código? Compruébalo.*/

    int x = 2, y = 6, z = 4;

    if(x > y || x < z)  //se cumple una de las 2 condiciones asi q saldra verdadero
    {
        printf("verdadero");
    }
    else
    {
        printf("falso");
    }

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 12: ¿Qué imprime?.
    ¿Qué imprime el siguiente fragmento de código? Compruébalo.*/

    int x = 2, y = 6;

    if(x < y && x == y)  //solo se cumple una de las 2 condiciones asi que saldra falso
    {
        printf("verdadero");
    }
    else
    {
        printf("falso");
    }

    //-----------------------------------------------------------------------------------------------------

    /*Ejercicio 13: ¿Qué imprime?.
    ¿Qué imprime el siguiente fragmento de código? Compruébalo.*/

    int x = 2, y = 6;

    if((x < y && x != y) || !(x == y))  //se cumplen las 2 condiciones del && y se cumple una condicion del || asi que saldra verdadero
    {
       printf("verdadero");
    }
    else
    {
       printf("falso");
    }
}
