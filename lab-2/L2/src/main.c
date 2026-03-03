#include <stdio.h>
#include <stdlib.h>

#include "../include/functions.h"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Error: Invalid number of arguments.");
    return 1;
  }

  // this represents the amount of distinct items we want to put
  // in inventory, so if 3 that means i wanna put in inventory:
  // x amount of cars, y amount of trucks, z amount of motors
  int amount_item = atoi(argv[1]);

  Item* inventory = CreateInventory(amount_item);

  for (int i = 0; i < amount_item; i++) {
    char name[50];
    float price;
    int quantity;

    if (scanf("%49s %f %d", name, &price, &quantity) != 3) {
      free(inventory);
      return 1;
    }

    AddItem(inventory, i, name, price, quantity);
  }

  printf("Total Inventory Value: %0.2f",
         CalculateTotalValue(inventory, amount_item));

  free(inventory);
  return 0;
}