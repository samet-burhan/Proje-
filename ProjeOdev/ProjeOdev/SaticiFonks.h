#pragma once
#include<string>
#include <iostream>
#include "Kullanici.h"
using namespace std;



void Satici::sahipOlunanMallar() {

	if (�r�nSayisi == 0) {
		cout << "urunler bulunmamaktadir.." << endl;

	}
	else {
		for (int i = 0; i < �r�nSayisi; i++) {

			cout << i + 1 << ".urunun adi: " << �r�n[i] << " " << i + 1 << ".urunun miktari: " << �r�nMiktar[i] << " kg " << i + 1 << ".urunun birim fiyati: " << �r�nFiyat[i] << " tl" << endl;

		}
	}

}


string Satici::adDondur() {

	return ad;
}





int Satici::urunSayisiDondur() {
	return �r�nSayisi;
}




void Satici::urunEkleme(string �r�nad, double �r�nMiktar, double �r�nFiyat) {

	this->�r�n[�r�nSayisi] = �r�nad;
	this->�r�nMiktar[�r�nSayisi] = �r�nMiktar;
	this->�r�nFiyat[�r�nSayisi] = �r�nFiyat;
	�r�nSayisi++;

}

void Satici::satilacakUrunG�sterme(int urunK) {

	cout << "�r�n ad: " << �r�n[urunK] << " �r�n miktar: " << �r�nMiktar[urunK] << " kg " << " �r�n birim fiyat: " << �r�nFiyat[urunK] << " tl" << endl;
}

double Satici::getUrunFiyat(int urunK) {

	return �r�nFiyat[urunK];
}

double Satici::getUrunMiktar(int urunK) {
	return �r�nMiktar[urunK];
}

//urun miktarindan ticaret yap�lm�s ise ona uygun azalma gerceklestirildi
void Satici::setUrunMiktar(double miktar, int urunK) {

	this->�r�nMiktar[urunK] = this->�r�nMiktar[urunK] - miktar;
}

string Satici::getUrunAd(int urunK) {

	return �r�n[urunK];
}

//urun satilmissa ona gore para artt�r�lmas� icin set islemi gerceklestirildi
void Satici::setPara(double para) {

	this->para = this->para + para;
}
