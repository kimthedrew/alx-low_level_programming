#include <stdlib.h>
#include <stdio.h>

#ifdef MAIN_H
#define MAIN_H

/* function prototype */
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
int print_hello(void);
int print_name(char *name);
int print_array(int *arr, int size);

/* prototype for _putchar function */
int _putchar(char c);

#endif /* MAIN_H */
