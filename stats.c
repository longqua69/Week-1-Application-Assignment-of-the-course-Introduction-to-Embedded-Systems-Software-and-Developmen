/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> stats.c
 * @brief <Add Brief Description Here >
 * The 1st assignment
 * <Add Extended Description Here>
 * This program statistics to the command line using a variety of c-programming operators and features
 * @author <Add FirsName LastName> Anh Tran
 * @date <Add date > Dec 21st 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_array(unsigned char *ptr);
void sort_array(unsigned char *ptr);
void print_statistics(unsigned char *ptr);
unsigned char find_median(unsigned char *ptr, unsigned int len);
unsigned char find_minimum(unsigned char *ptr, unsigned int len);
unsigned char find_maximum(unsigned char *ptr, unsigned int len);
unsigned char find_mean(unsigned char *ptr, unsigned int len);
unsigned char val;
unsigned char *p;

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

unsigned char find_maximum(unsigned char *ptr, unsigned int len) {
 unsigned char max = *ptr; // Initial value of max = test[0]
 unsigned int i;

 // Return 0 if pointer points to NULL
 if (ptr == NULL){
  return 0;
 }

 if (len <= 0){
  len = 1;
 }

 // Find the maximum value by assigning the greater to variable max 
 for (i = 0; i <= len; i++){
  if (max < *(ptr+i)){
   max = *(ptr+i);
  }
 }
 return max;
}
