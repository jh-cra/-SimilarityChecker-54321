#include "pch.h"
#include "../SimilerTest/similer.cpp"
#include <string>

using namespace std;

TEST(TestCaseName, CheckLenghSame) {
	SimilerChecker similer;

	EXPECT_EQ(60, similer.checkLengh("ABCDE", "ABCDE"));
	EXPECT_EQ(60, similer.checkLengh("ABC", "ABC"));
	EXPECT_EQ(60, similer.checkLengh("ABCDE", "ABABC"));
	EXPECT_EQ(60, similer.checkLengh("ABCDEF", "GHIJKL"));
}

