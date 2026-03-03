#include "../include/functions.h"

#include <stdlib.h>
#include <string.h>
Item* CreateInventory(int size) { return (Item*)malloc(size * sizeof(Item)); }

void AddItem(Item* inv, int index, char* name, float price, int quantity) {
  // char* strncpy(char* dest, const char* src, size_t n);
  // copies source to destination buffer
  strncpy(inv[index].name, name, 49);
  inv[index].name[49] = '\0';
  inv[index].price = price;
  inv[index].quantity = quantity;
}

float CalculateTotalValue(Item* inv, int size) {
  float total = 0.0f;
  for (int i = 0; i < size; i++) {
    total += inv[i].price * inv[i].quantity;
  }
  return total;
}
