#include "decryption.h"


double decryption:: RSA_Decryption(double Encrypted_Mes , double n,double d)
{
    double m = pow(Encrypted_Mes,d);
    Original_Mess=fmod(m,n);
    return Original_Mess;
}


double d::RSA_Decryption_Calc_d(double Euler, double e)
{
    //private key
    //d stands for decrypt
    //choosing d such that it satisfies d*e = 1 mod phi
    double d1 = 1 / e;
    d = fmod(d1, Euler);

    return d;
}

