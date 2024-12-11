#include <iostream>
using namespace std;
void fibonacci(int inisiasi, int iterasi);
void luaslingkaran(float r);
void kellingkaran(float r);
int inisiasi;
int iterasi;
float r,luas,kel;
#define phi 3.14
int main(){
    int opsi,pil;
    char milih;
    do{
    system("CLS");
    
    
    cout<<"=== Program Fungsi ===\n";
    cout<<"1. Operasi Bilangan fibonacci\n";
    cout<<"2. Operasi lingkaran\n";
    cout<<"3. Keluar\n";
    cout<<"Pilih opsi : ";cin>>opsi;
    switch (opsi)
    {
    case 1:
    system("CLS");
    cout<<"\n====================================\n";
    cout<<"+++++Operasi Bilangan Fibonacci+++++\n";
    cout<<"====================================\n";
    cout<<"Input deret awal\t: ";cin>>inisiasi;
    cout<<"Input panjang deret\t: ";cin>>iterasi;

    fibonacci(inisiasi,iterasi);
        break;
    case 2:
    system("CLS");
    cout<<"\n==============================\n";
    cout<<"++++++Operasi lingkaran+++++++\n";
    cout<<"==============================\n";
    cout<<"1. Hitung luas\n2. Hitung keliling";
    cout<<"\nPilih salah satu : ";
    cin>>pil;
        switch(pil){
            case 1:
            cout<<"\nHitung luas lingkaran";
            cout<<"\nInput jari-jari : ";cin>>r;
            luaslingkaran(r);
            break;
            case 2:
            cout<<"\nHitung keliling lingkaran";
            cout<<"\nInput jari-jari : ";cin>>r;
            kellingkaran(r);
            break;
        }break;
    case 3:
    system("CLS");
    cout<<"\nAnda keluar\n";
    break;
    }
 cout<<"\nApakah anda ingin kembali ke menu utama? (y/n)\n";cin>>milih;
    }
    
     while (milih == 'y');
     

}

void fibonacci(int inisiasi, int iterasi){
    int f_n, inisiasi1;
    cout<<inisiasi;
    inisiasi1=0;
    for(int i=1; i <= iterasi -1; i++){
        f_n = (inisiasi)+(inisiasi1);
        inisiasi1 = inisiasi;
        inisiasi =f_n;
        cout<<" "<<f_n;
    }

}
void luaslingkaran(float r){
    luas = phi * r * r;
    cout<<"Hasil dari luas lingkaran adalah "<<luas;
}
void kellingkaran(float r){
    kel = phi * r * 2;
    cout<<"Hasil dari keliling lingkaran adalah "<<kel;
}