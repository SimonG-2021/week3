#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fraction.h"

/*fraction simple math tests*/




TEST_CASE("sum")
{
	fraction f1(1, 1);
	fraction f2(1, 2);
	fraction f3(2, 1);
	fraction f4(2, 2);
	fraction f5(3, 2);


	CHECK((f1 + f1 == f1)==true);
	CHECK((f1 + f2 == f5)==true);

}
TEST_CASE("equals and round")
{
	fraction f1(16, 7);
	fraction f2(34, 14);
	fraction f3(0, 1);
	CHECK((f1==f2)==true);
	CHECK(f1.getDecimal() == 2.286);
	CHECK(f2.getDecimal() == 2.429);
	CHECK(f3.getDecimal() == 0);

}
