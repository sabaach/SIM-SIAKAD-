#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	start:
    cout << "Selamat datang di laman administrator" << endl << endl;
    cout << "Silahkan login dengan username dan password" << endl;
	cout << "*Hint : " << endl; 
	cout << "usernamenya : syafrie bachtiar" << endl; 
	cout << "passwordnya : bachtiargokil123" << endl;
    string username,password;
	getline (cin, username);
    getline (cin, password);

    if (username == "syafrie bachtiar" && password == "bachtiargokil123"){
		while(1) {
		cout << endl;
		cout << "Selamat datang di Universitas Teknologi Sabach" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Orang" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Orang" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1: //Tambah Mahasiswa
				int jumlah_mahasiswa;
				cout << "Masukkan jumlah mahasiswa yang ingin ditambah" << endl;
				cin >> jumlah_mahasiswa;

				for (int i = 1; i <= jumlah_mahasiswa; i++){
					string id,nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					cout << "Masukkan Id Mahasiswa" << endl;
					cin >> id;
					cout << "Masukkan Nama Mahasiswa" << endl;
					cin >> nama;
					cout << "Masukkan NRP Mahasiswa" << endl;
					cin >> nrp;
					cout << "Masukkan Departemen Mahasiswa" << endl;
					cin >> departemen;
					cout << "Masukkan tanggal lahir mahasiswa" << endl;
					cin >> dd; 
					cout << "Masukkan bulan lahir mahasiswa" << endl;
					cin >> mm;
					cout << "Masukkan tahun lahir mahasiswa" << endl;
					cin >> yy;
					cout << "Masukkan tahun masuk mahasiswa" << endl;
					cin >> tahunmasuk;

					mahasiswa mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mahasiswa);
				}
				break;

			case 2: //Tambah Dosen
				int jumlah_dosen;
				cout << "Masukkan jumlah dosen" << endl;
				cin >>  jumlah_dosen;

				for (int i = 1; i <= jumlah_dosen; i++){
					string id, nama, npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan Id dosen" << endl;
					cin >> id;
					cout << "Masukkan Nama dosen" << endl;
					cin >> nama;
					cout << "Masukkan NPP dosen" << endl;
					cin >> npp;
					cout << "Masukkan Departemen dosen" << endl;
					cin >> departemen;
					cout << "Masukkan tanggal lahir dosen" << endl;
					cin >> dd; 
					cout << "Masukkan bulan lahir dosen" << endl;
					cin >> mm;
					cout << "Masukkan tahun lahir dosen" << endl;
					cin >> yy;
					cout << "Masukkan pendidikan dosen" << endl;
					cin >> pendidikan;

					dosen dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dosen);
				}
				break;

			case 3: //Tambah Tenaga Kependidikan
				int jumlah_tenagakependidikan;
				cout << "Masukkan jumlah tenaga kependidikan" << endl;
				cin >>  jumlah_tenagakependidikan;

				for (int i = 1; i <= jumlah_tenagakependidikan; i++){
					string id, nama, npp, unit;
					int dd, mm, yy;
					cout << "Masukkan Id tendik" << endl;
					cin >> id;
					cout << "Masukkan Nama tendik" << endl;
					cin >> nama;
					cout << "Masukkan NPP tendik" << endl;
					cin >> npp;
					cout << "Masukkan Unit tendik" << endl;
					cin >> unit;
					cout << "Masukkan tanggal lahir tendik" << endl;
					cin >> dd; 
					cout << "Masukkan bulan lahir tendik" << endl;
					cin >> mm;
					cout << "Masukkan tahun lahir tendik" << endl;
					cin >> yy;

					tendik tendik(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tendik);
				}
				break;
			case 4: //Tampilkan Semua Mahasiswa
			if (recMhs.size() > 0)
			{
				cout << "Berikut adalah data Mahasiswa yang telah ditambahkan" << endl << endl;
				for (unsigned int i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "Tanggal lahir : " << recMhs[i].getTglLahir();
						cout << "/" << recMhs[i].getBulanLahir();
						cout << "/" << recMhs[i].getTahunLahir() << endl;
						cout << "NRP Mahasiswa : " << recMhs[i].getNRP() << endl;
						cout << "Departemen Mahasiswa: " << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk Mahasiswa: " << recMhs[i].getTahunMasuk() << endl << endl;
					}
			}
				break;
			case 5: //Tampilkan Semua Dosen
			if (recDosen.size() > 0)
			{
				cout << "Berikut adalah data dosen yang telah ditambahkan" << endl << endl;
				for (unsigned int i = 0; i < recDosen.size(); i++)
				{
					cout << "Nama: " << recDosen[i].getNama() << endl;
					cout << "Tanggal lahir : " << recDosen[i].getTglLahir();
					cout << "/" << recDosen[i].getBulanLahir();
					cout << "/" << recDosen[i].getTahunLahir() << endl;
					cout << "NPP Dosen : " << recDosen[i].getNPP() << endl;
					cout << "Departemen Dosen: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan Dosen: " << recDosen[i].getPendidikan() << endl << endl;
				}
			}
				break;
			case 6: //Tampilkan Semua Tenaga Kependidikan
			if (recTendik.size() > 0)
			{
				cout << "Berikut adalah data Tenaga Kependidikan yang telah ditambahkan" << endl << endl;
				for (unsigned int i = 0; i < recTendik.size(); i++)
				{
					cout << "Nama: " << recTendik[i].getNama() << endl;
					cout << "Tanggal lahir : " << recTendik[i].getTglLahir();
					cout << "/" << recTendik[i].getBulanLahir();
					cout << "/" << recTendik[i].getTahunLahir() << endl;
					cout << "NPP Tendik : " << recTendik[i].getNPP() << endl;
					cout << "Unit Tendik: " << recTendik[i].getUnit() << endl << endl;
				}
			}
				break;
			default:
			cout << "Inputan salah silahkan memasukkan inputan dengan baik dan benar" << endl;
				break;
		}
	}
       return 0;
	}
    else { 
		cout << "Login GAGAL" << endl << endl;
		cout << "silahkan coba lagi" << endl; 
		goto start;}

    cin.get();
    return 0;
}
