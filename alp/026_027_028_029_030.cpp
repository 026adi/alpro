#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float phi = 3.14;

void header(),anggota(),salah(),duadimensi(),tigadimensi();
void menu(int *pil);
void segiempat(float *pan1, float *leb1, float *has1, float *has2);
void persegi(float &pan2, float &hasil1, float &hasil2);
void segitiga(float &al1, float &ti1, float &mi1, float &mi2, float &hasil1, float &hasil2);
void lingkaran(float *jari, float *hasil, float *hasil2);
void jajarangenjang(float &alas, float &tinggi, float &miring, float &hasil1, float &hasil2);
void belahketupat(float &d1, float &d2, float &mir, float &hasil1, float &hasil2);
void trapesium(float &s1, float &s2, float &t1, float &mir1, float &mir2, float &hasil1, float &hasil2);
void layang(float &d1, float &d2, float &mir1, float &mir2, float &hasil1, float &hasil2);
void kubus(float &s, float &hasil, float &hasil2);
void balok(float &p, float &l, float &t, float &hasil, float &hasil2);
void prisma(float &a, float &t, float &t1, float &s2, float &s3, float &hasil, float &hasil2);
void tabung(float &r, float &t, float &hasil, float &hasil2);
void bola(float &r, float &hasil, float &hasil2);
void kerucut(float &r, float &t, float &s, float &hasil, float &hasil2);
void limas(float &a, float &t, float &t1, float &hasil, float &hasil2);
void matriks(char &pil);
void penjumlahan(char &pilih);
void pengurangan(char &pil);

int main() {
	char pilih1,pilih2;
	int nomor;
	header();
	system("cls");
	do{
		menu(&nomor);
		switch (nomor) {
			case 1 : duadimensi(); break;
			case 2 : tigadimensi(); break;
			case 3 : matriks(pilih2); break;
			case 4 : anggota(); break;
			case 5 : cout << endl;
					 cout << setw(43) << setfill ('-') << ('-'); 
					 cout << "\n~TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI~\n";
					 cout << setw(43) << setfill ('-') << ('-');
					 exit(0);
					 break;
			default : cout << "\nInput tidak valid\n"; salah();
		}
		cout << "\nApakah Anda ingin menggunakan program ini dari awal? (y/n) : ";
		cin >> pilih1;
		system ("cls");
	} while (pilih1 == 'y' || pilih1 == 'Y');
	cout << setw(43) << setfill ('-') << ('-'); 
	cout << "\n~TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI~\n";
	cout << setw(43) << setfill ('-') << ('-');
	return 0;
}
void header() {
	system ("cls");
	cout << setw(77) << setfill('-') << '-' << endl;
	cout << setw(32) << setfill(' ') << ' ' << "Selamat Datang" << endl; 
	cout << setw(77) << setfill('-') << '-' << endl;
	cout << setw(77) << setfill('=') << '=' << endl; 
	cout << "||" << setw (7) << setfill(' ') << " " << "Program Perhitungan Dua Dimensi, Tiga Dimensi, dan Matriks" << setw (10) << setfill(' ') << "||" << endl;
	cout << setw(77) << setfill('=') << '=' << endl;
	cout << "||" << setw (33) << setfill(' ') << ' ' << "Ketentuan:" << setw (32) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "1. Gunakan program ini dengan bijak." << setw (35) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "2. Inputkan sesuai dengan printah yang tersedia." << setw (23) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "3. Untuk informasi mengenai pembuatan program ini ada di menu About." << setw (3) << setfill(' ') << "||" << endl;
	cout << setw(77) << setfill('=') << '=' << endl; 
	cout << "\n\t\tKETIK APA SAJA UNTUK MELANJUTKAN\n";
	system("pause");
}

