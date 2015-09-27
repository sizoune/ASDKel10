#include "list.h"


using namespace std;

infotype x;
List l;
address p;
int pil;

void inputData ()
{
    cout<<"Masukkan ID : ";
    cin>>x.id;
    cout<<"Masukkan Nama : ";
    cin>>x.nm;
    cout<<"Masukkan Jabatan : ";
    cin>>x.jb;
    cout<<"Masukkan Umur : ";
    cin>>x.um;
    cout<<"Masukkan Hobi : ";
    cin>>x.hb;
}


int main()
{
   createList(&l);
   do
   {
       system("cls");
       cout<<"Program Double Linked List"<<endl
           <<"\n1. Insert First"<<endl
           <<"2. Insert Last"<<endl
           <<"3. Delete First"<<endl
           <<"4. Delete Last"<<endl
           <<"5. View Data"<<endl
           <<"6  Search Data"<<endl
           <<"7. Exit"<<endl;
       cout<<"\nMasukkan Pilihan : ";
       cin>>pil;
       switch (pil)
        {
        case 1:
            system("cls");
            inputData();
            p = alokasi(x);
            insertFirst(&l,p);
            cout<<"Insert First Sukses";
            getch();
            break;
        case 2:
            system("cls");
            inputData();
            p = alokasi(x);
            insertLast(&l,p);
            cout<<"Insert Last Sukses";
            getch();
            break;
        case 3:
            system("cls");
            deleteFirst(&l,&p);
            dealokasi(&p);
            cout<<"Delete Sukses";
            getch();
            break;
        case 4:
            system("cls");
            deleteLast(&l,&p);
            dealokasi(&p);
            cout<<"Delete Sukses";
            getch();
            break;
        case 5:
            system("cls");
            printinfo(l);
            getch();
            break;
        case 6:
            system("cls");
            cout<<"Masukkan ID yang ingin anda cari : ";
            cin>>x.id;
            p = findElm(l,x);
            if (p != nil)
            {
                cout<<"\nNama    : "<<Info(p).nm<<endl;
                cout<<"Jabatan : "<<Info(p).jb<<endl;
                cout<<"Umur    : "<<Info(p).um<<endl;
                cout<<"Hobi    : "<<Info(p).hb<<endl;
            }
            else
            {
                cout<<"ID tidak ada dalam list";
            }
            getch();
            break;
        case 7:
            break;
        default :
            cout<<"Invalid Input";
            getch();
        }
   }
   while (pil != 7);
}
