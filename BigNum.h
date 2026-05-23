#ifndef __BIGNUM_H
#define __BIGNUM_H

#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

using namespace std;

class BigNum
{
private:

    vector<uint8_t> Big;

    string soma_base_10(string num_string1,
                        string num_string2) const;

public:

    BigNum(const string &num);
    BigNum();

    BigNum operator+(const BigNum &outro) const;

    BigNum operator+(const string &outro1) const;

    BigNum operator-(const BigNum &outro) const;

    BigNum operator-(const string &outro1) const;

    bool operator==(const BigNum &outro) const;

    bool operator==(const string &outro1) const;

    bool operator>(const BigNum &outro) const;

    void mostra_bytes() const;

    void Converte(const string &num);

    string DesConverte() const;

    void DesConverteSimples() const;

    void fatorial(unsigned num);

    friend istream &operator>>(istream &input,
                               BigNum &Num);
};

#endif