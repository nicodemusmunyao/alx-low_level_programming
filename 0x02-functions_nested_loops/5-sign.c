/*
 * File: 5-sign.c
 * Auth: Samuel Kioko
 */
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number of which the sign will be printed.
 *
 * Return: Returns 1 and prints + if n>0,
 * Returns 0 and prints 0 if n=0,
 * Returns -1 and prints - if n<0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
