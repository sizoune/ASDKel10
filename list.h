#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstring>

#define nil NULL
#define First(L) ((L).First)
#define Last(L) ((L).Last)
#define Next(P) (P)->next
#define Info(P) (P)->info
#define Prev(P) (P)->prev

using namespace std;

struct infotype
{
    char id[10];
    char nm[25];
    char jb[15];
    char um[10];
    char hb[18];
};

typedef struct elemenList *address;
struct elemenList
{
    infotype info;
    address next,prev;
};

struct List
{
    address First,Last;
};

void createList(List *L);

address alokasi(infotype x);
void dealokasi(address *p);

void insertFirst(List *L, address p);
void insertLast(List *L, address p);

void deleteFirst(List *L, address *p);
void deleteLast(List *L, address *p);

address findElm(List L, infotype p);
void printinfo (List L);

#endif // LIST_H_INCLUDED
