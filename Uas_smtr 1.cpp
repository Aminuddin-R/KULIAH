#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int i;
string un,pw,cp;
string username,password;

int masuk (int a);
int daftar(int b);
int rekap (int c);

int main (){
int opsi;
cout<<"==========[REKAPS]========="<<endl;
cout<<endl;
cout<<"1.Masuk            2.Daftar"<<endl;
cout<<"============================"<<endl;
cout<<"Pilih : ";
cin>>opsi;
cout<<endl;

    if (opsi==1){
        masuk(opsi);
    }else if (opsi ==2){
        daftar(opsi);
    }else{
    cout<<"yang anda masukkan salah";
    }


return 0;
}
int masuk(int a){
        system("color 2");
                cout<<"======[SELAMAT DATANG]======"<<endl;
                cout<<"silahkan masuk sebagai admin "<<endl;
                cout<<endl;
//program saat opsi = masuk atau Pendaftaran berhasil
            for(i=0;i<2;i++){
                cout<<"masukkan Username : ";
                cin>>username;
                cout<<"masukkan Password : ";
                cin>>password;
                cout<<"============================"<<endl;
//program rekap
    if(username=="abcd" && password=="mantap" || username==un && password==pw){
                system("color 3");
                cout<<"..............................."<<endl;
                cout<<"-------[LOGIN BERHASIL]--------"<<endl;
                cout<<"..............................."<<endl;
                cout<<endl;
                getch();
//opsi program
            int pil;
            cout<<"masuk program "<<endl;
            cout<<"1.Program nilai siswa"<<endl;
            cout<<"2.Keluar"<<endl;

            cout<<"silahkan pilih :";
            cin>>pil;
            cout<<endl;

            start :
            rekap(pil);

system("color 4");
            char b;
            cout<<endl;
            cout<<"apakah ada kesalahan dalam menginput ? [Y/T]"<<endl;
            cin>>b;

            if(b=='y'||b=='Y'){
                goto start;

            }else{
                 cout<<"============================"<<endl;

                break;
            return 0;
            }

    }else{
//notif jika percobaan login gagal
            cout<<"username password salah,ulangi kembali"<<endl;
            cout<<endl;
              cout<<"============================"<<endl;
    }
          }
//program ketika percobaan login > 2
if(i>=2){
    system("color 4");
            cout<<"anda telah salah login 2x"<<endl;
            cout<<"mohon maaf akun anda di block sementara"<<endl;
            cout<<"============================"<<endl;
            getch();
}
return 0;
}
int daftar(int b){
//Program Daftar Akun
    for(int x=1;x<=3;x++){
        cout<<"\t[DAFTAR]"<<endl;
        cout<<"username         : ";
        cin>>un;
        cout<<"password         : ";
        cin>>pw;
        cout<<"Confirm Password : ";
        cin>>cp;

        if(cp==pw){
            cout<<endl;
            cout<<"[PENDAFTARAN SUKSES]"<<endl;
            cout<<endl;
            getch;

            masuk(i);
            x+=3;
        }else if (x<=2){
            cout<<endl;
            cout<<" pastikan yang anda masukkan benar !"<<endl;
            cout<<endl;
        }else{
            cout<<endl;
            cout<<"\t=====[PENDAFTARAN GAGAL]====="<<endl;
            cout<<endl;
        }

    }

return 0;
}
int rekap (int c){

//program pil = 1
            switch (c){
                case 1:
                    start:

                    //deklarasi variabel
                    int jml;
                    char nama [50][100];
                    int tugas[50],uas[50],uts[50],akhir[50];

                    system("color 6");
                    cout<<"\t============================="<<endl;
                    cout<<"\t   PROGRAM NILAI  SISWA"<<endl;
                    cout<<"\t============================="<<endl;

                    cout<<"\n MASUKKAN JUMLAH SISWA: ";
                    cin>>jml;
                    cout<<endl;

                        for (int i=1;i<=jml;i++){
                            cin.ignore();
                            cout<<"SISWA KE-"<<i<<endl;
                            cout<<"--------------------"<<endl;
                            cout<<"NAMA SISWA : ";
                            gets(nama[i]);
                            cout<<endl;
                            cout<<"NILAI TUGAS : ";
                            cin>>tugas[i];
                            cout<<"NILAI UTS   : ";
                            cin>>uts[i];
                            cout<<"NILAI UAS   : ";
                            cin>>uas[i];
                            akhir[i]=(tugas[i]*0.3)+(uts[i]*0.2)+(uas[i]*0.5);
                            cout<<"---------------------"<<endl;
                            cout<<endl;
                        }

                    cout<<endl;
                    cout<<"\t============================================================"<<endl;
                    cout<<"\t\t\t\tREKAP NILAI"<<endl;
                    cout<<"\t\t\t\tPEMROGRAMAN DASAR"<<endl;
                    cout<<"\t============================================================"<<endl;
                    cout<<"\t NO.\t   NAMA     \t         NILAI      \t      GRADE"<<endl;
                    cout<<"\t    \t  SiSWA   \t--------------------"<<endl;
                    cout<<"\t\t           \tTUGAS     UTS    UAS    AKHIR"<<endl;
                    cout<<"\t============================================================="<<endl;

                        for(int i=1;i<=jml;i++){
                            cout<<setw(11)<<i;
                            cout<<setw(13)<<nama[i];
                            cout<<setw(12)<<tugas[i];
                            cout<<setw(7)<<uts[i];
                            cout<<setw(7)<<uas[i];
                            cout<<setw(9)<<akhir[i];

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
                        break;
//program pil = 2
                case 2:
                    system("color 5");
                    cout<<"terima kasih :)"<<endl;
                    break;
            }
return 0;
}
