# RSA algorithm for encryption and decryption. 

## 1-Key Generation
* > 1-Choose tow primes (P , Q)  .
* >2-Compute n = P * Q  .
* >3-Compute Euler ℰ = (P-1)(Q-1).
* >4-Choose e with this conditions 1 < e < ℰ & must be coprime with ℰ .  

* >Key is (n , e)  
  
## 2-Message Encryption
* > C = m^e mod n  

* >C : message after encrypted  
* >m: message before encrypted  
* >n&e is the key  
  
## 3-Message Decryption
* >M = c^d mod n  

* >M: message before encrypted  
* >c: message after encrypted  
* >d= e^-1 mod  ℰ

* >n&e is the key ℰ

