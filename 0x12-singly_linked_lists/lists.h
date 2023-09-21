#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
