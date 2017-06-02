#include "Figury.hpp"
#include <stdlib.h> 
 
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using namespace std;
using ::testing::AtLeast;
using ::testing::Return; 

class MockFigura: public Figura
{

public:
	
MOCK_METHOD0(obliczPola, double());
	//MOCK_METHOD1(dodajFigure,  void(Figura *wsk));
	//MOCK_METHOD0(Pole, double());
	//MOCK_METHOD0(Obwod, double());
//virtual double obliczPola(){}
//MOCK_METHOD0(dodajFigure, void(MockFigura*));
virtual void dodajFigure(Figura *wsk){}
virtual double Pole() {}
//MOCK_METHOD0(Pole, double());
virtual double Obwod(){}
virtual void Drukuj(){}
virtual ~MockFigura(){std::cout<<"Usuwam MockFigure"<<std::endl;};
};

//double MockFigura:: Pole (){}

//double MockFigura:: Obwod(){}
	
//void MockFigura::dodajFigure(Figura *wsk){};*/

/*Figura *fig = new Prostokat(2.5, 2.9);
Figura *fig2 = new Kwadrat(3.0);
Figura * tr = new Trojkat(3, 4, 5);*/

TEST(ImageTest, obliczPola) {
MockFigura figura;

/*figura.dodajFigure(fig);
figura.dodajFigure(fig2);
figura.dodajFigure(tr);*/
//EXPECT_CALL(kwadrat, dodajFigure());
EXPECT_CALL(figura, obliczPola())
	.WillOnce(Return(50));
	//.WillOnce(Return(50));	
//figura.obliczPola();	
ASSERT_EQ(50,figura.obliczPola());
      }

   


int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
