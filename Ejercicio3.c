#include <stdio.h>
#include <stdlib.h>

int main()
{
   float suma=0,numero[3], prom=0, promt=0, max=0;
    int  i, dni=0, x, dnimax=0;
    printf("Primer trimestre \n\n");
    printf("Segundo Push");
    printf("Tercer Push para ver los cambios");
    for(i=0;i<3;i++)
    {

        printf("Ingrese el DNI: \n");
        scanf("%d", & dni);
        suma=0;

        for (x=0; x<3; x++)
        {
            printf("Ingrese sus tres notas: \n");
            scanf("%f", & numero[x]);
            suma+= numero[x];
            prom=suma/3;
            promt+=prom;
        }
            fflush(stdin);

        if(i==0)
            {max=numero[i];
            dnimax=dni;}
        else
            if (max<numero[i])
                {max=numero[i];
                dnimax=dni;
                }
        printf("Su promedio es: %f \n", prom);

    }
    printf("Promedio total del curso: %f\n", promt/39);
    printf("El mayor promedio lo tiene el dni %d con %f\n", dnimax, max);

    return 0;
}
