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
