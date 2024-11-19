#ifndef CPARKING_H
#define CPARKING_H

#include "cCar.h"

class cParking
{
	private:
	cCar *carList;
	int *enterHour;
	int *outHour;
	int nro_cars;
	
	public:
	
	cParking();
	void insertCar();
	void findCar(const char* in_Placa);
	void printPark();
	
	
	~cParking();
	
};

#endif