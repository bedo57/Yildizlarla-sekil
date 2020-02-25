// Bedirhan Yılmaz
// Bu c++ projesi ekrana yıldızlar ile şekil bastırmamızı sağlar

#include <iostream>

using namespace std;

void DüzÜçgen(int deger) 
{
    int yarı = deger /2;
    for (int i = 1; i <= deger; --yarı) 
    {
        for (int j = 0; j < yarı; ++j)
        {
            cout << " ";
        }
        for(int j=0; j<i; ++j)
        {
            cout << "*";
        }
        i = i + 2;
        cout << endl;
    }
}

void TersÜçgen(int deger)
{
    int a = 0;
    int yarı = deger / 2;
    for (int i = 0; i < deger; ++yarı)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << " ";
        }
        for (int j = deger; j > i; --j)
        {
            cout << "*";
        }
        a = a + 1;
        i = i + 2;
        cout << endl;
    }
}

void Elmas(int deger)
{
    int a = 0;
    int yarı = deger / 2;

    for (int i = 1; i <= deger; --yarı)
    {
        for (int j = 0; j < yarı; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        i = i + 2;
        cout << endl;
    }
    for (int i = 0; i < deger; ++yarı)
    {
        for (int j = 0; j < a; ++j)
        {
            cout << " ";
        }
        for (int j = deger; j > i; --j)
        {
            cout << "*";
        }
        a = a + 1;
        i = i + 2;
        cout << endl;
    }
}

int main()
{
    int a = 0;
    int deger = 0;
    cout << "\t\tHOSGELDINIZ" << endl;
    cout << "Lutfen cizmek istediginiz sekli seciniz\n"
        "Duz ucgen sekli icin 1\n"
        "Ters ucgen sekli icin 2\n"
        "Elmas sekli icin 3 basiniz => ";
    cin >> a;

    if (a == 1)
    {
        cout << "Lutfen 3-15 arasinada tek sayi giriniz:" << endl;
        cin >> deger;
        DüzÜçgen(deger);
    }
    if (a == 2)
    {
        cout << "Lutfen 3-15 arasinada tek sayi giriniz:" << endl;
        cin >> deger;
        TersÜçgen(deger);
    }
    if (a == 3)
    {
        cout << "Lutfen 3-15 arasinada tek sayi giriniz:" << endl;
        cin >> deger;
        Elmas(deger);
    }
    return 0;
}