#include<iostream>
using namespace std;
#define max 13

int jumlah = 0;
string nama_tim[max];
string kapten[max];
string pelatih[max];
string benua[max];
int in;
void input(){
	cin.ignore();
	for(int i =0; i < in; i++){
		cout << "Masukkan nama tim Anda : ";
		getline(cin, nama_tim[i]);
		cout << "Asal benua tim Anda : ";
		getline(cin, benua[i]);
		cout << "Masukkan nama Pelatih : ";
		getline(cin, pelatih[i]);
		cout << "Masukkan nama Kapten : ";
		getline(cin, kapten[i]);
		system("cls");
		
		}
	}

void output(){
	int i = 0;
	while(i < in){
		cout << "Nama Tim     = " << nama_tim[i] << endl;
		cout << "Asal Benua   = " << benua[i] << endl;
		cout << "Nama Pelatih = " << pelatih[i] << endl;
		cout << "Nama Kapten  = " << kapten[i] << endl;
		cout << endl << endl;
		i = i + 1;
	}
}
int main(){
	cout << "Masukkan Jumlah Tim Yang Di Input: ";
	cin >> in;
	int pilih;
	char kembali;
	
	do{
	cout << "----Piala Dunia----" << endl;
	cout << "1. Input Team" << endl;
	cout << "2. Read Team" << endl;
	cout << "-------------------" << endl;
	cout << "Pilih : ";
	cin >> pilih; 
	switch(pilih){
		case 1:
		system("cls");
		input();
		break;
		
		
		case 2:
		system("cls");
		output();
		break;
		
		default:
		cout << "Pilihan tidak ada ^_^" ;
		}
		cout << "Kembali y/t?";
		cin >> kembali;
		system("cls");
	}while(kembali == 'y');
		
}	

