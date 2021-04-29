#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fraction.h"

/*fraction simple math tests*/

/*
TEST_CASE("0 in denominator")
{
	fraction f6(3, 0);
	CHECK(f6.getValueD() == -1);
}
*/

TEST_CASE("equals decimal and round")
{
	fraction f1(16, 7);
	fraction f2(34, 14);
	fraction f3(0, 1);
	CHECK((f1==f2)==false);
	CHECK(f1.getDecimal() == 2.286);
	CHECK(f2.getDecimal() == 2.429);
	CHECK(f3.getDecimal() == 0);
}

TEST_CASE("shorten")
{
	fraction f1(2, 8);
	fraction f2(1, 4);
	CHECK((f1.getValueN() == f2.getValueN()) == false);
	CHECK((f1.getValueD() == f2.getValueD()) == false);
	f1.shorten();
	CHECK((f1.getValueN() == f2.getValueN()) == true);
	CHECK((f1.getValueD() == f2.getValueD()) == true);
}

TEST_CASE("math test")
{
	fraction f1(3, 2);
	fraction f2(6, 5);
	fraction f3(-3,5);
	fraction f4(-3,10);
	fraction f5 = f1 - f4;
	fraction f6(9, 5);
	fraction f7(2, 3);
	CHECK((f1 + f1 == f2+f6)==true);
	CHECK((f2 - f5 == f3)==true);
	CHECK((f1 * f2 == f6)==true);
	CHECK((f2 / f5 == f7)==true);
}


