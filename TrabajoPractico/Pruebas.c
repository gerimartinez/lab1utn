#include <stdio.h>
#include <string.h>

int banderaCliente;

// Definición de la estructura Cliente
struct Cliente
{
    int numeroCuenta;
    char contrasena[20];
    char nombre[50];
    float saldo;
    char estado[10];
    int intentosFallidos;
    int operacionesRealizadas;
};

// Función para validar el inicio de sesión
int validarInicioSesion(struct Cliente clientes[], int numeroCuenta, char contrasena[])
{
    for (int i = 0; i < 10; i++)
    {
        if (clientes[i].numeroCuenta == numeroCuenta)
        {
            banderaCliente = i;
            if (strcmp(clientes[i].contrasena, contrasena) == 0)
            {
                if (strcmp(clientes[i].estado, "Activo") == 0)
                {
                    return i; // Retorna el índice del cliente en el arreglo
                }
                else
                {
                    return -1; // Cuenta bloqueada
                }
            }
            else
            {
                return -2; // Contraseña incorrecta
            }
        }
    }
    return -3; // Número de cuenta incorrecto
}

// Función para realizar un depósito
void realizarDeposito(struct Cliente *cliente, float monto)
{
    cliente->saldo += monto;
    printf("\nDep%csito realizado. Nuevo saldo: %.2f\n", 162, cliente->saldo);
    cliente[banderaCliente].operacionesRealizadas--;
}

// Función para realizar una extracción
void realizarExtraccion(struct Cliente *cliente, float monto)
{
    if (monto <= cliente->saldo)
    {
        cliente->saldo -= monto;
        printf("\nExtracci%cn realizada. Nuevo saldo: %.2f\n", 162, cliente->saldo);
        cliente[banderaCliente].operacionesRealizadas--;
    }
    else
    {
        printf("\nSaldo insuficiente\n");
    }
}

// Función para mostrar el menú de opciones
void mostrarMenu()
{
    printf("\nMen%c de opciones:\n", 163);
    printf("1. Consultar saldo\n");
    printf("2. Realizar dep%csito\n", 162);
    printf("3. Realizar extracci%cn\n", 162);
    printf("4. Realizar una Transferencia entre Cuentas.\n");
    printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual.\n");
    printf("6. Salir de la Sesi%cn.\n", 162);
}

void main()
{
    // Inicialización de clientes
    struct Cliente clientes[10] = 
    {
        {100, "pass1", "Lautaro Bridera", 11500.0, "Activo"},
        {200, "pass2", "Lorenzo Piatti", 22543.0, "Activo"},
        {300, "pass3", "Delfi Marmirolli", 34896.0, "Activo"},
        {400, "pass4", "Geraldine Martinez", 26856.0, "Activo"},
        {500, "pass5", "Rodrigo De Paul", 48961.0, "Activo"},
        {600, "pass6", "Julian Alvarez", 1203654.0, "Activo"},
        {700, "pass7", "Diego Maradona", 65432.0, "Activo"},
        {800, "pass8", "Lionel Messi", 85465.0, "Activo"},
        {900, "pass9", "Emiliano Martinez", 23145.0, "Activo"},
        {999, "pass99", "Enzo Fernandez", 35461.0, "Activo"},
    };
    
    int numeroCuenta, i;
    char contrasena[20];

    for (i = 0; i < 10; i++)
    {
        clientes[i].intentosFallidos = 3;
    }

    while (1)
    {
        printf("\nBienvenido al cajero autom%ctico\n", 160);
        printf("\nIngrese su n%cmero de cuenta: \n", 163);
        scanf("%d", &numeroCuenta);
        printf("\nIngrese su contrase%ca: \n", 164);
        scanf("%s", &contrasena);

        int indiceCliente = validarInicioSesion(clientes, numeroCuenta, contrasena);
        if (indiceCliente >= 0)
        {
            clientes[banderaCliente].operacionesRealizadas = 10;
            clientes[banderaCliente].intentosFallidos = 3;
            printf("\nInicio de sesi%cn exitoso.\nBienvenido, %s\n", 162, clientes[indiceCliente].nombre);

            int opcion;
            float monto;

            do
            {
                mostrarMenu();
                printf("\nIngrese una opci%cn: \n", 162);
                scanf("%d", &opcion);

                switch (opcion)
                {
                case 1:
                    printf("\nSaldo actual: %.2f\n", clientes[indiceCliente].saldo);
                    break;
                case 2:
                    printf("\nIngrese el monto a depositar: \n");
                    scanf("%f", &monto);
                    realizarDeposito(&clientes[indiceCliente], monto);
                    break;
                case 3:
                    printf("\nIngrese el monto a extraer: \n");
                    scanf("%f", &monto);
                    realizarExtraccion(&clientes[indiceCliente], monto);
                    break;
                case 4:
                    // falta funcion 4. Realizar una Transferencia entre Cuentas.
                    break;
                case 5:
                    // falta funcion 5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual.
                    
                    break;
                case 6:
                    printf("\nSaliendo del cajero autom%ctico. Gracias por utilizar nuestros servicios.\n", 160);
                    break;
                default:
                    printf("\nOpci%cn no v%clida\n", 162, 160);
                    break;
                }
            } while (opcion != 6);
        }
        else if (indiceCliente == -1)
        {
            printf("\nSu cuenta est%c bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
        }
        else if (indiceCliente == -2)
        {
            clientes[banderaCliente].intentosFallidos = clientes[banderaCliente].intentosFallidos - 1;
            printf("\nContrase%ca incorrecta. Le quedan %d intentos.\n", 164, clientes[banderaCliente].intentosFallidos);
            if (clientes[banderaCliente].intentosFallidos == 0)
            {
                printf("\nNo se permiten m%cs intentos. Su cuenta ha sido bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
                strcpy(clientes[banderaCliente].estado, "Bloqueado");
            }
            
        }
        else if (indiceCliente == -3)
        {
            printf("\nN%cmero de cuenta incorrecto.\n", 163);
        }
    }
}