void anggota() {
	system ("cls");
	cout << setw(70) << setfill('-') << '-' << endl;
	cout << setw(25) << setfill(' ') << ' ' << "   kelompok 6" << endl; 
	cout << setw(25) << setfill(' ') << ' ' << "Anggota kelompok" << endl; 
	cout << setw(70) << setfill('-') << '-' << endl;
	cout << setw(70) << setfill('=') << '=' << endl; 
	cout << "||" << setw (4) << setfill(' ') << " " << "Program Perhitungan Dua Dimensi, Tiga Dimensi, dan Matriks" << setw (6) << setfill(' ') << "||" << endl;
	cout << setw(70) << setfill('=') << '=' << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Nama\t: Adi Setya Nur Pradipta" << setw (30) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "NIM\t: 123230026" << setw (43) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Kelas\t: IF-A" << setw (48) << setfill(' ') << "||" << endl;
	cout << "||" << setw(68) << setfill('-') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Nama\t: Muhammad Syahrial Abidin" << setw (28) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "NIM\t: 123230027" << setw (43) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Kelas\t: IF-A" << setw (48) << setfill(' ') << "||" << endl;
	cout << "||" << setw(68) << setfill('-') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Nama\t: Irfan Fitra Pratama" << setw (33) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "NIM\t: 123230028" << setw (43) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Kelas\t: IF-A" << setw (48) << setfill(' ') << "||" << endl;
	cout << "||" << setw(68) << setfill('-') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Nama\t: Raihana Jasmine Irbah" << setw (31) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "NIM\t: 123230029" << setw (43) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Kelas\t: IF-A" << setw (48) << setfill(' ') << "||" << endl;
	cout << "||" << setw(68) << setfill('-') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Nama\t: Reza Rasendriya Adi Putra" << setw (27) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "NIM\t: 123230030" << setw (43) << setfill(' ') << "||" << endl;
	cout << "||" << setw (4) << setfill(' ') << ' ' << "Kelas\t: IF-A" << setw (48) << setfill(' ') << "||" << endl;
	cout << setw(70) << setfill('=') << '=' << endl; 
	cout << endl << endl;
}
void menu(int *pil){
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << "||" << setw (15) << setfill(' ') << " " << "MENU" << setw (19) << setfill(' ') << "||" << endl;
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << setiosflags(ios::right);
	cout << "||" << setw (2) << setfill(' ') << " " << "1. Bangun Dua Dimensi" << setw (15) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "2. Bangun Tiga Dimensi" << setw (14) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "3. Matriks" << setw (26) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "4. About" << setw (28) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "5. Exit" << setw (29) << setfill(' ') << "||" << endl;
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << "Pilihan: ";
	cin >> *pil;
}
void duadimensi() {
	int p1;
	char pil;
	do{
		system ("cls");
		cout << setw(40) << setfill('=') << '=' << endl; 
		cout << "||" << setw (10) << setfill(' ') << " " << "MENU DUA DIMENSI" << setw (12) << setfill(' ') << "||" << endl;
		cout << setw(40) << setfill('=') << '=' << endl; 
		cout << resetiosflags(ios::adjustfield);
		cout << "||" << setw (2) << setfill(' ') << " " << "1. Persegi Panjang" << setw (18) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "2. Persegi" << setw (26) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "3. Segitiga" << setw (25) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "4. Lingkaran" << setw (24) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "5. Jajaran Genjang" << setw (18) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "6. Belah Ketupat" << setw (20) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "7. Trapesium" << setw (24) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "8. Layang-Layang" << setw (20) << setfill(' ') << "||" << endl;
		cout << "||" << setw (2) << setfill(' ') << " " << "9. Kembali ke Menu Utama" << setw (12) << setfill(' ') << "||" << endl;
		cout << setw(40) << setfill('=') << '=' << endl; 
		cout << "Pilihan: ";
		cin >> p1;
		switch (p1) {
			case 1 : {
				float panjang1,lebar1,hasil1,hasil2; 
				segiempat(&panjang1,&lebar1,&hasil1,&hasil2); 
				break;
			}case 2 : {
				float panjang2, hasil1, hasil2;
				persegi(panjang2, hasil1, hasil2);
				break;
			}case 3 : {
				float alas1,tinggi1,miring1,miring2, hasil1, hasil2;
				segitiga(alas1,tinggi1,miring1,miring2, hasil1, hasil2);
				break;
			}case 4 : {
				float jari,hasil1,hasil2;
				lingkaran(&jari,&hasil1,&hasil2);
				break;
			}case 5 : {
				float alas,tinggi,miring, hasil1, hasil2;
				jajarangenjang(alas,tinggi,miring, hasil1, hasil2);
				break;
			}case 6 : {
				float diagonal1,diagonal2,miring, hasil1, hasil2;
				belahketupat(diagonal1,diagonal2,miring, hasil1, hasil2);				
				break;
			}case 7 : {
				float sisi1,sisi2,tinggi,miring1,miring2, hasil1, hasil2;
				trapesium(sisi1,sisi2,tinggi,miring1,miring2, hasil1, hasil2);
				break;
			}case 8 : {
				float diagonal1,diagonal2,miring1,miring2,hasil1,hasil2;
				layang(diagonal1,diagonal2,miring1,miring2,hasil1,hasil2);
				break;
			}case 9 : {
				main();
				break;
			}default : cout << "Input tidak valid.\n"; salah();
		}
		cout << "\nApakah Anda ingin kembali ke Menu Dua Dimensi? [y/n]: "; cin >> pil;
	}while (pil == 'y' || pil == 'Y');
	system ("cls");
	cout << setw(77) << setfill('=') << '=' << endl;
	cout << "\tTerima kasih telah menggunakan Program Mengitung Dua Dimensi.\n";
	cout << setw(77) << setfill('=') << '=' << endl;
}
void segiempat (float *pan1, float *leb1, float *has1, float *has2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Persegi Panjang]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(61) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(57) << setfill(' ') << '|' << endl;
		cout << setw(83) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system ("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Persegi Panjang]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan panjang : "; cin >> *pan1;
				cout << "  Masukkan lebar   : "; cin >> *leb1;
				*has1 = *pan1 * *leb1;
				cout << endl; cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "                                    Hasil                          \n";
				cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "  Luas Persegi Panjang     : " << *has1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Persegi Panjang]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan panjang : "; cin >> *pan1;
				cout << "  Masukkan lebar   : "; cin >> *leb1;
				*has2 = (*pan1 + *leb1) * 2;
				cout << endl; cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "                                    Hasil                          \n";
				cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "  Keliling Persegi Panjang : " << *has2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Persegi Panjang lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void persegi (float &pan2, float &hasil1, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Persegi]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. menghitung luas." << setw(53) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(49) << setfill(' ') << '|' << endl;
		cout << setw(75) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system ("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Persegi]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi : "; cin >> pan2;
				hasil1 = pan2 * pan2;
				cout << endl; cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "                                    Hasil                          \n";
				cout << setw(82) << setfill('=') << '=' << endl; 
				cout << "  Luas Persegi      : " << hasil1 << endl;
				break;
			}case '2' : {
				system ("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Persegi]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi : "; cin >> pan2;
				hasil2 = pan2 * 4;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Persegi  : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Persegi lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void segitiga(float &al1, float &ti1, float &mi1, float &mi2, float &hasil1, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Segitiga]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas        : "; cin >> al1;
				cout << "  Masukkan tinggi      : "; cin >> ti1;
				hasil1 = (al1 * ti1)/2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                                   Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Segitiga     : " << hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas                : "; cin >> al1;
				cout << "  Masukkan sisi miring pertama : "; cin >> mi1;
				cout << "  Masukkan sisi miring kedua   : "; cin >> mi2;
				hasil2 = al1 + mi1 + mi2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                                   Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Segitiga : " << hasil2 << endl;
				break;
			}default :
				cout << "Input tidak Valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Segitiga lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void lingkaran (float *jari, float *hasil1, float *hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Lingkaran]" << setw(14) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Lingkaran]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari : "; cin >> *jari;
				*hasil1 = phi * *jari * *jari;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Lingkaran      : " << *hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Lingkaran]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari : "; cin >> *jari;
				*hasil2 = phi * *jari * 2; 
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Lingkaran  : " << *hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Lingkaran lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void jajarangenjang(float &alas, float &tinggi, float &miring, float &hasil1, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(11) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Jajaran Genjang]" << setw(11) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Jajaran Genjang]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas        : "; cin >> alas;
				cout << "  Masukkan tinggi      : "; cin >> tinggi;
				hasil1 = alas * tinggi;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Jajaran Genjang      : " << hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Jajaran Genjang]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas        : "; cin >> alas;
				cout << "  Masukkan sisi miring : "; cin >> miring;
				hasil2 = (alas + miring)*2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Jajaran Genjang  : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Jajaran Genjang lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void belahketupat(float &d1, float &d2, float &mir, float &hasil1, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(11) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Belah Ketupat]" << setw(12) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Belah Ketupat]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan diagonal 1   : "; cin >> d1;
				cout << "  Masukkan diagonal 2   : "; cin >> d2;
				hasil1 = (d1 * d2)/2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Belah Ketupat      : " << hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Belah Ketupat]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi miring  : "; cin >> mir;
				hasil2 = (mir)*4;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Belah Ketupat  : " << hasil2 << endl;
				break;
			} default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Belah Ketupat lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void trapesium(float &s1, float &s2, float &t1, float &mir1, float &mir2, float &hasil1, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Trapesium]" << setw(14) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Trapesium]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi atas      : "; cin >> s1;
				cout << "  Masukkan sisi bawah     : "; cin >> s2;
				cout << "  Masukkan tinggi         : "; cin >> t1;
				hasil1 = (s1+s2)*t1/2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Trapesium      : " << hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Trapesium]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi atas      : "; cin >> s1;
				cout << "  Masukkan sisi bawah     : "; cin >> s2;
				cout << "  Masukkan sisi miring 1  : "; cin >> mir1;
				cout << "  Masukkan sisi miring 2  : "; cin >> mir2;
				hasil2 = s1 + s2 + mir1 + mir2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Trapesium  : " << hasil2 << endl;
				break;
			} default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Trapesium lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void layang(float &d1,float &d2,float &mir1,float &mir2,float &hasil1,float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(12) << setfill('-') << "-" << "[Program Mengitung Luas dan Keliling Layang-Layang]" << setw(12) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Luas." << setw(54) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Keliling." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(76) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Layang-Layang]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan diagonal 1   : "; cin >> d1;
				cout << "  Masukkan diagonal 2   : "; cin >> d2;
				hasil1 = (d1 * d2)/2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Luas Layang-Layang      : " << hasil1 << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Keliling Layang-Layang]" << setw(14) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi miring 1  : "; cin >> mir1;
				cout << "  Masukkan sisi miring 2  : "; cin >> mir2;
				hasil2 = (mir1 + mir2)*2;
				cout << endl; cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(75) << setfill('=') << '=' << endl; 
				cout << "  Keliling Layang-Layang  : " << hasil2 << endl;
				break;
			} default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Luas dan Keliling Layang-Layang lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}

