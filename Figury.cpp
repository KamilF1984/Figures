# include "Figury.hpp"
#include <gmock/gmock.h> 
// klasa obraz, ma metode dodaj figure do brazu i po dodaniu dowolnej ilosci fogir
//oblicza poleobrazu,ktore skladalao by sie z sumy wszystkich figur.
void Figura:: Drukuj()
{
//std::cout << Obwod() << std::endl;
std::cout << Pole()  << std::endl;

}

void  Figura:: dodajFigure(Figura *wsk){};
	
double Figura:: obliczPola(){};

double Prostokat:: Pole ()
{
	if (A<0 || B<0) 
		{
			std:: cerr<<  "Error ! Negative Input- Pole\n";
			//exit(4);
			return false;
			
		}
	
	else {return A*B;}
	
}

double Prostokat:: Obwod ()
{
	if (A<0 || B<0) 
		{
			std:: cerr<<  "Error! Negative Input-Obwod\n";
			//exit(4);
			return false;
		}
	
	else {return 2.0*A +2.0*B;}
	
}


double Kwadrat:: Pole ()
{
	if (A<0) 
		{
			std:: cerr<<  "Error ! Negative Input !";
			//exit(-1);
			return false;
			
		}
	else
	{return A*A;}
	
}




double Kwadrat:: Obwod ()
{
	if (A<0) 
		{
			std:: cerr<<  "Error ! Negative Input !";
			//exit(-1);
			return false;
			
		}
		
		else 
		{		
		return 4.0 * A;

		}
	
}


double Trojkat::Pole()
{


	if (A<0 || B<0 || C<0)
	{
		std::cerr << "Error ! Negative Input !";
		//exit(-1);
		return false;

	}


	else

	{

		double p = 0.5*(A + B + C);

		return sqrt(p*(p - A)*(p - B)*(p - C));

	}



}

double Trojkat::Obwod()
{
	

	if (A<0 || B<0 || C<0)
	{
		std::cerr << "Error ! Negative Input !";
		//exit(-1
		return false;

	}


	else
	{
		return A + B + C;
	}



}

double Image:: Pole (){}

double Image:: Obwod(){}
	

void Image::dodajFigure(Figura *wsk)
{
	myFigury.push_back(wsk);
	
}


double Image:: obliczPola()//forem trzeba sumowac
{
	double sum=0;
	
	for(it = myFigury.begin(); it != myFigury.end(); it++ )
{
   sum+= (*it)->Pole();
}
return sum;	
}


