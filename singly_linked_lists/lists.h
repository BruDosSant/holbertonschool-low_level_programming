#ifndef MAIN_H
#define MAIN_H
#include<stddef.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct list_s - structura de un nodulo?
 * @str: string dentro del noduuloo
 * @len: largo del string
 * @next: pointer hacia el siguiente nodulo
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* MAIN_H */