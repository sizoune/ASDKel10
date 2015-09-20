#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <conio.h>


#define nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define first(l) ((l).first)


struct infotype
{
    char id[4];
    char nama[15];
    char warna[25];
    char jenis[10];
    char thnklr[20];
    char namapem[20];
};

typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

void createlist (list *l);
void inputdata (infotype *x);
void dealokasi (address p);
address alokasi (infotype x);

void insertfirst (list *l, address p);
void insertlast (list *l, address p);
void insertafter (list *l, address p, address prec);

void deletefirst (list *l, address *p);
void deletelast (list *l, address *p);
void deleteafter (list *l, address *p, address prec);

address searchelement(list l, infotype x);
void viewlist (list l);


#endif // LIST_H_INCLUDED
