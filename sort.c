#include "sort.h"
bool letters_in_order(char a, char b) {
  if (a <= b) {
    return true;
  }
  return false;
}

bool numbers_in_order(char a, char b) {
  if (a <= b) {
    return true;
  }
  return false;
}

void swap(char arr[], int first, int second) {
  char first_character = arr[second];
  char second_character = arr[first];
  arr[first] = first_character;
  arr[second] = second_character;
}

bool bubble_sort(char arr[ARRAYSIZE],
                 bool (*pair_is_in_order)(char a, char b)) {
  for (int i = 0; i < ARRAYSIZE - 1; ++i) {
    if (pair_is_in_order(arr[i], arr[i + 1]) == false) {
      return false;
    }
  }
  return true;
}
