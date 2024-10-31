#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
#include <string>

class BigInt {
private:
    std::string value;
    bool isNegative;

    BigInt add(const BigInt& other) const;
    BigInt subtract(const BigInt& other) const;
    BigInt multiply(const BigInt& other) const;
    BigInt divide(const BigInt& other) const;
    BigInt modulus(const BigInt& other) const;

public:
    // Constructors
    BigInt();
    BigInt(const std::string& val);
    BigInt(int val);

    // Operator overloads
    BigInt operator+(const BigInt& other) const;
    BigInt operator-(const BigInt& other) const;
    BigInt operator*(const BigInt& other) const;
    BigInt operator/(const BigInt& other) const;
    BigInt operator%(const BigInt& other) const;

    friend std::ostream& operator<<(std::ostream& os, const BigInt& bigInt);
};

#endif // BIGINT_H
