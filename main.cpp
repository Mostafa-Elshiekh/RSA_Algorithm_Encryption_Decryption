#include<iostream>
#include<math.h>
#include "encryption.h"
#include "decryption.h"

using namespace std;

int main()
{
    encryption encryption_obj;
    decryption decryption_obj;
    n n_obj;
    e e_obj;
    d d_obj;
    Euler euler_obj;

    //2 random prime numbers
    double p ;
    double q ;
    
    double euler= euler_obj.RSA_Calc_Euler(p,q);//calculate phi
    double n=n_obj.RSA_Calc_N(p,q);//calculate n
    double e=e_obj.RSA_Generate_e(euler);
    double d = d_obj.RSA_Decryption_Calc_d(euler,e);
    double Original_Message=0;
    double Encryption_Message=0;
    double Decryption_Message=0;

    cout << "\nEnter The First primary number(P): ";
    cin >> p;
    cout << "\nEnter The Second primary number(Q): ";
    cin >> q;
    
     euler= euler_obj.RSA_Calc_Euler(p,q);
     n=n_obj.RSA_Calc_N(p,q);
     e=e_obj.RSA_Generate_e(euler);
     d = d_obj.RSA_Decryption_Calc_d(euler,e);




    while (1)
    {
        cout << "\nEnter The Original massage: ";
        cin >> Original_Message;

        Encryption_Message = encryption_obj.RSA_Encryption(Original_Message, n, e);
        double c = pow(Original_Message,e);

        Decryption_Message = decryption_obj.RSA_Decryption(c,n,d);

        cout << "\n*****************************" <<endl;
        cout << "Original Message = " << Original_Message;
        cout << "\n" << "p = " << p;
        cout << "\n" << "q = " << q;
        cout << "\n" << "n = pq = " << n;
        cout << "\n" << "phi = " << euler;
        cout << "\n" << "e = " << e;
        cout << "\n" << "d = " << d;
        cout << "\n" << "Encrypted message = " << Encryption_Message;
        cout << "\n" << "decrypted message = " << Decryption_Message<<endl;
        cout << "\n*****************************" <<endl;


    }
}
