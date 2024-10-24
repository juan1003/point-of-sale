#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"

void addProduct(Product *products, int* productCount) {
    printf("Enter product name: ");
    scanf("%s", products[*productCount].name);
    printf("Enter product price: ");
    scanf("%d", &products[*productCount].price);
    printf("Enter product quantity: ");
    scanf("%d", &products[*productCount].quantity);

    products[*productCount].id = *productCount + 1;
    (*productCount)++;
    printf("Product added successfully!\n");
}


