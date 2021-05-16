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

//alýnan urunlerin dizilerde tutulma islemi icin olusturuldu
void Alici::siparisEdilenlerEkleme(string alinanUrunAd, double alinanmiktar, double odenenTutar) {

	siparisEdilenUrun[siparisSayisi] = alinanUrunAd;
	siparisEdilenUrunMiktar[siparisSayisi] = alinanmiktar;
	siperisteOdenentutar[siparisSayisi] = odenenTutar;
	siparisSayisi++;
}

void Alici::siparislerGosterme() {
	system("cls");

	cout << "\t\tSÝPARÝSLERÝM" << endl;


	if (siparisSayisi > 0) {

		for (int i = 0; i < siparisSayisi; i++) {
			cout << "\talinan ürün ad: " << siparisEdilenUrun[i] << " alinan ürünün miktari: " << siparisEdilenUrunMiktar[i] << " alinan ürün icin odenen tutar: " << siperisteOdenentutar[i] << endl;
		}

	}
	else {
		cout << "siparisiniz bulunmamaktadir." << endl;
	}

}




