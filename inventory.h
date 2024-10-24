#ifndef INVENTORY_H
#define INVENTORY_H

typedef struct {
    int id;
    char name[100];
    float price;
    int quantity;
} Product;

void addProduct(Product* products, int* productCount);
void listProducts(Product* products, int productCount);

#endif
