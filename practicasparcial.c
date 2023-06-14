/*Ejercicio Integrador 1
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.*/
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int pasajeros, vehiculo, hora, rta;
    float tarifa;

    do
    {
        printf("\ningrese el tipo de vehiculo.(1 = auto, 2 = moto, 3 = camion)\n");
        scanf("%d", &vehiculo);
        while (vehiculo != 1 && vehiculo != 2 && vehiculo != 3)
        {
            printf("\nError. Debe ingresar 1, 2 o 3 unicamente.\n");
            printf("\ningrese el tipo de vehiculo.(1 = auto, 2 = moto, 3= camion)\n");
            scanf("%d", &vehiculo);
        }

        printf("\nIngrese la cantidad de pasajeros en el vehiculo: \n");
        scanf("%d", &pasajeros);
        while (pasajeros > 5 || pasajeros < 1)
        {
            printf("\nError. La cantidad de pasajeros no puede ser superior a 5 o menor a 1.\n");
            printf("\nIngrese la cantidad de pasajeros en el vehiculo: \n");
            scanf("%d", pasajeros);
        }

        printf("\ningrese el tipo de horario de congestion. (1 = alta, 2 = baja)\n");
        scanf("%d", &hora);
        while (hora != 1 && hora != 2)
        {
            printf("\nError. Debe ingresar '1' o '2' unicamente.\n");
            printf("\ningrese el tipo de horario de congestion. (1 = alta, 2 = baja)\n");
            scanf("%d", &hora);
        }

        

        if (hora == 1)
        {
            switch (vehiculo)
            {
            case 1:
                if (pasajeros >= 3)
                {
                    tarifa = 0;
                }
                else
                {
                    tarifa = 150;
                }
                break;

            case 2:
                tarifa = 100;
                break;

            default:
                tarifa = 300;
                break;
            }
        }
        else
        {
            switch (vehiculo)
            {
            case 1:
                tarifa = 150;
                break;

            case 2:
                tarifa = 0;
                break;

            default:
                tarifa = 200;
                break;
            }
        }

        printf("\nDebe abonar: %0.2f\n", tarifa);

        printf("\n¿Desea ingresar otro vehiculo?( 1 = si , 2 = no)\n");
        scanf("%d", &rta);
        while (rta != 1 && rta != 2)
        {
            printf("\nError, debe responder unicamente 1 0 2.\n");
            printf("\n¿Desea ingresar otro vehiculo?( 1 = si , 2 = no)\n");
            scanf("%d", &rta);
        }

    } while (rta == 1);

    printf("\nHa elegido finalizar el programa. Hasta luego.\n");
    system("pause");
}