void main()
{
    // Definir numeroCuenta, contraseñaCliente, nombreCliente, saldoCliente, estadoCliente(bandera)
    // limiteOperaciones = 10
   //Definir nombre de clientes, numeros de cuenta, y contraseñas (10)
    struct Cliente clientes[10];  // Array de clientes
    int numClientes = 10, clienteActual = -1;
    int numeroCuenta, contrasenaCliente, intentos = 3, intentosFallidos = 0, estadoCliente = 1; 
    int opcionMenu, movimientosRealizados = 0, encontrado = 0;
    float montoIngresado, saldoCliente, montoExtraer;
    struct Movimiento movimientos[10];
    // char nombreCliente = "geraldine";
   
    cargarClientes(clientes, numClientes);
    printf("Bienvenido/a \n");
    while (intentosFallidos < intentos)
    {

       if(estadoCliente == 1) { 
            printf("Ingrese su n%cmero de cuenta \n", 163);
            scanf("%d", &numeroCuenta);
            printf("Ingrese su contrase%ca \n", 164);
            scanf("%d", &contrasenaCliente);

            for (int i = 0; i < numClientes; i++)
            {
                if (clientes[i].numeroCuenta == numeroCuenta && clientes[i].contrasenaCliente == contrasenaCliente && clientes[i].estado == 1)
                {
                    printf("Ingreso de sesi%cn exitosa. Bienvenido/a, %s\n", 162, clientes[i].nombreCliente);
                    int clienteActual = i;
                    encontrado = 1;
                    break;
                } else {
                    printf("N%cmero de cuenta o contrase%ca incorrecta. \n",163, 164);
                    clientes[i].intentosFallidos = intentosFallidos + 1;

                    if(intentosFallidos >= intentos)
                    {
                        printf("No se permiten m%cs intentos. Su cuenta esta bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
                    }
                }
            }
            
        }   if(encontrado == 1)
            {
                while ((opcionMenu < 0 && opcionMenu > 6) && movimientosRealizados < 10)
                {
                    printf("1. Realizar un Dep%csito. \n", 162); 
                    printf("2. Realizar una Extracci%cn. \n", 162);
                    printf("3. Consultar el Saldo de la Cuenta. \n");
                    printf("4. Realizar una Transferencia entre Cuentas.\n");
                    printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual. \n");
                    printf("6. Salir de la Sesi%cn. \n", 162);
                    scanf("%d", &opcionMenu);
                }
                switch (opcionMenu)
                {
                    case 1:
                        //funcion ingresar dinero
                        // ingresarDinero(&clientes[clienteActual]);
                    break;
                    case 2:
                        if(movimientosRealizados < 10)
                        {
                            printf("¿Cuanto dinero desea extraer? \n");
                            scanf("%f", &montoExtraer);
                            
                        }

                        if(montoExtraer > 0 && montoExtraer <= saldoCliente)
                        {
                            saldoCliente = saldoCliente - montoExtraer;
                            movimientosRealizados = movimientosRealizados + 1;
                            movimientos[movimientosRealizados].numero = movimientosRealizados + 1;
                            movimientos[movimientosRealizados].importe = -montoIngresado;
                            printf("Extracci%cn exitosa \n", 162);
                            
                        
                        } else if (montoIngresado < 0){
                            printf("Monto no v%clido, la operaci%cn no fue realizada. \n", 160, 162);
                            movimientosRealizados = movimientosRealizados + 1;
                        
                        } else if(montoIngresado > saldoCliente)
                        {
                            printf("El monto ingresado es mayor al dinero en cuenta. \n");
                            movimientosRealizados = movimientosRealizados + 1;

                        } else {
                            printf("Ha alcanzado el límite de operaciones. Gracias. \n", 161);
                        }
                        break;
                    case 3:
                        printf("Saldo: $%.2f\n", saldoCliente);
                        //consulta saldo
                        break;
                    case 4:
                        //realizar transferencia
                        break;
                
                    case 5:
                        //cantidad operaciones
                        printf("Consulta de cantidad de operaciones:\n");
                        printf("Movimientos    Importe\n");
                         for (int i = 0; i < movimientosRealizados; i++) {
                             printf("%d %.2f\n", movimientos[i].numero, movimientos[i].importe);
                        }
                       
                        break;
                    case 6:
                        printf("Hasta luego \n");
                        break;
                 
                    default:
                    printf("Opci%cn inv%clida. Intente nuevamente \n", 162, 160);
                    break;
                }
            }
    }
   
  
   

}

void cargarClientes(struct Cliente clientes[], int numCliente){

    strcpy(clientes[0].nombreCliente, "Geraldine");
    strcpy(clientes[1].nombreCliente, "Delfina");
    strcpy(clientes[2].nombreCliente, "Fernando");
    strcpy(clientes[3].nombreCliente, "Paula");
    strcpy(clientes[4].nombreCliente, "Lautaro");
    strcpy(clientes[5].nombreCliente, "Cristian");
    strcpy(clientes[6].nombreCliente, "Martina");
    strcpy(clientes[7].nombreCliente, "Sofia");
    strcpy(clientes[8].nombreCliente, "Marisa");
    strcpy(clientes[9].nombreCliente, "Bianca");
    


    for (int i = 0; i < numCliente; i++)
    {
        clientes[i].numeroCuenta = 120 + i;
        clientes[i].contrasenaCliente = 1234;
        clientes[i].saldoCliente = 00.00;
        clientes[i].estado = 1;
        clientes[i].intentos = 3;
        clientes[i].intentosFallidos = 0;
        clientes[i].movimientosRealizados = 0;
    }
    
}