void tigadimensi (){
	char pil;
	int p2;
	do{
	system ("cls");
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << "||" << setw (10) << setfill(' ') << " " << "MENU TIGA DIMENSI" << setw (11) << setfill(' ') << "||" << endl;
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << resetiosflags(ios::adjustfield);
	cout << "||" << setw (2) << setfill(' ') << " " << "1. Kubus" << setw (28) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "2. Balok" << setw (28) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "3. Prisma Segitiga" << setw (18) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "4. Tabung" << setw (27) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "5. Bola" << setw (29) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "6. Kerucut" << setw (26) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "7. Limas Segitiga" << setw (19) << setfill(' ') << "||" << endl;
	cout << "||" << setw (2) << setfill(' ') << " " << "8. Kembali ke Menu Utama" << setw (12) << setfill(' ') << "||" << endl;
	cout << setw(40) << setfill('=') << '=' << endl; 
	cout << "\nPilihan: ";
	cin >> p2;
	switch (p2) {
		case 1 : {
			float s, hasil, hasil2;
			kubus(s, hasil, hasil2);
			break;
		}case 2 : {
			float p, l, t, hasil, hasil2;
			balok(p, l, t, hasil, hasil2);
			break;
		}case 3 : {
			float a, t, t1, s2, s3, hasil, hasil2;
			prisma(a, t, t1, s2, s3, hasil, hasil2);
			break;
		}case 4 : {
			float r, t, hasil, hasil2;
			tabung(r, t, hasil, hasil2);
			break;
		}case 5 : {
			float r, hasil, hasil2;
		    bola (r, hasil, hasil2);
		    break;
		}case 6 : {
		   	 float r, t, s, hasil, hasil2;
			 kerucut(r, t, s, hasil, hasil2);
			 break;
		}case 7 : {
			 float a, t, t1, hasil, hasil2;
			 limas(a, t, t1, hasil, hasil2);
			 break;
		}case 8 : {
			 main();
			 break;
		}default : cout << "Input tidak valid."; salah();
			
	}
	cout << "\nApakah Anda ingin kembali ke Menu Tiga Dimensi? [y/n]: "; cin >> pil;
	} while (pil == 'y' || pil == 'Y');
	system("cls");
	cout << setw(77) << setfill('=') << '=' << endl;
	cout << "\tTerima kasih telah menggunakan Program Mengitung Tiga Dimensi.\n";
	cout << setw(77) << setfill('=') << '=' << endl;
}
void kubus(float &s, float &hasil, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(9) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Kubus]" << setw(10) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(47) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(39) << setfill(' ') << '|' << endl;
		cout << setw(71) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Kubus]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi       : "; cin >> s;
				hasil = pow(s,3);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Kubus             : " << hasil  << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Kubus]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan sisi       : "; cin >> s;
				hasil2 = 6 * pow(s,2);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Kubus     : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Kubus lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void balok(float &p, float &l, float &t, float &hasil, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Balok]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(57) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(49) << setfill(' ') << '|' << endl;
		cout << setw(81) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Balok]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan panjang       : "; cin >> p;
				cout << "  Masukkan lebar         : "; cin >> l;
				cout << "  Masukkan tinggi        : "; cin >> t;
				hasil = p*l*t;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Balok            : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Balok]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan panjang       : "; cin >> p;
				cout << "  Masukkan lebar         : "; cin >> l;
				cout << "  Masukkan tinggi        : "; cin >> t;
				hasil2 = 2 * (p*l +p*t +l*t);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Balok     : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Balok lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void prisma(float &a, float &t, float &t1, float &s2, float &s3, float &hasil, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(11) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Prisma Segitiga]" << setw(11) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(60) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(52) << setfill(' ') << '|' << endl;
		cout << setw(84) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Prisma Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas           : "; cin >> a;
				cout << "  Masukkan tinggi         : "; cin >> t;
				cout << "  Masukkan tinggi prisma  : "; cin >> t1;
				hasil = (0.5 *a*t)*t1;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Prisma Segitiga    : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Prisma Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas           : "; cin >> a;
				cout << "  Masukkan tinggi         : "; cin >> t;
				cout << "  Masukkan sisi 2         : "; cin >> s2;
				cout << "  Masukkan sisi 3         : "; cin >> s3;
				cout << "  Masukkan tinggi prisma  : "; cin >> t1;
				hasil2 =(2 * 0.5 *a*t)+(a + s2 + s3)*t1;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Prisma Segitiga     : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Prisma Segitiga lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void tabung(float &r, float &t, float &hasil, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Tabung]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(58) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(82) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Tabung]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari    : "; cin >> r;
				cout << "  Masukkan tinggi       : "; cin >> t;
				hasil = phi * pow(r,2) * t;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Tabung            : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Tabung]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan Jari-Jari    : "; cin >> r;
				cout << "  Masukkan tinggi       : "; cin >> t;
				hasil2 = 2 * phi * r * (r + t);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Tabung     : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Tabung lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void bola(float &r, float &hasil, float &hasil2) {
	char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Bola]" << setw(15) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(56) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(48) << setfill(' ') << '|' << endl;
		cout << setw(80) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Bola]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari       : "; cin >> r;
				hasil = phi * pow(r,3) * 4/3;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Bola            : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Bola]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari       : "; cin >> r;
				hasil2 = 4 * phi * pow(r,2);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Bola     : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Bola lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void kerucut(float &r, float &t, float &s, float &hasil, float &hasil2){
char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Kerucut]" << setw(14) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(58) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(50) << setfill(' ') << '|' << endl;
		cout << setw(82) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Kerucut]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari    : "; cin >> r;
				cout << "  Masukkan tinggi       : "; cin >> t;
				hasil = phi * pow(r,2) * t * 1/3;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Kerucut           : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Kerucut]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan jari-jari    : "; cin >> r;
				cout << "  Masukkan sisi miring  : "; cin >> s;
				hasil2 = phi * r * (r + s);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Kerucut   : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Kerucut lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void limas(float &a, float &t, float &t1, float &hasil, float &hasil2) {
char pilihan, pil;
	do{
		system("cls");
		cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume dan Luas Permukaan Limas Segitiga]" << setw(14) << setfill('-') << "-" << endl;
		cout << "| 1. Menghitung Volume." << setw(65) << setfill(' ') << '|' << endl;
		cout << "| 2. Menghitung Luas Permukaan." << setw(57) << setfill(' ') << '|' << endl;
		cout << setw(89) << setfill('-') << ' ' << endl;
		cout << "Pilih : "; cin >> pil;
		switch (pil) {
			case '1' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Volume Limas Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas         : "; cin >> a;
				cout << "  Masukkan tinggi alas  : "; cin >> t;
				cout << "  Masukkan tinggi limas : "; cin >> t1;
				hasil =  t1 * (a * t * 1/2) * 1/3;
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Volume Limas Segitiga           : " << hasil << endl;
				break;
			}case '2' : {
				system("cls");
				cout << setw(14) << setfill('-') << "-" << "[Program Mengitung Luas Permukaan Limas Segitiga]" << setw(15) << setfill('-') << "-" << endl << endl;
				cout << "  Masukkan alas         : "; cin >> a;
				cout << "  Masukkan tinggi alas  : "; cin >> t;
				cout << "  Masukkan sisi tegak   : "; cin >> t1;
				hasil2 = (a * t1 * 1/2 * 3 ) + (a * t * 1/2);
				cout << endl; cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "                            Hasil                          \n";
				cout << setw(61) << setfill('=') << '=' << endl; 
				cout << "  Luas Permukaan Limas Segitiga   : " << hasil2 << endl;
				break;
			}default : 
				cout << "Input tidak valid!\n";
		}
		cout << "\nApakah anda ingin menggunakan Program Mengitung Volume dan Luas Permukaan Limas Segitiga lagi? [y/n] : "; cin >> pilihan;
	} while (pilihan == 'y' || pilihan == 'Y');
}
void matriks(char &pil) {
	 char pilih,pilihan;
	 do{
		 cin.ignore();
		 system("cls");
		 cout << setw(55) << setfill('=') << ' ' << endl;
		 cout << '|' << setw(20) << setfill(' ') << ' ' << "Menu Matriks" << setw(21) << setfill(' ') << '|' << endl;
		 cout << setw(55) << setfill('=') << ' ' << endl;
		 cout << '|' << " 1. Penjumlahan Matriks" <<  setw(30) << setfill(' ') << '|' << endl;
		 cout << '|' << " 2. Pengurangan Matriks" << setw(30) << setfill(' ') << '|' << endl;
		 cout << '|' << " 3. Kembali ke Menu Utama" << setw(28) << setfill(' ') << '|' << endl;
		 cout << setw(55) << setfill('=') << ' ' << endl;
		 cout << "Pilihan : ";
		 cin >> pil;
		 switch(pil) {
			 case '1' : penjumlahan(pilihan); break;
			 case '2' : pengurangan(pilihan); break;
			 case '3' : main(); break;
			 default : cout << "\nInput tidak valid\n"; salah(); 
		 }
		 cout << "\nApakah Anda ingin kembali ke Menu Matriks? [y/n]: "; cin >> pilih;
	 }while (pilih == 'y' ||pilih == 'Y');
	 system ("cls");
	 cout << setw(99) << setfill('=') << '=' << endl;
	 cout << "\tTerima kasih telah menggunakan Program Mengitung Penjumlahan dan Pengurangan Matriks.\n";
	 cout << setw(99) << setfill('=') << '=' << endl;	 
}
void penjumlahan(char &pilih) {
	int max = 10;
	int total;
    do{
		system("cls");
		cout << setw(20) << setfill('-') << "-" << "[Program Penjumlahan Matriks]" << setw(20) << setfill('-') << "-" << endl << endl;
		cout << setw(65) << setfill('=') << ' ' << endl;
		cout << '|' << setw(18) << setfill (' ') << ' ' << "Penjumlahan Beberapa Matriks" << setw(17) << setfill(' ') << '|' << endl;
		cout << setw(65) << setfill('=') << ' ' << endl;
		cout << "Masukkan jumlah matriks (2 - 5): ";
		cin >> total;
		if (total < 2 || total > 5) {
			cout << "Input tidak valid.\n";
			return;
		}
		int baris[total];
		int kolom[total];
		int hasil[max][max] = {0};
		//menginputkan nilai matriks
		for (int i = 0; i < total; i++) {
			cout << "\nMatriks ke-" << i + 1 << endl;
			cout << "Masukkan jumlah baris matriks : ";
			cin >> baris[i];
			cout << "Masukkan jumlah kolom matriks : ";
			cin >> kolom[i];

			if (i > 0 && (baris[i] != baris[0] || kolom[i] != kolom[0])) {
				cout << "Penjumlahan matriks mustahil dilakukan.\n";
				return;
			}
			int mat[max][max];
			cout << "\nInput Matriks ke-" << i + 1 << endl;
			for (int j = 0; j < baris[i]; j++) {
				for (int k = 0; k < kolom[i]; k++) {
					cout << "Matriks [" << j << ',' << k << "] : ";
					cin >> mat[j][k];
					hasil[j][k] += mat[j][k]; 
				}
			}
			//menampilkan matriks
			cout << "\nMatriks ke-" << i+1 << endl;
			for(int a = 0; a < baris[i]; a++) {
				cout << '|';
				for(int b= 0; b < kolom[i]; b++) { 
					cout << mat[a][b] << "\t";
				}
				cout << '|';
				cout << endl;
			}
		}
		//menampilkan penjumlahan matriks
		cout << "\nHasil Penjumlahan matriks adalah:\n";
		for (int i = 0; i < baris[0]; i++) {
			cout << '|';
			for (int j = 0; j < kolom[0]; j++) {
				cout << hasil[i][j] << "\t";
			}
			cout << '|';
			cout << endl;
		}
        cout << "\nApakah anda ingin menggunakan Program Penjumlahan Matriks lagi? [y/n] : ";
        cin >> pilih;
    } while (pilih == 'y' || pilih == 'Y');
}
void pengurangan(char &pil){
	int maksimal = 10, total;
    do{
		system("cls");
		cout << setw(20) << setfill('-') << "-" << "[Program Pengurangan Matriks]" << setw(20) << setfill('-') << "-" << endl << endl;
		cout << setw(65) << setfill('=') << ' ' << endl;
		cout << '|' << setw(18) << setfill (' ') << ' ' << "Pengurangan Beberapa Matriks" << setw(17) << setfill(' ') << '|' << endl;
		cout << setw(65) << setfill('=') << ' ' << endl;
		cout << "Masukkan jumlah matriks (2 - 5): ";
		cin >> total;
		if (total < 2 || total > 5) {
			cout << "Input tidak valid.\n";
			return;
		}
		int baris[total];
		int kolom[total];
		int hasil[maksimal][maksimal] = {0};
		//menginputkan nilai matriks
		for (int i = 0; i < total; i++) {
			cout << "\nMatriks ke-" << i + 1 << endl;
			cout << "Masukkan jumlah baris matriks : ";
			cin >> baris[i];
			cout << "Masukkan jumlah kolom matriks : ";
			cin >> kolom[i];
			if (i > 0 && (baris[i] != baris[0] || kolom[i] != kolom[0])) {
				cout << "\nPengurangan matriks mustahil dilakukan.\n";
				return;
			}
			int mat[maksimal][maksimal];
			cout << "\nInput Matriks ke-" << i + 1 << endl;
			for (int j = 0; j < baris[i]; j++) {
				for (int k = 0; k < kolom[i]; k++) {
					cout << "Matriks [" << j << ',' << k << "] : ";
					cin >> mat[j][k];
					if (i == 0) {
						hasil[j][k] = mat[j][k];
					} else {
						hasil[j][k] -= mat[j][k];
					}
				}
			}
			//menampilkan matriks
			cout << "\nMatriks ke-" << i+1 << endl;
			for(int a = 0; a < baris[i]; a++) {
				cout << '|';
				for(int b= 0; b < kolom[i]; b++) {
					cout << mat[a][b] << "\t";
				}
				cout << '|';
				cout << endl;
			}
		}
		//menampilkan pengurangan matriks
		cout << "\nHasil pengurangan matriks adalah:\n";
		for (int i = 0; i < baris[0]; i++) {
			cout << '|';
			for (int j = 0; j < kolom[0]; j++) {
				cout << hasil[i][j] << "\t";
			}
			cout << "|";
			cout << endl;
		}
		cout << "\nApakah anda ingin menggunakan Program Pengurangan Matriks lagi? [y/n] : ";cin >> pil;
    } while (pil == 'y' || pil == 'Y');
}
void salah() {
	char pilihan; 
	do {
		cout << "Apakah anda ingin menggunakan program dari awal? [Y/N] : "; cin >> pilihan;
		switch (toupper(pilihan)) { 
			case 'Y':
				system("cls"); 
				main();
			case 'N':
				system ("cls");
				cout << "Terima kasih telah menggunakan program kami.\n";
				exit(0);
		}
	} while (toupper(pilihan != 'Y' || pilihan != 'N'));
}
