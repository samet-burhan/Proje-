#pragma once


#include<string>
using namespace std;


static int saticiSayisi = 0;
static int aliciSayisi = 0;

class Admin {
private:
	string kullancýAdi, password;
	string *OnaylanacakSaticiAd, *OnaylanacakAliciAd, *OnaylanacakSaticiSoyad, *OnaylanacakAliciSoyad, *OnaylacakSaticiTc, *OnaylanacaAliciTc;
	string *OnaylanacakUrunAd;
	double *OnaylanacakUrunMiktar, *OnaylanacakUrunFiyat, *OnaylanacakPara;
	int OnaylanacakSaticiSayisi, OnaylanacakAliciSayisi;
	int *OnaylanacakSaticiID, *OnaylancakAliciID;


public:
	Admin() {
		kullancýAdi = "admin";
		password = "admin";
		OnaylanacakSaticiID = new int[20];
		OnaylancakAliciID = new int[20];
		OnaylanacakSaticiAd = new string[20];
		OnaylanacakAliciAd = new string[20];
		OnaylanacakSaticiSoyad = new string[20];
		OnaylanacakAliciSoyad = new string[20];
		OnaylacakSaticiTc = new string[20];
		OnaylanacaAliciTc = new string[20];
		OnaylanacakUrunAd = new string[20];
		OnaylanacakUrunMiktar = new double[20];
		OnaylanacakUrunFiyat = new double[20];
		OnaylanacakPara = new double[20];
		OnaylanacakSaticiSayisi = 0;
		OnaylanacakAliciSayisi = 0;

	}


	string kullanciAdDondur();
	void OnaylacakSaticiFonk(string ad, string soyad, string tc, string urunad, double urunmiktar, double urunFiyat, int saticiId);
	void OnaylanacakAliciFonk(string ad, string soyad, string tc, double para, int AliciId);

	void OnaylanacakSaticiGoster();
	void onaylanacakAliciGoster();
	string parolaDondur();

	int onaylanacakSaticiSayiDondur();
	int onaylanacakAliciSayiDondur();

	int onaylanacakSaticiID(int secimSatici);
	int onaylanacakAliciID(int secimAlici);

	string getkUrunAd(int secimSatici);
	double  getUrunMiktar(int secimSatici);
	double getUrunFiyat(int secimSatici);


	double getPara(int secimAlici);

	void SetOnaySaticiFonk(int secimSatici);
	void SetOnayAliciFonk(int secimAlici);

};





class Kullanicilar {

protected:
	string ad, soyad, kullancýAdi, password, Email, adres, TC_KimlikNo, telefon;
	double para;

public:
	void kayit(string ad, string soyad, string kullancýAdi, string password, string Email, string adres, string   Tc_KimlikNo, string   telefon);
	string KullaniciAdDondur();
	string passWordDondur();
	string adDondur();
	string soyadDondur();
	string TcDondur();
	void bilgiGoster();

	double paraDondur();
};

class Alici :public Kullanicilar {
private:
	string *siparisEdilenUrun;
	double *siparisEdilenUrunMiktar, *siperisteOdenentutar;
	int siparisSayisi;


public:
	Alici() {
		para = 0;
		siparisEdilenUrun = new string[20];
		siparisEdilenUrunMiktar = new double[20];
		siperisteOdenentutar = new double[20];
		siparisSayisi = 0;

	}
	void paraEkleme(double para);
	void setPara(double para);
	void siparisEdilenlerEkleme(string alinanUrunAd, double alinanmiktar, double odenenTutar);
	void siparislerGosterme();
};


class Satici :public Kullanicilar {
private:
	string *ürün;
	double  *ürünFiyat, *ürünMiktar;
	int ürünSayisi;

public:
	Satici() {
		ürün = new string[20];
		ürünFiyat = new double[20];
		ürünMiktar = new double[20];
		ürünSayisi = 0;
		para = 0;
	};
	void sahipOlunanMallar();
	string adDondur();

	int urunSayisiDondur();

	void urunEkleme(string ürünad, double ürünMiktar, double ürünFiyat);
	void satilacakUrunGösterme(int urunK);

	string getUrunAd(int urunK);
	double getUrunMiktar(int urunK);
	double getUrunFiyat(int urunK);

	void setUrunMiktar(double miktar, int urunK);
	void setPara(double para);





};
