#include <stdio.h>
#include <stdlib.h>
#include "inventory.h"
#include "transaction.h"

int main()
{
    Product products[109];
    Transaction transaction = {0};
    int productCount = 0;

    int choice;

    do {
        printf("1. Add product\n");
        printf("2. List products\n");
        printf("3. Process transaction\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addProduct(products, &productCount);
                break;
            case 2:
                listProducts(products, productCount);
                break;
            case 3:
                processTransaction(&transaction, products, productCount);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while(choice != 5);

    return 0;
}
