#pragma once
/** @file sort.h
 *  @brief used with both letters and numbers
 */

#ifndef ARRAYSIZE
#define ARRAYSIZE 4 /**/
#endif

/**
 * @brief Check if the pair has to be swapped or not
 *
 * @note
 * @return true or false
 */
bool bubble_sort(char arr[], bool (*pair_is_in_order)(char a, char b));

/**
 * @brief Checks if 2 characters are in order, used in pair_is_in_order
 *
 * @note only letters
 * @return true or false
 */
bool letters_in_order(char a, char b);

/**
 * @brief Checks if 2 characters are in order, used in pair_is_in_order
 *
 * @note only numbers
 * @return true or false
 */
bool numbers_in_order(char a, char b);

/**
 * @brief Swaps 2 chars in the same array
 *
 * @note
 * @return
 */

void swap(char arr[], int first, int second);
