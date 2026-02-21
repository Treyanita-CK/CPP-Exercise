#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;

    // menu kedai minuman
    cout << "================================" << endl;
    cout << "Selamat datang di kedai minuman!" << endl;
    cout << "Silakan pilih minuman yang ingin Anda pesan:" << endl;
    cout << "1. Kopi" << endl;
    cout << "2. Teh" << endl;
    cout << "3. Jus" << endl;
    cout << "4. Air Mineral" << endl;
    cout << "5. Tambahan Topping Minuman" << endl;
    cout << "6. Keluar" << endl;

    cout << "Masukkan pilihan Anda (1-6): ";
    cin >> choice;

    while (!(cin.good()) || choice < 1 || choice > 6) {
        cout << "Input tidak valid. Silakan masukkan angka antara 1 dan 6: ";
        cin.clear(); // membersihkan error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // mengabaikan input yang salah
        cin >> choice;

        if (choice == 6) {
            cout << "Terima kasih telah memesan di kedai minuman kami!" << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Anda memesan Kopi." << endl;
                break;
            case 2:
                cout << "Anda memesan Teh." << endl;
                break;
            case 3:
                cout << "Anda memesan Jus." << endl;
                break;
            case 4:
                cout << "Anda memesan Air Mineral." << endl;
                break;
            case 5:
                cout << "Anda memilih Tambahan Topping Minuman." << endl;
                break;
        }
        
    }


}