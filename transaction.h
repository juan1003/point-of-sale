#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "inventory.h"

typedef struct {
    int transactionId;
    Product product;
    int quantity;
    float totalPrice;; 
} Transaction; 

void processTransaction(Transaction* transaction, Product* products, int productCount);
void printReceipt(Transaction* transaction);

#endif
