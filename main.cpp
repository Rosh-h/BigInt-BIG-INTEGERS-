#include "BigInt.h"

int main() {
    BigInt num1("12345678901234567890");
    BigInt num2("98765432109876543210");

    BigInt sum = num1 + num2;
    std::cout << "Sum: " << sum << std::endl;

    BigInt difference = num1 - num2;
    std::cout << "Difference: " << difference << std::endl;

    BigInt product = num1 * num2;
    std::cout << "Product: " << product << std::endl;

    BigInt quotient = num2 / num1;
    std::cout << "Quotient: " << quotient << std::endl;

    BigInt modulus = num2 % num1;
    std::cout << "Modulus: " << modulus << std::endl;

    return 0;
}
