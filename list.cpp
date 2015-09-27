#include "list.h"

using namespace std;

void createList(List *L)
{
    First(*L) = nil;
    Last(*L) = nil;
}

address alokasi(infotype x)
{
    address P = new elemenList;
    Info(P) = x;
    Next(P) = nil;
    Prev(P) = nil;
    return P;
}

void dealokasi(address *p)
{
    delete *p;
}

void insertFirst(List *L, address p)
{
    if (First(*L) == nil)
    {
        First(*L) = p;
        Last(*L) = p;
    }
    else
    {
        Next(p) = First(*L);
        Prev(First(*L)) = p;
        First(*L) = p;
    }
}

void insertLast(List *L, address p)
{
    if (First(*L) == nil)
    {
        First(*L) = p;
        Last(*L) = p;
    }
    else
    {
        Next(Last(*L)) = p;
        Prev(p) = Last(*L);
        Last(*L) = p;
    }
}


void deleteFirst(List *L, address *p)
{
    if (First(*L) == nil)
    {
        cout<<"List Masih Kosong";
    }
    else if (First(*L) == Last(*L))
    {
        *p = First(*L);
        First(*L) = nil;
        Last(*L) = nil;
    }
    else
    {
        *p = First(*L);
        First(*L) = Next(*p);
        Prev(First(*L)) = nil;
        Next(*p) = nil;
    }
}

void deleteLast(List *L, address *p)
{
    if (First(*L) == nil)
    {
        cout<<"List Masih Kosong";
    }
    else if (First(*L) == Last(*L))
    {
        *p = First(*L);
        First(*L) = nil;
        Last(*L) = nil;
    }
    else
    {
        *p = Last(*L);
        Last(*L) = Prev(*p);
        Next(Last(*L)) = nil;
        Prev(*p) = nil;
    }
}

address findElm(List L, infotype x)
{
    address bantu = First(L);
    int a = 0;

    do
    {
        if (strcmp(Info(bantu).id,x.id) == 0)
        {
            a = 1;
            break;
        }
        bantu = Next(bantu);
    }
    while (bantu != nil);
    if (a == 1)
    {
        return bantu;
    }
    else
    {
        return nil;
    }
}

void printinfo (List L)
{
    address bantu = First(L);

    if (First(L) == nil)
    {
        cout<<"List Kosong";
    }
    else
    {
        do
        {
            cout<<"ID      : "<<Info(bantu).id<<endl;
            cout<<"Nama    : "<<Info(bantu).nm<<endl;
            cout<<"Jabatan : "<<Info(bantu).jb<<endl;
            cout<<"Umur    : "<<Info(bantu).um<<endl;
            cout<<"Hobi    : "<<Info(bantu).hb<<endl;
            cout<<"\n";
            bantu = Next(bantu);
        }
        while (bantu != nil);
    }
}
