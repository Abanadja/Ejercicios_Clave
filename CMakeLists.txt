cmake_minimum_required(VERSION 3.29)
project(Ejercicios_Clave)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1)

add_executable(Ejercicios_Clave
    Ejercicio1/Ejercicio1.c
    Ejercicio1/Ejercicio1.h
        Ejercicio1/Ejercicio1.c
        Ejercicio2/Ejercicio2.h
        Ejercicio2/Ejercicio2.c
        Ejercicio3/Ejercicio3.h
        Ejercicio3/Ejercicio3.c
        Ejercicio5/Ejercicio5.h
        Ejercicio5/Ejercicio5.c
        main.c
        Ejercicio4/Ejercicio4.c
)
