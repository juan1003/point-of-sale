#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

void addProduct(Product *products, int* productCount) {
    printf("Enter product name: ");
    scanf("%s", products[*productCount].name);
    printf("Enter product price: ");
    scanf("%f", &products[*productCount].price);
    printf("Enter product quantity: ");
    scanf("%d", &products[*productCount].quantity);

    products[*productCount].id = *productCount + 1;
    (*productCount)++;
    printf("Product added successfully!\n");
}

void listProducts(Product* products, int productCount) {
    printf("ID\tName\tPrice\tQuantity\n");
    for (int i = 0; i < productCount; i++) {
        printf("%d\t%s\t%.2f\t%d\n", products[i].id, products[i].name, products[i].price, products[i].quantity);
    }
}
