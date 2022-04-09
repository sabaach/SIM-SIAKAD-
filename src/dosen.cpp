#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen, int pendidikan)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(int pendidikan)
{
	this->pendidikan = pendidikan;
}
std::string dosen::getNPP()
{
	return this->npp;
}

std::string dosen::getDepartemen()
{
	return this->departemen;
}

int dosen::getPendidikan()
{
	return this->pendidikan;
}

