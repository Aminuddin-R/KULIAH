#include<iostream>
using namespace std;
/*
NAMA:MUHAMMAD AMINUDDIN R || NIM :20051204056 || TI-B

program dengan menu (linklist):
1.Memasukkan data mahasiswa kedalam list urut nim
2.Menghapus data mahasiswa dengan nim tertentu dari list
3.Mencetak data mahasiswa
*/

struct Node{
    long int nim;
    string nama;
    Node* next;
};
Node* head;

//untuk menset bahwa tidak ada data
void initial(){
    head = NULL;
}

//mengecek LInklist
bool isEmpty(){
    return (head == NULL) ? true : false;
}

//memasukkan data
void Push(int nim,string nama){
    Node* temp = new Node;
    Node* next = new Node;
    Node* prev = new Node;
    temp->nim = nim;
    temp->nama = nama;
    if(isEmpty()){
        head = temp;
        head->next = NULL;
    } else if(head->nim > temp->nim){
        temp->next = head;
        head = temp;
    } else {
        next = head;
        while(next != NULL && temp->nim > next->nim){
            prev = next;
            next = next->next;
        }
        if(next == NULL){
            prev->next = temp;
        } else {
            prev->next = temp;
            temp->next = next;
        }
    }
}

//mencetak data
void print(){
    if(isEmpty()){
        cout<<"Data Kosong"<<endl;
    } else {
        Node* temp = new Node;
        temp = head;
        while(temp->next != NULL){
            cout<<"Nama : "<<temp->nama<<"/"<<temp->nim<<endl;
            temp = temp->next;
        }
        cout<<"Nama : "<<temp->nama<<"/"<<temp->nim<<endl;
    }
cout<<"============================="<<endl;
}

//menghapus data
void pop(int nim){
    Node* prev = new Node;
    Node* next = new Node;
    next = head;
    if(isEmpty()){
        cout<<"Data kosong"<<endl;
    } else if(head->nim == nim){
        head = head->next;
    } else {
        while(next->next != NULL && nim != next->nim){
            prev = next;
            next = next->next;
        }
        if(nim == next->nim){
            prev->next = next->next;
            delete next;
        } else {
            cout<<"NIM tidak ada"<<endl;
        }
    }
}

//program utama
int main(){
    while(true){
        int nim,pil;
        string nama;
        cout<<endl;
        cout<<"===================="<<endl;
        cout<<"1.Input data mahasiswa\n2.Hapus data mahasiswa by NIM\n3.Cetak data\n4. Exit"<<endl;
        cout<<"===================="<<endl;
        cout<<"Pilih : ";
        cin>>pil;
        cout<<"===================="<<endl;
        cout<<endl;
        cin.ignore();
        switch(pil){
            case 1:
                cout<<"=========[INPUT]========="<<endl;
                cout<<"NIM : ";
                cin>>nim;
                cout<<"Nama: ";
                cin>>nama;

                Push(nim,nama);
                break;
            case 2:
                cout<<"=========[HAPUS]========="<<endl;
                cout<<" NIM yang  dihapus : ";
                cin>>nim;
                pop(nim);

                break;
            case 3:
                cout<<"=========[CETAK]========="<<endl;
                print();
                break;
            case 4:
                return false;
                break;
            default:
                cout<<"your input is invalid"<<endl;
                break;
        }
    }
}
