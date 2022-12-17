// Create hotel apps with C++ language
// With reservation system, check in, check out, and room status
// pay with cash or credit card
// using array, struct, and pointer

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

// struct
struct data
{
    string nama;
    string alamat;
    string telp;
    string ktp;
    string kamar;
    string tipe;
    int checkin;
    int checkout;
    int total;
    int bayar;
    int kembali;
    string status;
};

// global variable
data *p;
int n;
int i;
int j;
int k;
int l;
int m;
int o;
int pilih;

string Cari;

// function
void deskripsi();
void menu();
void input();
void tampil();
void cari();
void edit();
void hapus();
void bayar();
void laporan();
void keluar();
void gotoxy(int x, int y);

int main()
{
    menu();
    return 0;
}

void deskripsi(){
    //system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
}

void menu()
{
    deskripsi();
    cout << "Pilih : ";
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        input();
        break;
    case 2:
        tampil();
        break;
    case 3:
        cari();
        break;
    case 4:
        edit();
        break;
    case 5:
        hapus();
        break;
    case 6:
        bayar();
        break;
    case 7:
        laporan();
        break;
    case 8:
        keluar();
        break;
    default:
        cout << "Pilihan tidak ada" << endl;
        break;
    }
}

void input()
{
    system("cls");
    deskripsi();
    cout << "Masukkan jumlah data : ";
    cin >> n;
    p = new data[n];
    for (i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Nama : ";
        cin >> p[i].nama;
        cout << "Alamat : ";
        cin >> p[i].alamat;
        cout << "No. Telp : ";
        cin >> p[i].telp;
        cout << "No. KTP : ";
        cin >> p[i].ktp;
        cout << "No. Kamar : ";
        cin >> p[i].kamar;
        cout << "Tipe Kamar : ";
        cin >> p[i].tipe;
        cout << "Check In : ";
        cin >> p[i].checkin;
        cout << "Check Out : ";
        cin >> p[i].checkout;
        cout << "Total : ";
        cin >> p[i].total;
        cout << "Bayar : ";
        cin >> p[i].bayar;
        cout << "Kembali : ";
        cin >> p[i].kembali;
        cout << "Status : ";
        cin >> p[i].status;
        cout << endl;
    }
    menu();
}

void tampil()
{
    system("cls");
    deskripsi();
    cout << "Data yang tersimpan : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Nama       : " << p[i].nama << endl;
        cout << "Alamat     : " << p[i].alamat << endl;
        cout << "No. Telp   : " << p[i].telp << endl;
        cout << "No. KTP    : " << p[i].ktp << endl;
        cout << "No. Kamar  : " << p[i].kamar << endl;
        cout << "Tipe Kamar : " << p[i].tipe << endl;
        cout << "Check In   : " << p[i].checkin << endl;
        cout << "Check Out  : " << p[i].checkout << endl;
        cout << "Total      : " << p[i].total << endl;
        cout << "Bayar      : " << p[i].bayar << endl;
        cout << "Kembali    : " << p[i].kembali << endl;
        cout << "Status     : " << p[i].status << endl;
        cout << endl;
    }
    system("pause");
    system("cls");
    menu();
}

void cari()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan nama yang dicari : ";
    cin >> Cari;
    for (i = 0; i < n; i++)
    {
        if (Cari == p[i].nama)
        {
            cout << "Data ke-" << i + 1 << endl;
            cout << "Nama : " << p[i].nama << endl;
            cout << "Alamat : " << p[i].alamat << endl;
            cout << "No. Telp : " << p[i].telp << endl;
            cout << "No. KTP : " << p[i].ktp << endl;
            cout << "No. Kamar : " << p[i].kamar << endl;
            cout << "Tipe Kamar : " << p[i].tipe << endl;
            cout << "Check In : " << p[i].checkin << endl;
            cout << "Check Out : " << p[i].checkout << endl;
            cout << "Total : " << p[i].total << endl;
            cout << "Bayar : " << p[i].bayar << endl;
            cout << "Kembali : " << p[i].kembali << endl;
            cout << "Status : " << p[i].status << endl;
            cout << endl;
        }
    }
    menu();
}

