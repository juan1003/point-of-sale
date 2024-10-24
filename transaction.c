#include <stdio.h>
#include "inventory.h"
#include "transaction.h"

void processTransaction(Transaction* transaction, Product* products, int productCount) {
    int productId, quantity;

    printf("Enter product ID: ");
    scanf("%d", &productId);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    int productIndex = -1;
    for(int i = 0; i < productCount; i++) {
        if(products[i].id == productId) {
            productIndex = i;
            break;
        }
    }

    if(productId == -1) {
        printf("Product with ID %d does not exist.\n", productId);
        return;
    }
    
    if(products[productIndex].quantity < quantity) {
        printf("Not enough quantity in stock.\n");
        return;
    }

    transaction->product = products[productIndex];
    transaction->quantity = quantity;
    transaction->totalPrice = quantity * products[productIndex].price;
    transaction->transactionId++;

    products[productIndex].quantity -= quantity;

    printReceipt(transaction);
}

void printReceipt(Transaction* transaction) {
    printf("----- TRANSACTION RECEIPT -----\n");
    printf("Transaction ID %d\n", transaction->transactionId);
    printf("Product: %s\n", transaction->product.name);
    printf("Price per unit: %.2f\n", transaction->product.price);
    printf("Quantity: %d\n", transaction->quantity);
    printf("Total price: %.2f\n", transaction->totalPrice);
    printf("-----------------------------\n\n");
}
