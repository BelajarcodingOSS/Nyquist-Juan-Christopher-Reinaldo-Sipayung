#include <iostream>
#include <string> // Tambahkan library string
using namespace std;
int main() {
cout << "Kerja berapa bulan?: ";
    int A;
     cin >> A;
cout << "Gaji per bulan?: ";
    int E; 
cin >> E;  
    float B = 0.95;
    float C = 0.85;
    float G = 0.75;
    float H = 0.70;
    float I = 0.65;
    string D = "Rupiah";
    float F = 0;
    // Hitung hasil F Dengan Nilai Pajak yang Berlaku
if (E<4500000)                       //dibawah 54 juta per tahun
    { F =E * A; }
if (E>4500000 && E<5000000)          //54-60 juta per tahun
    { F =B *E * A; }
if(E<20833333.33 && E>5000000)       //60-250 juta per tahun
    { F = C *E * A; }
if(E<41666666.67 && E>20833333.33)   //250-500 juta per tahun
    { F = G *E * A; }
if(E<416666666.7 && E>41666666.67)   //500-5m per tahun
    { F = H *E * A; }
if(E>416666666.7)                    //diatas 5m per tahun
    { F = I *E * A; }
cout << "Gaji anda ";
printf("%.2f %s", F, D.c_str()); 
// Kalimat tambahan
cout << " (Take Home Pay)" << endl;
return 0;}
