#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"
#include <iostream>
using std::ostream;

class Moto : public Veiculo
{
	friend ostream &operator<<( ostream &, const Moto & );
public:
	Moto( );
	Moto( float );
	// Moto( double, double, double, double );
	// Moto( const Moto & );
	// ~Moto();

	
private:

};

#endif // MOTO_H
