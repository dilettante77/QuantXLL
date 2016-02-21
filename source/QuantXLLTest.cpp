// QuantXLLTest.cpp : Defines the entry point for the console application.
//

#include <gtest/gtest.h>
#include "source/QuantXLL.h"


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	int ret = -1;
	try{
		ret = RUN_ALL_TESTS();
	}catch (std::exception& ex)	{
		std::cout << "Exception: " << ex.what() << std::endl;
	}

	std::cout << "\n\n\nPress any key to continue......";
	getchar();
	return ret;	
}

TEST(BasicTest, TestSum)
{
	EXPECT_TRUE(mysum(2,2) == 4);
}

double mytestfn(double x)
{
	return pow(x,2) - (2*x) - 2;
}

TEST(SolverTest, Bisection)
{
	double res = rtbis(mytestfn, 1, -1, 1e-10);
	
}