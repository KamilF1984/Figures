#include "Figury.hpp"

int main()
{
	Figura *fig = new Prostokat(2.5, 2.9);
	//fig->Drukuj();
	Figura *fig2 = new Kwadrat(3.0);
	//fig2->Drukuj();
	Figura * tr = new Trojkat(3, 4, 5);
	//tr->Drukuj();

	
	
	Image obraz;
	
	obraz.dodajFigure(fig);
	obraz.dodajFigure(fig2);
	obraz.dodajFigure(tr);
	
	for(obraz.it = obraz.myFigury.begin(); obraz.it != obraz.myFigury.end(); (obraz.it)++ )
{
    (*obraz.it)->Drukuj();
}
	
	
	std::cout<<obraz.obliczPola();
	
	
	
	
	
	delete fig;
	delete fig2;
	delete tr;

	return 0;
}
