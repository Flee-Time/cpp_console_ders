/*
Koray Bilir - 222203533 - Teknik Bilimler MYO - Bilgisayar Programciligi
*/
#include <iostream>
#include <string>

#define PI 3.14159
#define nl '\n'
using namespace std;

int main()
{
	/*
	cout << "\n\n Veri Tipleri :\n";
	cout << "-----------------------------------------------------\n";
	cout << " Uzunlugu( Char) dir :			" << sizeof(char) << " bytes\n";
	cout << " Uzunlugu( Short) dir :			" << sizeof(short) << " bytes\n";
	cout << " Uzunlugu( Int) dir :			" << sizeof(int) << " bytes\n";
	cout << " Uzunlugu( Long) dir :			" << sizeof(long) << " bytes\n";
	cout << " Uzunlugu( Long Long) dir :		" << sizeof(long long) << " bytes\n";
	cout << " Uzunlugu( Float) dir :			" << sizeof(float) << " bytes\n";
	cout << " Uzunlugu( Double) dir :		" << sizeof(double) << " bytes\n";
	cout << " Uzunlugu( Long_Double) dir :		" << sizeof(long double) << " bytes\n";
	cout << " Uzunlugu( Bool) dir :			" << sizeof(bool) << " bytes\n";
	cout << "\n\n";

	//-------------------------------------------------------------------------------------------------

	cout << "\n\n Veri Tiplerinin Alt Ve Ust Sinirleri :\n";
	cout << "---------------------------------------------------------------------\n";
	cout << " Maximum( Int) :			" << INT_MAX << "\n";
	cout << " Minimum( Int) :			" << INT_MIN << "\n";
	cout << " Maximum( Unsigned Int) :		" << UINT_MAX << "\n";
	cout << " Maximum( Long Long) :			" << LLONG_MAX << "\n";
	cout << " Maximum( Long Long) :			" << LLONG_MIN << "\n";
	cout << " Maximum( Unsigned Long Long) :		" << ULLONG_MAX << "\n";
	cout << " Bits( Char) :				" << CHAR_BIT << "\n";
	cout << " Maximum( Char) :			" << CHAR_MAX << "\n";
	cout << " Minimum( Char) :			" << CHAR_MIN << "\n";
	cout << " Maximum( Signed Char) :		" << SCHAR_MAX << "\n";
	cout << " Minimum( Signed Char) :		" << SCHAR_MIN << "\n";
	cout << " Maximum( Unsigned Char) :		" << UCHAR_MAX << "\n";
	cout << " Maximum( Short) :			" << SHRT_MAX << "\n";
	cout << " Minimum( Short) :			" << SHRT_MIN << "\n";
	cout << " Maximum( Unsigned Short) :		" << USHRT_MAX << "\n";
	cout << "\n\n";

	//-------------------------------------------------------------------------------------------------

	char cinsiyet = 'K';
	bool evlimi = true;
	unsigned short cocuksayisi = 3;
	short girisyili = 2010;
	unsigned int yillikucret = 1800000;
	double yukseklik = 79.48;
	float oran = 4.69f;
	long toplamkesinti = 12047235L;
	long long deger = 995324987LL;

	cout << "\n\n Degerler :\n";
	cout << "---------------------------------------------------------------------\n";
	cout << " Cinsiyeti :		" << cinsiyet << endl;
	cout << " Evlimi :		" << evlimi << endl;
	cout << " Cocuk sayisi :		" << cocuksayisi << endl;
	cout << " Ise giris yili :	" << girisyili << endl;
	cout << " Yillik ucreti :	" << yillikucret << endl;
	cout << " Yukseklik :		" << yukseklik << endl;
	cout << " Oran :			" << oran << endl;
	cout << " Kesintiler :		" << toplamkesinti << endl;
	cout << " Deger :		" << deger << endl;

	//------------------------------------------------------------------------------------

	int u = 8;
	int h = 9;
	int x = 6;
	x = (u > h) ? h : u; //if int u is lesser than int h,than u is passed; if int h is higher than int u, than h is passed.
	cout << x;
	return 0;

	//-------------------------------------------------------------------------------------

	double r = 5.0;
	double circle;
	circle = 2 * PI * r;
	cout << circle;
	cout << nl;
	return 0;
	
	//-------------------------------------------------------------------------------------

	int a, b;
	a = 10;
	b = 4;
	a = b;
	b = 7;
	cout << "a : ";
	cout << a << nl;
	cout << "b : ";
	cout << b << nl;
	return 0;

	//--------------------------------------------------------------------------------------

	int a, b = 3;
	a = b;
	a += 2;
	cout << a;
	return 0;
	
	//--------------------------------------------------------------------------------------

	int a, b, c;
	a = 2;
	b = 7;
	c = (a > b) ? a : b;
	cout << c;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	double yaricap, alan;
	cout << "Lutfen dairenin yaricapini giriniz: ";
	cin >> yaricap;
	alan = (yaricap * yaricap) * PI;
	cout << yaricap << " li dairenin alani = " << alan << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int x = 5;
	int y = 10;
	cout << "x = " << x << nl;
	cout << "y = " << y << nl;
	cout << "++x  * --y = " << (++x * --y) << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------

	int sayi1, sayi2, sayi3;
	int toplam;
	cout << "Uc tane sayi giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;
	toplam = sayi1 + sayi2 + sayi3;
	cout << "Toplam: " << toplam << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	cout << (sayi % 2 == 1 ? "Tek" : "Cift");
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int dersnot;
	cout << "Not'u giriniz: ";
	cin >> dersnot;
	if (dersnot >= 50) 
	{
		cout << "Gectiniz!";
	}
	else
	{
		cout << "Butten alinan not: ";
		cin >> dersnot;
		if (dersnot >= 50)
		{
			cout << "Gectiniz!";
		}
		else
		{
			cout << "Kaldiniz!";
		}
	}
	
	//---------------------------------------------------------------------------------------

	int dersnot;
	cout << "Not'u giriniz: ";
	cin >> dersnot;
	if (dersnot > 50)
	{
		cout << "Gectiniz!";
	}
	if (dersnot < 50)
	{
		cout << "Kaldiniz!";
	}
	if (dersnot == 50)
	{
		cout << "Zar zor gectiniz!";
	}
	
	//---------------------------------------------------------------------------------------

baslangic:
	double s1, s2, secim, sonuc;
	cout << "1. sayiyi giriniz :\n";
	cin >> s1;
	cout << "2. sayiyi giriniz :\n";
	cin >> s2;
	cout << "Seciminizi giriniz :\n 1- TOPLA\n 2- CIKAR\n 3-CARP\n 4-BOL ";
	cin >> secim;
	if (secim == 1)
	{
		sonuc = s1 + s2;
	}
	else if (secim == 2)
	{
		sonuc = s1 - s2;
	}
	else if (secim == 3)
	{
		sonuc = s1 * s2;
	}
	else if (secim == 4)
	{
		sonuc = s1 / s2;
	}
	else
	{
		cout << "Yanlis secim yaptiniz programi tekrar aciniz\n";
		goto baslangic;
	}
	cout << "Sonuc :" << sonuc;
	cout << "\nProgramimiza tekrar bekleriz";
	
	//--------------------------------------------------------------------------------------

	int derece;
	string goruntule;
	cout << "Lutfen 0 ve 100 arasinda derece giriniz: ";
	cin >> derece;

	if (derece < 0 || derece > 100)
	{
		goruntule = "Gecersiz not.";
	}
	else if (derece <= 50)
	{
		goruntule = "Dusuk.";
	}
	else if (derece <= 70)
	{
		goruntule = "Orta.";
	}
	else if (derece <= 100)
	{
		goruntule = "Iyi.";
	}
	cout << goruntule << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------

	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	if (sayi % 2 == 1)
	{
		cout << "tek";
	}
	else
	{
		cout << "cift";
	}
	*/
	//--------------------------------------------------------------------------------------

	double birincisayi, buyuksayi, ikincisayi, ucuncusayi;
	cout << "Birinci sayiyi giriniz:\n";
	cin >> birincisayi;
	buyuksayi = birincisayi;
	cout << "Ikinci sayiyi giriniz:\n";
	cin >> ikincisayi;
	if (ikincisayi > buyuksayi)
	{
		buyuksayi = ikincisayi;
	}
	cout << "Ucununcu sayiyi giriniz:\n";
	cin >> ucuncusayi;
	if (ucuncusayi > buyuksayi)
	{
		buyuksayi = ucuncusayi;
	}
	cout << "Girilen en buyuk sayi = " << buyuksayi;
}

