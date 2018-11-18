#include<iostream>

using namespace std;

// deklarasi fungsi
int hitung (int,int);
void cetak (int);;

int main(){
int a = hitung(10,2);
cetak(a);
}

// implwmwntasi fungsi
int hitung(int a, int b){
return a+b;
}

void cetak(int a) {
cout << "Nilai dari variabel adalah: " << a << endl;
}
