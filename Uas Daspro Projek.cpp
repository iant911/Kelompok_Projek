/* NAMA KELOMPOK UAS DASPRO : 

  1. WILDAN SEPTIAN
  2. ADY YOGA PRATAMA
  3. SHERLY DIAN TIARA
  4. MAHESA DWI PRAYITNO*/

//SHERLY DIAN TIARA
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> // Untuk menggunakan fungsi setprecision()

using namespace std;

struct Apartment {
    int floor;
    int unitNumber;
    string type;
    double area;
    double price;
    bool sold;
};

// Fungsi untuk membandingkan harga sewa apartemen (untuk sorting)
bool comparePrice(const Apartment& a, const Apartment& b) {
    return a.price > b.price;
}
//  ADY YOGA PRATAMA
// Fungsi untuk menampilkan seluruh data apartemen
void displayApartments(const vector<Apartment>& apartments) {
    cout << "Daftar Apartemen:\n";
    cout << "==================================================================\n";
    cout << "Lantai | No. Unit |   Tipe   |  Luas  |   Harga/Unit   | Terjual |\n";
    cout << "==================================================================\n";
    for (const Apartment& apt : apartments) {
        cout << setw(7) << apt.floor << " |";
        cout << setw(9) << apt.unitNumber << " |";
        cout << setw(9) << apt.type << " |";
        cout << setw(6) << apt.area << " |";
        cout << setw(14) << fixed << setprecision(2) << apt.price << " |";
        cout << setw(8) << (apt.sold ? "Terjual" : "Belum") << " |\n";
    }
    cout << "==================================================================\n";
}

int main() {
    vector<Apartment> apartments;

    // Menambahkan data apartemen
    apartments.push_back({2, 101, "2 Kamar", 75.5, 1200000, true});
    apartments.push_back({4, 302, "3 Kamar", 100.2, 1500000, false});
    apartments.push_back({3, 205, "1 Kamar", 50.0, 800000, true});
    apartments.push_back({1, 407, "Studio", 40.5, 600000, false});
    apartments.push_back({2, 209, "2 Kamar", 70.0, 1100000, false});

    // Menampilkan seluruh data apartemen
    displayApartments(apartments);

// Menampilkan seluruh data apartemen
    displayApartments(apartments);

    //WILDAN SEPTIAN
    // Sorting apartemen berdasarkan harga sewa tertinggi sampai terendah
    sort(apartments.begin(), apartments.end(), comparePrice);

    
    cout << "\nApartemen dengan Harga Sewa Tertinggi sampai Terendah:\n";
    for (const Apartment& apt : apartments) {
        cout << "No. Unit: " << apt.unitNumber << ", Harga Sewa: " << fixed << setprecision(2) << apt.price << endl;
    }

    // Menampilkan nomor unit apartemen yang tersedia (belum terjual)
    cout << "\nNomer Unit Apartemen yang Tersedia (Belum Terjual):\n";
    for (const Apartment& apt : apartments) {
        if (!apt.sold) {
            cout << "No. Unit: " << apt.unitNumber << endl;
        }
    }