void edit()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan nama yang akan diedit : ";
    cin >> Cari;
    for (i = 0; i < n; i++)
    {
        if (Cari == p[i].nama)
        {
            cout << "Data ke-" << i + 1 << endl;
            cout << "Nama : ";
            cin >> p[i].nama;
            cout << "Alamat : ";
            cin >> p[i].alamat;
            cout << "No. Telp : ";
            cin >> p[i].telp;
            cout << "No. KTP : ";
            cin >> p[i].ktp;
            cout << "No. Kamar : ";
            cin >> p[i].kamar;
            cout << "Tipe Kamar : ";
            cin >> p[i].tipe;
            cout << "Check In : ";
            cin >> p[i].checkin;
            cout << "Check Out : ";
            cin >> p[i].checkout;
            cout << "Total : ";
            cin >> p[i].total;
            cout << "Bayar : ";
            cin >> p[i].bayar;
            cout << "Kembali : ";
            cin >> p[i].kembali;
            cout << "Status : ";
            cin >> p[i].status;
            cout << endl;
        }
    }
    menu();
}

void hapus()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan nama yang akan dihapus : ";
    cin >> Cari;
    for (i = 0; i < n; i++)
    {
        if (Cari == p[i].nama)
        {
            for (j = i; j < n; j++)
            {
                p[j] = p[j + 1];
            }
            n--;
        }
    }
    menu();
}

void bayar()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan nama yang akan dibayar : ";
    cin >> Cari;
    for (i = 0; i < n; i++)
    {
        if (Cari == p[i].nama)
        {
            cout << "Data ke-" << i + 1 << endl;
            cout << "Nama : " << p[i].nama << endl;
            cout << "Alamat : " << p[i].alamat << endl;
            cout << "No. Telp : " << p[i].telp << endl;
            cout << "No. KTP : " << p[i].ktp << endl;
            cout << "No. Kamar : " << p[i].kamar << endl;
            cout << "Tipe Kamar : " << p[i].tipe << endl;
            cout << "Check In : " << p[i].checkin << endl;
            cout << "Check Out : " << p[i].checkout << endl;
            cout << "Total : " << p[i].total << endl;
            cout << "Bayar : ";
            cin >> p[i].bayar;
            p[i].kembali = p[i].bayar - p[i].total;
            cout << "Kembali : " << p[i].kembali << endl;
            cout << "Status : " << p[i].status << endl;
            cout << endl;
        }
    }
    menu();
}

void laporan()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Masukkan nama yang akan dicari : ";
    cin >> Cari;
    for (i = 0; i < n; i++)
    {
        if (Cari == p[i].nama)
        {
            cout << "Data ke-" << i + 1 << endl;
            cout << "Nama : " << p[i].nama << endl;
            cout << "Alamat : " << p[i].alamat << endl;
            cout << "No. Telp : " << p[i].telp << endl;
            cout << "No. KTP : " << p[i].ktp << endl;
            cout << "No. Kamar : " << p[i].kamar << endl;
            cout << "Tipe Kamar : " << p[i].tipe << endl;
            cout << "Check In : " << p[i].checkin << endl;
            cout << "Check Out : " << p[i].checkout << endl;
            cout << "Total : " << p[i].total << endl;
            cout << "Bayar : " << p[i].bayar << endl;
            cout << "Kembali : " << p[i].kembali << endl;
            cout << "Status : " << p[i].status << endl;
            cout << endl;
        }
    }
    menu();
}

void keluar()
{
    system("cls");
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "||        HOTEL BINTANG 5             ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "||                                    ||" << endl;
    cout << "|| 1. Input Data                      ||" << endl;
    cout << "|| 2. Tampil Data                     ||" << endl;
    cout << "|| 3. Cari Data                       ||" << endl;
    cout << "|| 4. Edit Data                       ||" << endl;
    cout << "|| 5. Hapus Data                      ||" << endl;
    cout << "|| 6. Bayar                           ||" << endl;
    cout << "|| 7. Laporan                         ||" << endl;
    cout << "|| 8. Keluar                          ||" << endl;
    cout << "||                                    ||" << endl;
    cout << "========================================" << endl;
    cout << "Terima Kasih Telah Menggunakan Program Ini" << endl;
    cout << "Tekan Enter Untuk Keluar" << endl;
    cin.get();
    cin.get();
    exit(0);
}





