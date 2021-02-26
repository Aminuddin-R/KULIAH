#include <iostream>
using namespace std;

int main(){
cout<<"================================ 1"<<endl;
//Nomor 1 CODE JAM
    for(int baris=0;baris<5;baris++){
    if(baris == 0 || baris == 4){
        for(int kolom=0;kolom<5;kolom++){
            cout<<"* ";
        }
    }else{
        cout<<"* ";
        for(int kosong=1;kosong<=3;kosong++){
            cout<<"  ";
        }
        cout<<"*";
    }

cout<<endl;
}
cout<<"================================ 2"<<endl;
//Nomor 2 CODE JAM
for(int stg=1;stg<=2;stg++){
    if(stg == 1){
        for(int brs=1;brs<=5;brs++){
            for(int btng=1;btng<=brs;btng++){
                cout<<"* ";
            }
        cout<<endl;
        }
    }else{
        for(int brs=5;brs>=1;brs--){
            for(int btng=brs;btng>=1;btng--){
                cout<<"* ";
            }
        cout<<endl;
        }
    }
}
cout<<"================================ 3"<<endl;
//NOMOR 3 CODE JAM
for(int i=1;i<=5;i++){
    if (i ==1 || i==5){
        for(int x=1;x<=5;x++){
            cout<<"*";
        }
    }else{
        cout<<"*";
        for(int z=1;z<=3;z++){
            cout<<" ";

        }
        cout<<"*";
    }
    cout<<endl;
}
cout<<"=============================== 4"<<endl;
//Nomor 4 CODE JAM
for (int i=5;i>=1;i--){
        for(int btng=1;btng<=5;btng++){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<"=============================== 5"<<endl;
//Nomor 5 CODE JAM

 for(int i = 1;i<=10;i++){
    if(i<=5){
        for(int x=1;x<i;x++){
            cout<<" ";
        }
    }else
        for(int y=10-i;y>=1;y--){
            cout<<" ";
        }
 cout<<"*";
    if(i<5){
        for(int a=i;a<=4;a++){
            cout<<"  ";
        }
    }else if(i>6)
        for(int b=10-i;b<4;b++){
            cout<<"  ";
        }
cout<<"*";
 cout<<endl;
 }
cout<<"==============================="<<endl;
for(int i=1;i<=5;i++){
    for(int a=i;a<5;a++){
        cout<<" ";
    }
    for(int z=1;z<=(2*i)-1;z++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;







return 0;
}
