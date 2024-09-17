// Define a structure to hold the product sales information, structure will contain the product_ID and total_sales_amount. 
// 	Write a program that accepts multiple product records (product_ID and total_sales_amount) and prints them in decreasing order of total_sales_amount.
// 	In case there are multiple records pertaining to the same product_id, the program should choose a single record containing the highest total_sales_amount.
// 	Program should take multiple line input.
// 	Each subsequent line of input will contain a Product record, that is, a product_ID and total_sales_amount(separated by a hyphen). 
// 	The output should consist of the combination of product_ID and corresponding total_sales_amount in decreasing order of score.
// Sample Input:
// P1001-200
// P1002-150
// P1003-300
// P1001-100
// P1002-200
// P1003-50
// P1001-50
// P1002-250
// Sample Output:
// P1003-300
// P1002-250
// P1001-200

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100

typedef struct {
    char product_id[10];
    int total_sales_amount;
} ProductSaleInfo;

void sortProducts(ProductSaleInfo products[], int count) {
    // Simple Bubble Sort for demonstration, use a more efficient algorithm for large datasets
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (products[j].total_sales_amount < products[j + 1].total_sales_amount) {
                ProductSaleInfo temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
}

int main() {
    ProductSaleInfo products[MAX_PRODUCTS];
    int count = 0;

    // Read multiple lines of input
    printf("Enter product records (format: product_ID-total_sales_amount). Type 'END' to finish:\n");
    while (1) {
        char input[50];
        fgets(input, sizeof(input), stdin);

        // Remove newline character if present
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "END") == 0) {
            break;
        }

        char product_id[10];
        int total_sales_amount;

        // Parse input
        if (sscanf(input, "%[^-]-%d", product_id, &total_sales_amount) != 2) {
            printf("Invalid input format. Please use 'product_ID-total_sales_amount'.\n");
            continue;
        }

        // Check if the product ID already exists
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(products[i].product_id, product_id) == 0) {
                if (total_sales_amount > products[i].total_sales_amount) {
                    products[i].total_sales_amount = total_sales_amount;
                }
                found = 1;
                break;
            }
        }

        // Add new product record
        if (!found && count < MAX_PRODUCTS) {
            strcpy(products[count].product_id, product_id);
            products[count].total_sales_amount = total_sales_amount;
            count++;
        } else if (!found) {
            printf("Product limit reached.\n");
        }
    }

    // Sort products by total_sales_amount in decreasing order
    sortProducts(products, count);

    // Print the sorted products
    printf("Sorted Product Records:\n");
    for (int i = 0; i < count; i++) {
        printf("%s-%d\n", products[i].product_id, products[i].total_sales_amount);
    }

    return 0;
}




