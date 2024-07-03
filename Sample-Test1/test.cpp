#include "pch.h"
#include "../SimilerTest/similer.cpp"
#include <string>

using namespace std;

TEST(TestCaseName, CheckLengthSame) {
	SimilerChecker similer;

	EXPECT_EQ(60, similer.checkDiffLength("ABCDE", "ABCDE"));
	EXPECT_EQ(60, similer.checkDiffLength("ABC", "ABC"));
	EXPECT_EQ(60, similer.checkDiffLength("ABCDE", "ABABC"));
	EXPECT_EQ(60, similer.checkDiffLength("ABCDEF", "GHIJKL"));
}

TEST(TestCaseName, CheckLengthDiff) {
	SimilerChecker similer;

	EXPECT_EQ(20, similer.checkDiffLength("ABCDE", "CDE"));
	EXPECT_EQ(0, similer.checkDiffLength("ABCD", "AB"));
	EXPECT_EQ(0, similer.checkDiffLength("ABC", "A"));
	EXPECT_EQ(48, similer.checkDiffLength("ABCDEF", "ABCDE"));

	EXPECT_EQ(20, similer.checkDiffLength("CDE", "ABCDE"));
	EXPECT_EQ(0, similer.checkDiffLength("AB", "ABCD"));
	EXPECT_EQ(0, similer.checkDiffLength("A", "ABC"));
	EXPECT_EQ(48, similer.checkDiffLength("ABCDE", "ABCDEF"));
}

