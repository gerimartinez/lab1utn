void main()
{
    float numero1, numero2;
    float resultado = 0;
    int opcion;
    int cantidadOperaciones = 0;

    //numero deben ser positivos(es decir mayores que cero)

    // validacion con while
    printf("Ingresa primer numero:\n");
    scanf("%f", &numero1);
    while (numero1 <= 0)
    {
        printf("Nro invalido\n");
        printf("Ingresa primer numero:\n");
        scanf("%f", &numero1);
    }

    // validacion con do-while
    do
    {
        printf("Ingresa segundo numero:\n");
        scanf("%f", &numero2);
        if (numero2 <= 0)
        {
            printf("Nro invalido\n");
        }
    } while (numero2 <= 0);
    do
    {
        printf("1. Informar su suma\n");
        printf("2. Informar su resta\n");
        printf("3. Informar su multiplicaci%cn\n", 162);
        printf("4. Informar su divisi%cn\n", 162);
        printf("5. Informar cantidad de operaciones realizadas\n");
        printf("6. Salir\n");
        printf("Seleccione una operaci%cn:\n", 162);
        scanf("%d", &opcion);
        // valido primero que el numero sea distinto de 6
        if (opcion != 6)
        {
            switch (opcion)
            {
            case 1:
                resultado = numero1 + numero2;
                printf("La suma es: %.2f\n", resultado);
                cantidadOperaciones++;
                break;
            case 2:
                resultado = numero1 - numero2;
                printf("La resta es: %.2f\n", resultado);
                cantidadOperaciones++;
                break;
            case 3:
                printf("La multiplicaci%cn es: %.2f\n", 162, numero1 * numero2);
                cantidadOperaciones++;
                break;
            case 4:
                printf("La divisi%cn es: %.2f\n", 162, numero1 / numero2);
                cantidadOperaciones++;
                break;
                case 5:
                printf("La cantidad de operaciones es: %i\n", cantidadOperaciones);
                break;
            default:
                printf("La opci%cn ingresada es incorrecta.\n", 162);
                break;
            }
        }
    } while (opcion != 6);
}