#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main (){
    int jml;
    char nama [50][100];
    int tugas[50],uas[50],uts[50],akhir[50];

    cout<<"\t============================="<<endl;
    cout<<"\t   PROGRAM NILAI  SISWA"<<endl;
    cout<<"\t============================="<<endl;
    getch();

    cout<<"\n MASUKKAN JUMLAH SISWA: ";
    cin>>jml;
    cout<<endl;

        for (int i=1;i<=jml;i++){
            cout<<"SISWA KE-"<<i<<endl;
            cout<<"--------------------"<<endl;
            cout<<"NAMA SISWA : ";
            cin>>nama[i];
            cout<<endl;
            cout<<"NILAI TUGAS : ";
            cin>>tugas[i];
            cout<<"NILAI UTS   : ";
            cin>>uts[i];
            cout<<"NILAI UAS   : ";
            cin>>uas[i];
            akhir[i]=(tugas[i]*0.3)+(uts[i]*0.2)+(uas[i]*0.5);
            cout<<"---------------------"<<endl;
            getch();
            cout<<endl;
        }

    cout<<endl;
    cout<<"\t============================================================"<<endl;
    cout<<"\t\t\t REKAP NILAI"<<endl;
    cout<<"\t\t\tPEMROGRAMAN DASAR"<<endl;
    cout<<"\t============================================================"<<endl;
    cout<<"\t NO.\t   NAMA     \t         NILAI      \t      GRADE"<<endl;
    cout<<"\t    \t  SiSWA   \t--------------------"<<endl;
    cout<<"\t\t           \tTUGAS     UTS    UAS    AKHIR"<<endl;
    cout<<"\t============================================================="<<endl;
//menampilkan Nama, nilai tugas, nilai uts, nilai uas siswa
        for(int i=1;i<=jml;i++){
            cout<<setw(11)<<i;
            cout<<setw(13)<<nama[i];
            cout<<setw(12)<<tugas[i];
            cout<<setw(7)<<uts[i];
            cout<<setw(7)<<uas[i];
            cout<<setw(9)<<akhir[i];
//garde Nilai
                if(akhir[i]>=80){
                  cout<<setw(7)<<"A";
                }else if(akhir[i]>=70){
                  cout<<setw(7)<<"B";
                }else if(akhir[i]>=60){
                  cout<<setw(7)<<"C";
                }else if(akhir[i]>=50){
                  cout<<setw(7)<<"D";
                }else{
                  cout<<setw(7)<<"E";
                }
            cout<<endl;
        }

        cout<<"\t========================================================="<<endl;
        cout<<"\t TOTAL SISWA = "<< jml <<endl;


return 0;
}
