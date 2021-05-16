#pragma once
#include<string>
#include <iostream>
#include "Kullanici.h"
using namespace std;


void Alici::paraEkleme(double para) {

	this->para = para + this->para;
}

void Alici::setPara(double para) {

	this->para = this->para - para;
}

//al�nan urunlerin dizilerde tutulma islemi icin olusturuldu
void Alici::siparisEdilenlerEkleme(string alinanUrunAd, double alinanmiktar, double odenenTutar) {

	siparisEdilenUrun[siparisSayisi] = alinanUrunAd;
	siparisEdilenUrunMiktar[siparisSayisi] = alinanmiktar;
	siperisteOdenentutar[siparisSayisi] = odenenTutar;
	siparisSayisi++;
}

void Alici::siparislerGosterme() {
	system("cls");

	cout << "\t\tS�PAR�SLER�M" << endl;


	if (siparisSayisi > 0) {

		for (int i = 0; i < siparisSayisi; i++) {
			cout << "\talinan �r�n ad: " << siparisEdilenUrun[i] << " alinan �r�n�n miktari: " << siparisEdilenUrunMiktar[i] << " alinan �r�n icin odenen tutar: " << siperisteOdenentutar[i] << endl;
		}

	}
	else {
		cout << "siparisiniz bulunmamaktadir." << endl;
	}

}




