#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double waktu;
    int v;
    int s;
    double srad;
    
    cout<<"Menghitung waktu tempuh boro \n";
    cout<<"Masukkan kecepatan : ";
    cin >> v;
    cout<<"Masukkan sudut : ";
    cin >> s;
    srad = s * (3.14 / 180);
    waktu = 2 * (v * srad) / 10;
    cout<<"Wktu yang ditempuh boro adalah : ";
    cout<<fixed<<setprecision(1)<<jarak<<endl;
    cout << waktu << endl;
    return 0;
}
