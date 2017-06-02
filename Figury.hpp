#pragma once
#include <cmath>
#include <iostream>
#include <vector>
class Figura
{
public:
	virtual double Pole() = 0;
	virtual double Obwod()  = 0;
	virtual void Drukuj();
	virtual void dodajFigure(Figura *wsk);
	virtual double obliczPola();
	virtual ~Figura(){}
	//Figura(){}
};

class Prostokat : public Figura {
protected:
	double  A, B; // boki prostokąta

public:
	Prostokat(double a, double b) : A(a), B(b) {} // konstruktor wraz z listą inicjalizacyjną
	virtual double Pole() ; // implementacja metody pole() z klasy bazowej
	virtual double Obwod() ; // implementacja metody obwod() z klasy bazowej
~Prostokat(){std::cout<<"Usuwam prostokat"<<std::endl;};	
};

class Kwadrat : public Figura
{
protected:
	double A;

public:
	Kwadrat(double a) : A(a) {} // konstruktor wraz z listą inicjalizacyjną
	virtual double Pole() ;  // implementacja metody pole() z klasy bazowej
	virtual double Obwod();
	~Kwadrat(){std::cout<<"Usuwam kwadrat"<<std::endl;};
	
};

class Trojkat : public Figura {

protected:
	double	A, B, C;

public:
Trojkat(double a, double b, double c) : A(a), B(b), C(c) {}
virtual double Pole() ;
virtual double Obwod() ;
~Trojkat(){std::cout<<"Usuwam trojkat"<<std::endl;};
};

class Image : public Figura 
{
public:	
// Image() {};
//~Image(){};
//virtual ~Image() {}
virtual void dodajFigure(Figura *wsk);
virtual double obliczPola();
virtual double Pole() ;
virtual double Obwod();
std::vector <Figura*>myFigury ;
std::vector <Figura*>:: iterator it ;
virtual ~Image(){std::cout<<"Usuwam obraz"<<std::endl;};
//private:
	//std::vector <Figura*>myFigury ;
};



