#pragma once
#include<string>
#include <iostream>
#include "Kullanici.h"
using namespace std;



void Satici::sahipOlunanMallar() {

	if (ürünSayisi == 0) {
		cout << "urunler bulunmamaktadir.." << endl;

	}
	else {
		for (int i = 0; i < ürünSayisi; i++) {

			cout << i + 1 << ".urunun adi: " << ürün[i] << " " << i + 1 << ".urunun miktari: " << ürünMiktar[i] << " kg " << i + 1 << ".urunun birim fiyati: " << ürünFiyat[i] << " tl" << endl;

		}
	}

}


string Satici::adDondur() {

	return ad;
}





int Satici::urunSayisiDondur() {
	return ürünSayisi;
}




void Satici::urunEkleme(string ürünad, double ürünMiktar, double ürünFiyat) {

	this->ürün[ürünSayisi] = ürünad;
	this->ürünMiktar[ürünSayisi] = ürünMiktar;
	this->ürünFiyat[ürünSayisi] = ürünFiyat;
	ürünSayisi++;

}

void Satici::satilacakUrunGösterme(int urunK) {

	cout << "ürün ad: " << ürün[urunK] << " ürün miktar: " << ürünMiktar[urunK] << " kg " << " ürün birim fiyat: " << ürünFiyat[urunK] << " tl" << endl;
}

double Satici::getUrunFiyat(int urunK) {

	return ürünFiyat[urunK];
}

double Satici::getUrunMiktar(int urunK) {
	return ürünMiktar[urunK];
}

//urun miktarindan ticaret yapýlmýs ise ona uygun azalma gerceklestirildi
void Satici::setUrunMiktar(double miktar, int urunK) {

	this->ürünMiktar[urunK] = this->ürünMiktar[urunK] - miktar;
}

string Satici::getUrunAd(int urunK) {

	return ürün[urunK];
}

//urun satilmissa ona gore para arttýrýlmasý icin set islemi gerceklestirildi
void Satici::setPara(double para) {

	this->para = this->para + para;
}
