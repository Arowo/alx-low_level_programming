#ifndef LISTS_H
#define LISTS_H

/* Structure for singly linked list */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
