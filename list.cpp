#include "list.h"


using namespace std;

void createList(List &L)
{
    First(L) = nil;
    Last(L) = nil;
}

address alokasi(infotype x)
{
    address P = new elemenList;
    Info(P) = x;
    Next(P) = nil;
    Prev(P) = nil;
    return P;
}

void dealokasi(address &P)
{
    delete P;
}

void insertFirst(List &L, address P)
{
    if (First(L) == nil)
    {
        First(L) = P;
        Last(L) = P;
    }
    else
    {
        Next(P) = First(L);
        Prev(First(L)) = P;
        First(L) = P;
    }
}

void insertLast(List &L, address P)
{
    if (First(L) == nil)
    {
        First(L) = P;
        Last(L) = P;
    }
    else
    {
        Next(Last(L)) = P;
        Prev(P) = Last(L);
        Last(L) = P;
    }
}

void deleteFirst(List &L, address &P)
{
    if (First(L) == nil)
    {
        cout<<"List Masih Kosong";
    }
    else if (First(L) == Last(L))
    {
        P = First(L);
        First(L) = nil;
        Last(L) = nil;
    }
    else
    {
        P = First(L);
        First(L) = Next(P);
        Prev(First(L)) = nil;
        Next(P) = nil;
    }
}

void deleteLast(List &L, address &P)
{
    if (First(L) == nil)
    {
        cout<<"List Masih Kosong";
    }
    else if (First(L) == Last(L))
    {
        P = First(L);
        First(L) = nil;
        Last(L) = nil;
    }
    else
    {
        P = Last(L);
        Last(L) = Prev(P);
        Next(Last(L)) = nil;
        Prev(P) = nil;
    }
}


address findElm(List L, infotype x)
{
    address bantu = First(L);

    do
    {
        if (strcmp(Info(bantu).id,x.id) == 0)
        {
            return bantu;
            break;
        }
        bantu = Next(bantu);
    }
    while (bantu != Last(L));
    return nil;
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
            cout<<"\nID      : "<<Info(bantu).id<<endl
                <<"Nama    : "<<Info(bantu).nama<<endl
                <<"Jabatan : "<<Info(bantu).jab<<endl
                <<"Umur    : "<<Info(bantu).umur<<endl
                <<"Hobi    : "<<Info(bantu).hobi<<endl;
            bantu = Next(bantu);
        }
        while (bantu != nil);
    }
}
