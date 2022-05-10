#ifndef RSA_ENCRYPTION_DECRYPTION_ENCRYPTION_H
#define RSA_ENCRYPTION_DECRYPTION_ENCRYPTION_H


#include <iostream>
using namespace std;
#include <cmath>


class encryption
{
private:
    double Encreipted_Mess;

public:
    double RSA_Encryption(double  original_mess , double n , double e);
};

class Euler
{
private:
    double Euler;

public:
    double RSA_Calc_Euler(double p , double q);
};

class n
{
private:
    double n;

public:
    int  RSA_Calc_N(double p , double q);
};

class e
{
private:
    double e;

public:
    void RAS_Encryption_Set_e(double E);
    double RSA_Generate_e(double euler);
};

#endif //RSA_ENCRYPTION_DECRYPTION_ENCRYPTION_H
