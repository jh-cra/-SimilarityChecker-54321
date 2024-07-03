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

TEST(TestCaseName, CheckLenghDiff) {
	SimilerChecker similer;

	EXPECT_EQ(20, similer.checkLengh("ABCDE", "CDE"));
	EXPECT_EQ(0, similer.checkLengh("ABCD", "AB"));
	EXPECT_EQ(0, similer.checkLengh("ABC", "A"));
	EXPECT_EQ(48, similer.checkLengh("ABCDEF", "ABCDE"));

	EXPECT_EQ(20, similer.checkLengh("CDE", "ABCDE"));
	EXPECT_EQ(0, similer.checkLengh("AB", "ABCD"));
	EXPECT_EQ(0, similer.checkLengh("A", "ABC"));
	EXPECT_EQ(48, similer.checkLengh("ABCDE", "ABCDEF"));
}

