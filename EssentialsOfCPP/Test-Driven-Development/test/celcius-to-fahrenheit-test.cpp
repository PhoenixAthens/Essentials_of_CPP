#include <libunittest/all.hpp>
#include "../src/TempConverter.hpp"

using namespace unittest::assertions;

TEST(test_celcius_to_fahrenheit_15_returns_59_0){
    assert_true(celcius_to_fahrenheit(15)==59.0,SPOT);
    
}
TEST(test_celcius_to_fahrenheit_23_returns_73_4){
    assert_true(celcius_to_fahrenheit(23)==73.4,SPOT);
}
