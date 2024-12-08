#ifndef LISTS_H
#define LISTS_H
#include<stddef.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct dlistint_s - structura de nodulo dentro de una lista dual
 * @n: valor del nodulo
 * @next: pointer al siguiente nodulo
 * @prev: pointer al nodulo previo
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif /* LISTS_H */
