#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef MAIN_H
#define MAIN_H

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int print_hello(void);
int print_name(char *name);
int print_array(int *arr, int size);
int _putchar(char c);

#endif /* MAIN_H */
