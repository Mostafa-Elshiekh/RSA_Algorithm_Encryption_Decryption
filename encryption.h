#ifndef RSA_ENCRYPTION_DECRYPTION_ENCRYPTION_H
#define RSA_ENCRYPTION_DECRYPTION_ENCRYPTION_H


#include <iostream>
using namespace std;
#include <cmath>


class encryption
{
private:
    double Original_Mess;
    double Encreipted_Mess;

public:
    void RAS_Encryption_Set_Original_Mess(double Original_Mess);
    double RSA_Encryption(double  original_mess , double n , double e);
    double RAS_Encryption_Get_Encreipted_Mess(void);
};

class Euler
{
private:
    double Euler;

public:
    double RAS_Encryption_Get_Euler(void);
    void RAS_Encryption_Set_Euler(double EULER);
    double RSA_Calc_Euler(double p , double q);
};

class n
{
private:
    double n;

public:
    void RAS_Encryption_Set_n(double n);
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
