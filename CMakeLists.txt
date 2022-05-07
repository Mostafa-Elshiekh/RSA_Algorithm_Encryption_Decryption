cmake_minimum_required(VERSION 3.19)
project(RSA_Encryption_Decryption)

set(CMAKE_CXX_STANDARD 14)

add_executable(RSA_Encryption_Decryption main.cpp encryption.cpp decryption.cpp )