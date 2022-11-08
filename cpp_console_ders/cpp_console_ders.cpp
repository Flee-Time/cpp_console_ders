/*
Koray Bilir - 222203533 - Teknik Bilimler MYO - Bilgisayar Programciligi
*/
#include <iostream>
#include <string>

#define PI 3.14159
#define nl '\n'

int main()
{
	/*
	std::cout << "\n\n Veri Tipleri :\n";
	std::cout << "-----------------------------------------------------\n";
	std::cout << " Uzunlugu( Char) dir :			" << sizeof(char) << " bytes\n";
	std::cout << " Uzunlugu( Short) dir :			" << sizeof(short) << " bytes\n";
	std::cout << " Uzunlugu( Int) dir :			" << sizeof(int) << " bytes\n";
	std::cout << " Uzunlugu( Long) dir :			" << sizeof(long) << " bytes\n";
	std::cout << " Uzunlugu( Long Long) dir :		" << sizeof(long long) << " bytes\n";
	std::cout << " Uzunlugu( Float) dir :			" << sizeof(float) << " bytes\n";
	std::cout << " Uzunlugu( Double) dir :		" << sizeof(double) << " bytes\n";
	std::cout << " Uzunlugu( Long_Double) dir :		" << sizeof(long double) << " bytes\n";
	std::cout << " Uzunlugu( Bool) dir :			" << sizeof(bool) << " bytes\n";
	std::cout << "\n\n";

	//-------------------------------------------------------------------------------------------------

	std::cout << "\n\n Veri Tiplerinin Alt Ve Ust Sinirleri :\n";
	std::cout << "---------------------------------------------------------------------\n";
	std::cout << " Maximum( Int) :			" << INT_MAX << "\n";
	std::cout << " Minimum( Int) :			" << INT_MIN << "\n";
	std::cout << " Maximum( Unsigned Int) :		" << UINT_MAX << "\n";
	std::cout << " Maximum( Long Long) :			" << LLONG_MAX << "\n";
	std::cout << " Maximum( Long Long) :			" << LLONG_MIN << "\n";
	std::cout << " Maximum( Unsigned Long Long) :		" << ULLONG_MAX << "\n";
	std::cout << " Bits( Char) :				" << CHAR_BIT << "\n";
	std::cout << " Maximum( Char) :			" << CHAR_MAX << "\n";
	std::cout << " Minimum( Char) :			" << CHAR_MIN << "\n";
	std::cout << " Maximum( Signed Char) :		" << SCHAR_MAX << "\n";
	std::cout << " Minimum( Signed Char) :		" << SCHAR_MIN << "\n";
	std::cout << " Maximum( Unsigned Char) :		" << UCHAR_MAX << "\n";
	std::cout << " Maximum( Short) :			" << SHRT_MAX << "\n";
	std::cout << " Minimum( Short) :			" << SHRT_MIN << "\n";
	std::cout << " Maximum( Unsigned Short) :		" << USHRT_MAX << "\n";
	std::cout << "\n\n";

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

	std::cout << "\n\n Degerler :\n";
	std::cout << "---------------------------------------------------------------------\n";
	std::cout << " Cinsiyeti :		" << cinsiyet << std::endl;
	std::cout << " Evlimi :		" << evlimi << std::endl;
	std::cout << " Cocuk sayisi :		" << cocuksayisi << std::endl;
	std::cout << " Ise giris yili :	" << girisyili << std::endl;
	std::cout << " Yillik ucreti :	" << yillikucret << std::endl;
	std::cout << " Yukseklik :		" << yukseklik << std::endl;
	std::cout << " Oran :			" << oran << std::endl;
	std::cout << " Kesintiler :		" << toplamkesinti << std::endl;
	std::cout << " Deger :		" << deger << std::endl;

	//------------------------------------------------------------------------------------

	int u = 8;
	int h = 9;
	int x = 6;
	x = (u > h) ? h : u; //if int u is lesser than int h,than u is passed; if int h is higher than int u, than h is passed.
	std::cout << x;
	return 0;

	//-------------------------------------------------------------------------------------

	double r = 5.0;
	double circle;
	circle = 2 * PI * r;
	std::cout << circle;
	std::cout << nl;
	return 0;
	
	//-------------------------------------------------------------------------------------

	int a, b;
	a = 10;
	b = 4;
	a = b;
	b = 7;
	std::cout << "a : ";
	std::cout << a << nl;
	std::cout << "b : ";
	std::cout << b << nl;
	return 0;

	//--------------------------------------------------------------------------------------

	int a, b = 3;
	a = b;
	a += 2;
	std::cout << a;
	return 0;
	
	//--------------------------------------------------------------------------------------

	int a, b, c;
	a = 2;
	b = 7;
	c = (a > b) ? a : b;
	std::cout << c;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	double yaricap, alan;
	std::cout << "Lutfen dairenin yaricapini giriniz: ";
	std::cin >> yaricap;
	alan = (yaricap * yaricap) * PI;
	std::cout << yaricap << " li dairenin alani = " << alan << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int x = 5;
	int y = 10;
	std::cout << "x = " << x << nl;
	std::cout << "y = " << y << nl;
	std::cout << "++x  * --y = " << (++x * --y) << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------

	int sayi1, sayi2, sayi3;
	int toplam;
	std::cout << "Uc tane sayi giriniz: ";
	std::cin >> sayi1 >> sayi2 >> sayi3;
	toplam = sayi1 + sayi2 + sayi3;
	std::cout << "Toplam: " << toplam << nl;
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int sayi;
	std::cout << "Bir sayi giriniz: ";
	std::cin >> sayi;
	std::cout << (sayi % 2 == 1 ? "Tek" : "Cift");
	return 0;
	
	//--------------------------------------------------------------------------------------
	
	int dersnot;
	std::cout << "Not'u giriniz: ";
	std::cin >> dersnot;
	if (dersnot >= 50) 
	{
		std::cout << "Gectiniz!";
	}
	else
	{
		std::cout << "Butten alinan not: ";
		std::cin >> dersnot;
		if (dersnot >= 50)
		{
			std::cout << "Gectiniz!";
		}
		else
		{
			std::cout << "Kaldiniz!";
		}
	}
	
	//---------------------------------------------------------------------------------------

	int dersnot;
	std::cout << "Not'u giriniz: ";
	std::cin >> dersnot;
	if (dersnot > 50)
	{
		std::cout << "Gectiniz!";
	}
	if (dersnot < 50)
	{
		std::cout << "Kaldiniz!";
	}
	if (dersnot == 50)
	{
		std::cout << "Zar zor gectiniz!";
	}
	
	//---------------------------------------------------------------------------------------

baslangic:
	double s1, s2, secim, sonuc;
	std::cout << "1. sayiyi giriniz :\n";
	std::cin >> s1;
	std::cout << "2. sayiyi giriniz :\n";
	std::cin >> s2;
	std::cout << "Seciminizi giriniz :\n 1- TOPLA\n 2- CIKAR\n 3-CARP\n 4-BOL ";
	std::cin >> secim;
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
		std::cout << "Yanlis secim yaptiniz programi tekrar aciniz\n";
		goto baslangic;
	}
	std::cout << "Sonuc :" << sonuc;
	std::cout << "\nProgramimiza tekrar bekleriz";
	*/
	//--------------------------------------------------------------------------------------

	int derece;
	std::string goruntule;
	std::cout << "Lutfen 0 ve 100 arasinda derece giriniz: ";
	std::cin >> derece;

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
	std::cout << goruntule << nl;
	return 0;

	//--------------------------------------------------------------------------------------
}

