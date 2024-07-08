#include <iostream>
using namespace std;




class MasukUniversitas {
private: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;

public:
	string Jalur;
	int uangPendaftaran;
	int uangBangunan;
	int totalBiaya;
	MasukUniversitas(int pJalur) :
		Jalur(pJalur)
		uangPendaftaran(pUangPendaftaran)
		uangSemesterPertama(pUangSemester)
		uangBangunan(pUangBangunan)
		totalBiaya(pTotalBiaya)

	{
		cout << "masuk jalur apa" << Jalur << "\n" << endl;
	}

	// isi nilai default variable yang dibutuhkan di bawah ini 
}

virtual void namaJalurMasuk() {
	cout << "SNBP" << endl;
	cout << "SNBT" << endl;

	return;
}
// isi disini dengan fungsi virtual yang dibutuhkan



void setUangPendaftaran(int nilai) {
	this->uangPendaftaran = nilai;
}
float getUangPendaftaran() {
	return uangPendaftaran;
}
// isi setter dan getter variable yang dibutuhkan di bawah ini

void setUangSemesterPertama(int nilai) {
	this->uangSemesterPertama = nilai;
}
float getuangSemesterPertama() {
	return uangSemesterPertama;
}
void setUangBangunan(int nilai) {
	this->uangBangunan = nilai;
}
float getSUangBangunan() {
	return uangBangunan;

};
class SNBT : virtual public MasukUniversitas {
public:
	SNBT(string pMasukUniversitas) :
		uangPendaftaran(pUangPendaftaran)
		uangSemesterPertama(pUangSemesterPertama)
		uangBangunan(pUangBangunan)
		totalBiaya(pTotalBiaya)

	{
		cout << "Jalur Tes"
	}



	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
	SNBP(string pMasukUniversitas) :
		uangPendaftaran(pUangPendaftaran)
		uangSemesterPertama(pUangSemesterPertama)
		uangBangunan(pUangBangunan)
		totalBiaya(pTotalBiaya)

	{
		cout << "Jalur Raport"
	}
};
int main() {
	if (true) {
		cout << "\n 1. Jalur snbt" << endl;
		cout << "\n 2. Jalur snbp" << endl;
		cout << "\n 3. TotalBiaya" << endl;
	}
	SNBT;
	SNBP;

	return 0;
}

