#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;




int pangkatan(int angka, int pangkat){

if (pangkat==0)
    return 1;
else
    return angka*pangkatan(angka, pangkat-1);

}
int main(int argc, char*argv){
int ang, pang;

cout<<"Masukkan Angka   : ";cin>>ang;
cout<<"Masukkan Pangkat : ";cin>>pang;
cout<<"Hasil Pangkat    = "<<pangkatan(ang,pang);
cout<<endl<<endl;





}
