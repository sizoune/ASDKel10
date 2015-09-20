#include "list.h"


using namespace std;

int main()
{
    address p,prec,q = nil;
    infotype x;
    list l;
    string tes;
    int pil,pil1;

    createlist(&l);

    inputdata(&x);
    p = alokasi(x);
    insertfirst(&l,p);

    cout<<endl;
    inputdata(&x);
    p = alokasi(x);
    insertlast(&l,p);

    viewlist(l);

    cout<<endl;
    cout<<endl;
    strcpy(x.id,"x01");
    p = searchelement(l,x);
    cout<<info(p).nama<<endl;

    deletefirst(&l,&p);
    cout<<endl;
    viewlist(l);

    cout<<endl;
    strcpy(x.id,"x01");
    q = searchelement(l,x);
    cout<<endl;
    cout<<endl;
    if (q == nil)
    {
        cout<<"NULL"<<endl;
    }
    else
    {
        cout<<q;
    }


    getch();
    return 0;
