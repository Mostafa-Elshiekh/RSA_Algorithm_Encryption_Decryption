# RAS_Algorithm_Encryption_Decryption
RAS algorithm encryption and decryption using C++

/*********RSA: Key Generation************/
//1-Choose tow primes (P , Q)
//2-Compute n = P * Q
//3-Compute euler ℰ = (P-1)(Q-1)
//4-Choose e with this conditions 1 < e < ℰ  & must be comprime with ℰ

//---Key is (n , e)

/*******Message Encryption************/
//C = m^e mod n
//C-->message after encrypted
//m-->message before encrypted
//n&e is the key

/*******Message Decryption************/
//M = c^d mod n
//M-->message before encrypted
//c-->message after encrypted
//d= e^-1 mod
//n&e is the key ℰ
