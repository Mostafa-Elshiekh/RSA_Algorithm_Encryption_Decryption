#include"encryption.h"

double  encryption::RSA_Encryption(double  original_mess , double n , double e)
{
    Encreipted_Mess =pow(original_mess,e);
    Encreipted_Mess= fmod(Encreipted_Mess,n);
    return Encreipted_Mess;
}


double Euler::RSA_Calc_Euler(double p, double q)
{
    int euler1 = (p-1)*(q-1);
    return euler1;
}

int n::RSA_Calc_N(double p, double q)
{
    double n1 = p * q;
    return n1;
}

int gcd(int a, int b)
{
    int t;
    while(1) {
        t= a%b;
        if(t==0)
            return b;
        a = b;
        b= t;
    }
}


double e::RSA_Generate_e(double euler)
{
    //public key
    //e stands for encrypt
    double temp;
     e=7;
    //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
    while(e<euler) {
        temp = gcd(e,euler);
        if(temp==1)
            break;
        else
            e++;
    }
    return e;
}
