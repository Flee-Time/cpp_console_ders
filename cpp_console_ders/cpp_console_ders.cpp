/*
Koray Bilir - 222203533 - Teknik Bilimler MYO - Bilgisayar Programciligi
*/
#include <iostream>
#include <string>

#define PI 3.14159
#define nl '\n'
using namespace std;

/*
struct bilgi
{
	int boyu, yasi;
	float agirligi;
};

void printmessage()
{
	cout << "Benim fonksiyonum!";
}

double dairealani(double yaricap)
{
	double alan;
	alan = 3.145 * (yaricap * yaricap);
	return alan;
}

long faktoriyel(long x)
{
	if (x > 1)
	{
		return (x * faktoriyel(x - 1));
	}
	else
	{
		return 1;
	}
}

int toplam(int a, int b)
{
	int r;
	r = a + b;
	return(r);
}

long factorial(long a)
{
	if (a > 1)
	{
		return (a * factorial(a - 1));
	}
	else
	{
		return 1;
	}
}

void diziyazdir(int arg[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arg[i] << " ";
	}

	cout << endl;
}

int carpma(int a, int b)
{
	return (a * b);
}

float bolme(float a, float b)
{
	return (a / b);
}

double alan(int yaricap)
{
	return (PI * (yaricap * yaricap));
}

double cevre(int yaricap)
{
	return ((2 * PI) * yaricap);
}

double ortalama(int v, int f)
{
	return (v * 0.4) + (f * 0.6);
}


void bilisim(int x, int y)
{
	x = 20;
	y = 10;
}

bool asal(int sayi)
{
	int sayac = 0;
	for (int i = 2; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			sayac++;
			break;
		}
	}
	if (sayac == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ciftmi(int sayi)
{
	if (sayi % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

struct KISI
{
	char isim[50];
	int yas;
	float maas;
};

void verigoruntule(KISI p)
{
	cout << "Bilgileri Goruntule." << endl;
	cout << "Isim: " << p.isim << endl;
	cout << "Yas: " << p.yas << endl;
	cout << "Maas: " << p.maas << endl;
}
*/

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

	//---------------------------------------------------------------------------------------

	baslangic:
		double sayi;
		cout << "Ogrencinin notunu giriniz =\n";
		cin >> sayi;
		if (sayi >= 0 && sayi < 40)
		{
			cout << "FF Kaldi\n";
		}
		else if (sayi >= 40 && sayi < 60)
		{
			cout << "EE\n";
		}
		else if (sayi >= 60 && sayi < 70)
		{
			cout << "DD\n";
		}
		else if (sayi >= 70 && sayi < 80)
		{
			cout << "CC\n";
		}
		else if (sayi >= 80 && sayi < 90)
		{
			cout << "BB\n";
		}
		else if (sayi >= 90 && sayi <= 100)
		{
			cout << "AA\n";
		}
		else
		{
			cout << "Lutfen 0 ile 100 arasi deger giriniz.\n";
			goto baslangic;
		}
		cout << "| Tekrar Bekleriz |";

	//-----------------------------------------------------------------------------------

	int sayi1;
	int sayi2;
	char islem;
	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;
	cout << "Isleminizi giriniz(+,-,*,/): ";
	cin >> islem;
	switch (islem)
	{
	case '+':
		cout << "Sonuc: " << sayi1 + sayi2;
		break;
	case '-':
		cout << "Sonuc: " << sayi1 - sayi2;
		break;
	case '*':
		cout << "Sonuc: " << sayi1 * sayi2;
		break;
	case '/':
		cout << "Sonuc: " << sayi1 / sayi2;
		break;
	default:
		cout << "Lutfen bir islem giriniz.";
		break;
	}

	//--------------------------------------------------------------------------------------

	int sayi;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	for (int i = 0; i <= sayi; i++)
	{
		cout << "SAYI: " << i << endl;
	}

	//--------------------------------------------------------------------------------------

	int sayi;
	cout << "10'dan kucuk bir sayi giriniz: ";
	cin >> sayi;
	while(sayi < 10) {
		sayi++;
		cout << sayi << endl;
	}

	//-------------------------------------------------------------------------------------

	int i;
	cout << "1 ile 4 arasi bir sayi giriniz: ";
	cin >> i;
	switch (i)
	{
	case 1: cout << "1 girdiniz"; break;
	case 2: cout << "2 girdiniz"; break;
	case 3: cout << "3 girdiniz"; break;
	case 4: cout << "4 girdiniz"; break;
	default: cout << "1 ile 4 ten farkli"; break;
	}

	//--------------------------------------------------------------------------------------

	int toplam = 0, sayac = 1, dersnot, ortalama;
	while (sayac <= 6)
	{
		cout << "Notu giriniz: ";
		cin >> dersnot;
		toplam += dersnot;
		sayac += 1;
	}
	ortalama = toplam / 6;
	cout << "Sinif ortalamasi = " << ortalama << endl;
	return 0;

	//---------------------------------------------------------------------------------------

	int sayi;
	long int faktoriyel = 1;
	cout << "Bir sayi giriniz: ";
	cin >> sayi;
	cout << sayi << " 'in Faktoriyeli: ";
	while (sayi > 1)
	{
		faktoriyel *= sayi--;
	}
	cout << faktoriyel << endl;
	return 0;

	//-----------------------------------------------------------------------------------------

	unsigned long n;
	do
	{
		cout << "Bir sayi giriniz (0'dan 100'e kadar): ";
		cin >> n;
		cout << "Girdiginiz sayi: " << n << endl;
	} while (n != 0);
	return 0;

	//-----------------------------------------------------------------------------------------

	int fac, sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	fac = 1;
	for (int j = 1; j <= sayi; j++)
	{
		fac *= j;
	}
	cout << "Sonuc: \a" << fac;
	return 0;

	//------------------------------------------------------------------------------------------

	int t;
	cout << "veri miktarini gir : ";
	cin >> t;
	double s = 0.0;
	for (int i = 1; i <= t; i++)
	{
		cout << " " << i << ". ci veriyi giriniz: ";
		double x;
		cin >> x;
		s += x;
	}
	double ort;
	if (t > 0)
	{
		ort = s / t;
	}
	else
	{
		ort = 0.0;
	}
	cout << "Ortalama.....: " << ort << endl;;
	return 0;

	//-------------------------------------------------------------------------------------------

	int a[5] = { 2,7,0,3,9 };

	cout << "a(0)= " << a[0] << endl;
	cout << "a(1)= " << a[1] << endl;
	cout << "a(2)= " << a[2] << endl;
	cout << "a(3)= " << a[3] << endl;
	cout << "a(4)= " << a[4] << endl;
	return 0;

	//-------------------------------------------------------------------------------------------

	int a[5] = { 2,7,0,3,9 };

	for (int i = 0; i <= 4; i++)
	{
		cout << "a(" << i << ")= " << a[i] << nl;
	}
	return 0;

	//-------------------------------------------------------------------------------------------

	int enb, a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		enb = a[0];
	}
	for (int i = 1; i < 5; i++)
	{
		if (enb < a[i])
		{
			enb = a[i];
		}
	}
	cout << endl;
	cout << "En Buyuk Sayi= " << enb << endl;
	return 0;

	//------------------------------------------------------------------------------------------

	int enb, sira, dizi[5];

	for (int i = 1; i < 5; i++)
	{
		cout << i << ". Sayiyi Giriniz: ";
		cin >> dizi[i];
	}

	enb = dizi[0];

	for (int i = 1; i < 5; i++)
	{
		if (dizi[i] > enb)
		{
			enb = dizi[i];
			sira = i;
		}
	}

	cout << endl;
	cout << "En Buyuk Sayi= " << enb << endl;
	cout << "Dizideki Sayisi= " << sira << endl;
	return 0;

	//------------------------------------------------------------------------------------------

	int ay, gun, gunTop, ayGunSay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "\n 1 ile 12 arasinda ayi gir: ";
	cin >> ay;
	cout << "\n 1 ile 31 arasinda gunu gir: ";
	cin >> gun;
	gunTop = gun;
	for (int i = 0; i < ay - 1; i++)
	{
		gunTop += ayGunSay[i];
	}
	cout << "Gun sayisi: " << gunTop;
	return 0;
	
	//------------------------------------------------------------------------------------------

	const int I = 3;
	bilgi bil[I];

	for (int  i = 0; i < I; i++)
	{
		cout << "\n Boyu gir: ";
		cin >> bil[i].boyu;
		cout << "\n Yasi gir: ";
		cin >> bil[i].yasi;
		cout << "\n Agirligi gir: ";
		cin >> bil[i].agirligi;
	}
	for (int i = 0; i < I; i++)
	{
		cout << "\n Boyu: " << bil[i].boyu;
		cout << "\n Yasi: " << bil[i].yasi;
		cout << "\n Agirligi: " << bil[i].agirligi;
	}
	return 0;
	
	//------------------------------------------------------------------------------------------
	
	char adi[22], s_adi[22];
	float saat, top_satis, prim, ucret;

	cout << "Ucret Hesabi\n\n";
	cout << "Satis elemaninin adini giriniz: ";
	cin >> adi;
	cout << "Satis elemaninin soyadini giriniz: ";
	cin >> s_adi;
	cout << "Calistigi toplam saati giriniz: ";
	cin >> saat;
	ucret = 50 * (float)saat;
	cout << "Sattigi urunler toplamini giriniz: ";
	cin >> top_satis;
	if (top_satis > 5000)
	{
		prim = 1000;
	}
	else
	{
		prim = 0;
	}
	cout << "\n  Odenecek Ucret \n";
	cout << "\nSatis Elemani: " << adi << "  " << s_adi << endl;
	cout << "\n  Maas Bodrosu: \n";
	cout << "---------------------------- \n";
	cout << "Ucret=  " << ucret << " ve Alacagi Prim= " << prim << endl;
	cout << "Toplam= " << ucret + prim << " TL odenecektir." << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int sayac = 0, toplam = 0, sayilar[5]={11, 5, 23, 4, 54}, elemanSayisi = sizeof(sayilar)/sizeof(sayilar[0]);

	while (sayac < elemanSayisi)
	{
		toplam += sayilar[sayac];
		sayac++;
	}
	cout << toplam << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int sayac = 0, enBuyuk = 0, sayilar[10] = { 5, 55, 49, 87, 63, 18, 72, 26, 45, 74 };

	while (sayac < 10)
	{
		if (sayilar[sayac] > enBuyuk)
		{
			enBuyuk = sayilar[sayac];
		}
		sayac++;
	}

	cout << "En buyuk sayi: " << enBuyuk;
	return 0;
	
	//------------------------------------------------------------------------------------------
	
	printmessage();
	return 0;
	
	//------------------------------------------------------------------------------------------

	long double r, alan = 0;
	r = 3;
	alan = dairealani(r);
	cout << r << " olan " << "dairenin alani " << alan << endl;
	cout << dairealani(12) << endl;

	if (dairealani(r / 2) >= 100)
	{
		cout << "buyuk daire" << endl;
	}

	return 0;
	
	//------------------------------------------------------------------------------------------

	long sayi;
	
	cout << "Tamsayi giriniz: ";
	cin >> sayi;
	cout << sayi << "!=" << faktoriyel(sayi) << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------
	
	int z;
	z = toplam(5, 3);
	cout << "Sonuc: " << z;
	return 0;
	
	//------------------------------------------------------------------------------------------

	long number;
	cout << "Sayi tipini giriniz: ";
	cin >> number;
	cout << number << "!=" << factorial(sayi) << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------
	
	int birincidizi[] = { 5, 10, 15 }, ikincildizi[] = { 2,4,6,8,10 };
	diziyazdir(birincidizi, 3);
	diziyazdir(ikincildizi, 5);
	return 0;
	
	//------------------------------------------------------------------------------------------

	int x = 5, y = 2;
	float n = 5.0f, m = 2.0f;
	cout << carpma(x, y);
	cout << endl;
	cout << bolme(n, m);
	cout << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int r;
	cout << "Yaricap: ";
	cin >> r;
	cout << "Alan: " << alan(r) << endl;
	cout << "Cevre: " << cevre(r);
	
	//------------------------------------------------------------------------------------------
	
	int vize, final;
	cout << "Vize: ";
	cin >> vize;
	cout << "Final: ";
	cin >> final;
	cout << "Ortalama: " << ortalama(vize, final) << endl;
	
	//------------------------------------------------------------------------------------------

	int satis[5][3] = { {700,600,650},{900,800,700},{300,400,350},{500,450,470},{600,500,480} };
	int t;
	cout << "OTOMOBIL SATISLARI TABLOSU :" << endl;
	
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << satis[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i <= 4; i++)
	{
		t = 0;
		for (int j = 0; j <= 2; j++)
		{
			t += satis[i][j];
		}
		cout << "nci marka icin 3 aylik toplam satis= " << t << endl;
	}
	cout << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int satis[5][3] = { {700,600,650},{900,800,700},{300,400,350},{500,450,470},{600,500,480} };
	cout << "SATIS adli tablo: " << endl;

	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cout << satis[i][j] << endl;
		}
		cout << endl;
	}
	return 0;
	
	//------------------------------------------------------------------------------------------

	double x;

	cout << "x: ";
	cin >> x;
	cout << "x=" << x << " Karekoku=" << sqrt(x);
	return 0;
	
	//------------------------------------------------------------------------------------------

	double x, y;

	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	for (; x <= y; x++)
	{
		cout << "x=" << x << "\t Karekoku=" << sqrt(x);
	}
	
	//------------------------------------------------------------------------------------------
	double x, y;

	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	for (; x <= y; x++)
	{
		cout << "x=" << x << "\t" << y << ". kuvveti=" << pow(x, y); << sqrt(x);
	}
	
	//------------------------------------------------------------------------------------------

	int a[2][3], b[2][3], c[2][3];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "a matrisi " << i << "-" << j << ":";
			cin >> a[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "b matrisi " << i << "-" << j << ":";
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << c[i][j] << " ";
		}
	}
	
	//------------------------------------------------------------------------------------------
	
	int a[3][3] = { 5,7,9,0,3,0,7,5,1 }, b[3][3] = { 3,3,1,2,1,3,1,0,0 }, c[3][3], top;
	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			top = 0;
			for (int y = 0; y < 3; y++)
			{
				top += a[i][y] * b[y][x];
			}
			c[i][x] = top;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << c[i][x] << " ";
		}
		cout << endl;
	}

	return 0;
	
	//------------------------------------------------------------------------------------------
	
	int secim;
	double i, j;
	cout << "bir işlem seçiniz:" << endl;
	cout << "1- karekok alma" << endl;
	cout << "2- us alma" << endl;
	cout << "3- e tabanında logaritma" << endl;
	cout << "4- 10 tabanında logaritma" << endl;
	cin >> secim;
	if (secim == 1)
	{
		cout << "taban sayisini giriniz:";
		cin >> i;
		cout << sqrt(i) << endl;
	}
	else if (secim == 2)
	{
		cout << "taban sayisini giriniz:";
		cin >> i;
		cout << "us sayisini giriniz:";
		cin >> j;
		cout << pow(i, j) << endl;
	}
	else if (secim == 3)
	{
		cout << "sayiyi giriniz";
		cin >> i;
		cout << log(i) << endl;
	}
	else if (secim == 4)
	{
		cout << "sayiyi giriniz";
		cin >> i;
		cout << log10(i) << endl;
	}
	else
	{
		cout << "hatali secim yaptiniz";
	}
	return 0;

	//------------------------------------------------------------------------------------------

	int a = 1, b = -10, c = 21;
	float x1, x2, delta;
	delta = b * b - (4 * a * c);
	if (delta > 0.0)
	{
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	}
	else if (delta == 0.0)
	{
		x1 = -b / 2 * a;
		cout << "x1= " << x1 << endl;
	}
	else
	{
		cout << "Gercek kok yoktur." << endl;
	}
	return 0;
	
	//------------------------------------------------------------------------------------------
	
	char harf;
	harf = 'A';
	float decimal = 7.5;
	double pi = 3.14159;
	bool isTrue = false;
	
	//------------------------------------------------------------------------------------------

	char harf;
	harf = 'A';
	int sayi = 100;
	float decimal = 7.5;
	double pi = 3.14159;
	bool isTrue = false;
	cout << sayi << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	double a = 33.09456;
	float b = 11.20;
	int c, d;
	c = (int)a;
	d = (int)b;
	cout << c << ' ' << d;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int x = 10;
	bilisim(x, x);
	cout << x;
	return 0;
	
	//------------------------------------------------------------------------------------------

	int sayi;
	cout << "Sayi : ";
	cin >> sayi;
	if (asal(sayi))
	{
		cout << "Sayi Asal.";
	}
	else
	{
		cout << "Sayi Asal Degil.";
	}
	
	//------------------------------------------------------------------------------------------

	int sayi;
	cout << "Sayi : ";
	cin >> sayi;
	if (ciftmi(sayi))
	{
		cout << "Sayi Cift.";
	}
	else
	{
		cout << "Sayi Tek.";
	}
	
	//------------------------------------------------------------------------------------------

	int sayi, tekAdet = 0, ciftAdet = 0;
	for (int i = 0; i <= 10; i++)
	{
		cout << i << ". Sayi : ";
		cin >> sayi;

		if (ciftmi(sayi))
		{
			ciftAdet++;
		}
		else
		{
			tekAdet++;
		}
	}
	cout << "Girilen Tek Sayilarin Adeti : " << tekAdet << endl;
	cout << "Girilen Cift Sayilarin Adeti : " << ciftAdet << endl;
	
	//------------------------------------------------------------------------------------------
	
	int sayi;
	cout << "Sayi : ";
	cin >> sayi;
	cout << pow(sayi, 3) << endl;
	cout << sqrt(sayi) << endl;
	cout << pow(27, 1.0 / 3.0) << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	KISI p;
	cout << "Isiminiz: ";
	cin.get(p.isim, 50);
	cout << "Yasiniz: ";
	cin >> p.yas;
	cout << "Maasinizi giriniz: ";
	cin >> p.maas;

	verigoruntule(p);
	return 0;
	
	//------------------------------------------------------------------------------------------

	KISI p;
	cout << "Isiminiz: ";
	cin.get(p.isim, 50);
	cout << "Yasiniz: ";
	cin >> p.yas;
	cout << "Maasinizi giriniz: ";
	cin >> p.maas;
	cout << "Bilgileri Goruntule." << endl;
	cout << "Isim: " << p.isim << endl;
	cout << "Yas: " << p.yas << endl;
	cout << "Maas: " << p.maas << endl;
	return 0;
	
	//------------------------------------------------------------------------------------------

	char ad[30], soyad[30], tumad[60];
	cout << "Adiniz: ";
	cin.getline(ad, 30);
	if (strcmp(ad, "Orhan") == 0)
	{
		cout << "Adiniz unlu sair Orhan Veli ile ayni." << endl;
	}
	else
	{
		cout << "Adiniz unlu sair Orhan Veli ile ayni degil." << endl;
	}
	cout << "Soyadiniz: ";
	cin.getline(soyad, 30);
	cout << "Ad ve Soyad: " << tumad << endl;
	*/
	//------------------------------------------------------------------------------------------
}
