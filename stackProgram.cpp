#include<iostream>
#include<conio.h>
#define n 5
using namespace std;

typedef struct stak{
    int top;
    int data[n];
};
stak a;

void initial (){
    a.top=-1;
}
int isEmpty(){
    (a.top==-1)?true:false;
}
int isFull(){
    (a.top==n-1)?true:false;
}
void push(int d){
    if (isFull()== true){
        cout<<"Maaf Sudah Penuh"<<endl;
    }else{
        a.top++;
        a.data[a.top]=d;
    }
}
void pop(){
    if(isEmpty()==true){
        cout<<"TDK ADA DATA YG DAPAT DIHAPUS"<<endl;
    }else{
        cout<<"Data yang Dihapus: "<<a.data[a.top]<<endl;
        a.top--;
    }
}
void print(){
    if(isEmpty()==true){
        cout<<"KOSONG"<<endl;
    }else{
        for(int i=a.top;i>=0;i--){
            cout<<"  "<<a.data[i]<<"  "<<endl;
        }
    }
}
void bersihkan(){
    a.top=-1;
}
void peak(){
    cout<<a.data[a.top]<<endl;
}

int main(){
    initial();
    int p,x;
    char ulang;

    do{
        system("cls");
        cout<<"==================="<<endl;
        cout<<"1.Push\n2.Pop\n3.print\n4.peak\n5.Delete\n6.Exit"<<endl;
        cout<<"==================="<<endl;
        cout<<"Pilih: ";cin>>p;
        cin.ignore();
            switch(p){
                case 1:
                    cout<<"==================="<<endl;
                    cout<<"push: ";
                    cin>>x;
                    push(x);
                    cout<<"\n\nUlang ? (y/t)";
                    cin>>ulang;
                    break;
                case 2:
                    cout<<"==================="<<endl;
                    pop();
                    cout<<"\n\nUlang ? (y/t)";
                    cin>>ulang;
                    break;
                case 3:
                    cout<<"========[DATA]========"<<endl;
                    print();
                    cout<<"\n\nUlang ? (y/t)";
                    cin>>ulang;
                    break;
                case 4:
                    cout<<"==================="<<endl;
                    peak();
                    cout<<"\n\nUlang ? (y/t)";
                    cin>>ulang;
                    break;
                case 5:
                    cout<<"==================="<<endl;
                    bersihkan();
                    cout<<"\n\nUlang ? (y/t)";
                    cin>>ulang;
                    break;
                case 6:
                    return false;
                    break;
                default:
                    cout<<"INVALID INPUT";
        }
    }while(ulang=='y'||ulang=='Y');
}
