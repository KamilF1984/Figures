#include "Figury.hpp"
#include <stdlib.h> 
#include <gtest/gtest.h>



using namespace std;

TEST(Prostokat, Negative)
{
	Prostokat pr= Prostokat(-4.0,2.0);
	//ASSERT_EXIT(pr.Obwod(),::testing::ExitedWithCode(-1), "Error: Negative Input");
	EXPECT_FALSE(pr.Obwod());
	EXPECT_FALSE(pr.Pole());
}



TEST(Kwadrat, CheckKwadrat)
{
	Kwadrat kw= Kwadrat(4.0);
	ASSERT_EQ(16, kw.Pole());
	ASSERT_EQ(16, kw.Obwod());
}




TEST(Trojkat, CheckTrojkat) 
{
	Trojkat  tr= Trojkat(3.0,4.0,5.0);
	
	EXPECT_EQ(6.0, tr.Pole());
	EXPECT_EQ(1.0, tr.Obwod());
	
}



int main(int argc, char **argv) 
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
