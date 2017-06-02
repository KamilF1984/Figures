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
virtual void dodajFigure(Figura *wsk){}
MOCK_METHOD0(Pole, double());
virtual double Obwod(){}
virtual void Drukuj(){}
virtual ~MockFigura(){std::cout<<"Usuwam MockFigure"<<std::endl;};
};

TEST(ImageTest, obliczPola) {
MockFigura mock_figura1,mock_figura2,mock_figura3;
Image image;
EXPECT_CALL(mock_figura1, Pole()).WillOnce(Return(10));
EXPECT_CALL(mock_figura2, Pole()).WillOnce(Return(20));
EXPECT_CALL(mock_figura3, Pole()).WillOnce(Return(30));
image.dodajFigure(&mock_figura1);
image.dodajFigure(&mock_figura2);
image.dodajFigure(&mock_figura3);

EXPECT_EQ(60,image.obliczPola());
      }

   


int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
