#include <stdio.h>
#include "funciones.h"

#define MAX_PRODUCTOS 100

int main() {
    struct Producto inventario[MAX_PRODUCTOS];
    int numProductos = 0;
    int opcion;
    cargarInventario(inventario, &numProductos);

    do {
        printf("\nSistema de inventario de una Tienda Deportiva. BIENVENIDOS\n");
        printf("1) Ingresar producto\n");
        printf("2) Editar producto\n");
        printf("3) Eliminar producto\n");
        printf("4) Listar productos\n");
        printf("5) Salir\n");
        printf(">> ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(inventario, &numProductos);
                break;
            case 2:
                editarProducto(inventario, numProductos);
                break;
            case 3:
                eliminarProducto(inventario, &numProductos);
                break;
            case 4:
                listarProductos(inventario, numProductos);
                break;
            case 5:
                printf("Saliendo del programa...\n");
                guardarInventario(inventario, numProductos);
                break;
            default:
                printf("Error.\n");
                break;
        }
    } while (opcion != 5);

    return 0;
}