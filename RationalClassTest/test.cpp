#include "pch.h"
#include "C:\Users\mayor\source\repos\Lab4-master\Lab4\Rational.h"

TEST(ConstructTests, Test1) {
	Rational r(15);
	EXPECT_EQ(r.getDenominator(), 1);
	EXPECT_EQ(r.getNumerator(), 15);
}
TEST(ConstructTests, Test2) {
	Rational r(15, 45);
	EXPECT_EQ(r.getDenominator(), 3);
	EXPECT_EQ(r.getNumerator(), 1);
}
TEST(ConstructTests, Test3) {
	Rational r;
	EXPECT_EQ(r.getDenominator(), 1);
	EXPECT_EQ(r.getNumerator(), 0);
}
TEST(MethodTests, Test1) {
	Rational r;
	r.setDenominator(10);
	r.setNumerator(5);
	EXPECT_EQ(r.getDenominator(), 2);
	EXPECT_EQ(r.getNumerator(), 1);
}
TEST(MethodTests, Test2) {
	Rational r;
	r.setDenominator(50);
	r.setNumerator(15);
	EXPECT_EQ(r.getDenominator(), 10);
	EXPECT_EQ(r.getNumerator(), 3);
}
