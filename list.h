#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cstring>

#define nil NULL
#define First(L) ((L).First)
#define Last(L) ((L).Last)
#define Next(P) P->next
#define Info(P) P->info
#define Prev(P) P->prev

using namespace std;

struct infotype
{
    char id[4],nama[20],jab[10],umur[5],hobi[15];
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

void createList(List &);

address alokasi(infotype );
void dealokasi(address &);

void insertFirst(List &, address );
void insertLast(List &, address );

void deleteFirst(List &, address &);
void deleteLast(List &, address &);

address findElm(List, infotype );
void printinfo (List );
#endif // LIST_H_INCLUDED
