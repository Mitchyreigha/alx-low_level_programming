#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *s);
void print_binary(unsigned long int n);
int get_sit(unsigned long int n, unsigned int index);
int set_sit(unsigned long int *n, unsigned int index);
int clear_sit(unsigned long int *n, unsigned int index);
unsigned int flip_sits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endi

