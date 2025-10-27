#include "sort.h"
#include <stdbool.h>
#include <stdio.h>

char letter_arr1[ARRAYSIZE] = {'z', 'S', 's', 'a'};
char number_arr1[ARRAYSIZE] = {4, -1, 2, 9};
int main() {
  bool is_sorted;
  puts("talrækkefølgen før er: ");
  for (int i = 0; i < ARRAYSIZE; ++i) {
    printf("%d ", number_arr1[i]);
  }
  puts("\nbogstavrækkefølgen før er: ");

  for (int i = 0; i < ARRAYSIZE; ++i) {
    printf("%c ", letter_arr1[i]);
  }

  do {
    is_sorted = false;
    for (int i = 0; i < ARRAYSIZE - 1; ++i) {
      if (!bubble_sort(number_arr1, numbers_in_order)) {
        swap(number_arr1, i, i + 1);
        is_sorted = true;
      }

      else if (!bubble_sort(letter_arr1, letters_in_order)) {
        swap(letter_arr1, i, i + 1);
        is_sorted = true;
      }
    }
  } while (is_sorted);

  puts("\ntalrækkefølgen efter er: ");
  for (int i = 0; i < ARRAYSIZE; ++i) {
    printf("%d ", number_arr1[i]);
  }

  puts("\nbogstavrækkefølgen efter er: ");
  for (int i = 0; i < ARRAYSIZE; ++i) {
    printf("%c ", letter_arr1[i]);
  }
}