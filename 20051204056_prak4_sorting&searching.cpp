
#include <iostream>
using namespace std;

int main(){
    int a [7]={20,30,5,6,90,10,56}, cari,low,high,pos,tm;;
    int n=sizeof(a)/sizeof (int);

    //insertion sort
    cout<<"\t";
    for(int m=0;m<n;m++){
		cout<<"\t"<<a[m]<<" ";
	}cout<<endl;cout<<endl;

    for(int i=1;i<n;i++){
        int temp = a[i];
        int j=i-1;

        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        } a[j+1]=temp;
    } 
    cout<<"hasil sort :";
	for(int m=0;m<n;m++){
		cout<<"\t"<< a[m]<<" ";
	}cout<<endl;cout<<endl;

    //interpolation search 

// Input data yang akan dicari
cout<<"Masukkan data yang akan anda cari : ";cin>>cari;
tm=0;
high=6;
low=0;
do{ 
    pos=((cari - a[low])/(a[high]-a[low]))*(high-low) + low;
    if (a[pos] == cari){ 
        tm++;
        break; 
    }
    if (a[pos] > cari){
    high = pos-1;
    }
    else{
        if (a[pos] < cari)
        low = pos + 1;
    }
} while(cari >= a[low] && cari <= a[high]);

    if (tm>0) {cout<<"data "<<cari<<" yang dicari ada dalam array, pada index ke- "<<pos;}
    else{ cout<<"'data tidak ada dalam array'";}

    return 0;
}
