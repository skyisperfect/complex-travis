#include "catch.hpp"
#include "complex.hpp"

SCENARIO("complex new without param","[new without param]"){
    complex_t complex;
    REQUIRE(complex.geta() == 0);
    REQUIRE(complex.getb() == 0);
}

SCENARIO("complex new with pram","[new with param]"){
    complex_t complex(2,-3);
    REQUIRE(complex.geta() == 2);
    REQUIRE(complex.getb() == -3);
}

SCENARIO("complex copy","[copy]"){
    complex_t complex1(2,-3);
    complex_t complex2(complex1);
    REQUIRE(complex2.geta() == 2);
    REQUIRE(complex2.getb() == -3);
}

SCENARIO("complex sum","[sum]"){
    complex_t complex1(2,-3), complex2(4,2), complex3(6,-1);
	complex1 += complex2;
    REQUIRE((complex1 == complex3) == true);
}

SCENARIO("complex sub","[sub]"){
    complex_t complex1(2,-3), complex2(4,2), complex3(-2,-5);
	complex1 -= complex2;
    REQUIRE((complex1 == complex3) == true);
}

SCENARIO("complex mul ", "[mul]") {
    complex_t a(1, 2), b(1, 1);
    REQUIRE((a*b).geta() == -1);
    REQUIRE((a*b).getb() == 3);
}
