#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nik, nama, tempatLahir, tanggalLahir, jenisKelamin, alamat, rt, rw, 
	kelurahan, kecamatan, agama, statusPerkawinan, pekerjaan, kewarganegaraan, golDar, provinsi, kabupaten;

    // Input data
    cout << "Masukkan NIK Anda: ";
    getline(cin, nik);
    cout << "Provinsi: ";
    getline(cin, provinsi);
    cout << "Kabupaten/Kecamatan: ";
    getline(cin, kabupaten);
    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan Tempat/Tgl Lahir Anda: ";
    getline(cin, tempatLahir);
    cout << "Jenis Kelamin: ";
    getline(cin, jenisKelamin);
    cout << "Masukkan Golongan Darah Anda: ";
    getline(cin, golDar);
    cout << "Masukkan Alamat Anda: ";
    getline(cin, alamat);
    cout << "Masukkan RT Anda: ";
    getline(cin, rt);
    cout << "Masukkan RW Anda: ";
    getline(cin, rw);
    cout << "Masukkan Kelurahan/Desa Anda: ";
    getline(cin, kelurahan);
    cout << "Masukkan Kecamatan Anda: ";
    getline(cin, kecamatan);
    cout << "Agama: ";
    getline(cin, agama);
    cout << "Status Perkawinan: ";
    getline(cin, statusPerkawinan);
    cout << "Pekerjaan: ";
    getline(cin, pekerjaan);
    cout << "Kewarganegaraan: ";
    getline(cin, kewarganegaraan);

    // Output hasil
    cout << "\t\t\t\t\tPROVINSI " << provinsi <<endl;
    cout << "\t\t\t\t\tKABUPATEN " << kabupaten <<endl;

    cout << "NIK\t\t  : " << nik << endl;
    cout << "Nama\t\t  : " << nama << endl;
    cout << "Jenis Kelamin\t  : " << jenisKelamin << "\t\t\tGol. Darah  : " << golDar << endl;              
    cout << "Alamat\t\t  : " << alamat << endl;
    cout << "\tRT/RW\t\t\ : " << rt << "/" << rw << endl;
    cout << "\tKel/Desa\t\ : " << kelurahan << endl;
    cout << "\tKecamatan\t\ : " << kecamatan << endl;
    cout << "Agama\t\t  : " << agama << endl;
    cout << "Status Perkawinan : " << statusPerkawinan << endl;
    cout << "Pekerjaan\t  : " << pekerjaan << endl;
    cout << "Kewarganegaraan\t  : " << kewarganegaraan << endl;
    cout << "Berlaku Hingga\t  : SEUMUR HIDUP" << endl;

    cout << "\n---------------------------------------\n";
    cout << "Process exited with return value 0\n";
    cout << "Press any key to continue . . .\n";

    return 0;
}
