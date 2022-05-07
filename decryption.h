#ifndef RSA_ENCRYPTION_DECRYPTION_DECRYPTION_H
#define RSA_ENCRYPTION_DECRYPTION_DECRYPTION_H

#include "encryption.h"


class decryption
{
    private:
        double Original_Mess;

    public:
        double  RSA_Decryption(double Encrypted_Mes , double n,double d);
};

class d
{
    private:
        double d;

    public:
        double  RSA_Decryption_Calc_d(double Euler , double e);
};

#endif //RSA_ENCRYPTION_DECRYPTION_DECRYPTION_H
