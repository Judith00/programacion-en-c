#include <stdio.h>

int main()
{
    /*Con respecto al ejercicio 1 anterior crear un programa en el que nos de un
    resultado según el número de incidencias que haya en la empresa. Si hay de 0-10
    por mes que ponga una explicación del éxito obtenido, si hay de 11-30 al mes que
    ponga otro mensaje y si hay más de 30 que ponga un mensaje de mejora.*/

    int incidencias;

    printf("Indica el numero de incidencias.\n");
    scanf("%d", &incidencias);

    if(incidencias == 0)
    {
        system("color A");
        printf("Todo perfecto, ninguna incidencia");
    }
    else if(incidencias > 0 && incidencias <= 10)
    {
        system("color 02F");
        printf("Nivel de alerta Bajo");
    }
    else if(incidencias >=11 && incidencias <=30)
    {
        system("color 06F");
        printf("Nivel de alerta Medio");
    }
    else if(incidencias > 30)
    {
        system("color 04F");
        printf("Nivel de alerta Alto");
    }

    //-----------------------------------------------------------------------------------------------------

    /*Con respecto al ejercicio 2 vamos a crear un ejercicio con switch en el que habrá
    un menú con tres dispositivos de almacenamiento. Dependiendo de cual escojamos pondremos
    los usuarios que pueden utilizarlo.*/

    int opcion;

    do
    {
        printf("\n*** MENU ***\n");
        printf("** 1- Disco estado solido **\n");
        printf("** 2- USB **\n");
        printf("** 3- Virtual **\n");
        printf("** 4- Salir **\n");
        printf("\n");
        printf("Elige una opcion.\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Empleados autorizados para usar el disco de estado sólido: Mazinger-Z.\n");
                break;
            case 2:
                printf("Empleados autorizados para usar el USB: Himan, Skeletor.\n");
                break;
            case 3:
                printf("Empleados autorizados para usar el almacenamiento virtual: Gargamel.\n");
                break;
            case 4:
                printf("Hasta luego cocodrilo!.\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
    }
    while(opcion < 4 && opcion != 4);

    //-----------------------------------------------------------------------------------------------------

    /*Con respecto al ejercicio 3 vamos a crear un menú en el que podremos elegir si
    queremos visualizar la carta de los empleados o de los clientes y nos la mostrará*/

    int opcion;

    do
    {
        printf("\n*** MENU ***\n");
        printf("** 1- Carta de los empleados **\n");
        printf("** 2- Carta de los clientes **\n");
        printf("** 3- Salir **\n");
        printf("\n");
        printf("Elige una opcion.\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Aqui se mostrara la carta de los empleados.\n");
                break;
            case 2:
                printf("Aqui se mostrara la carta de los clientes.\n");
                break;
            case 3:
                printf("Hasta luego cocodrilo!.\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
    }
    while(opcion < 3 && opcion != 3);
}
