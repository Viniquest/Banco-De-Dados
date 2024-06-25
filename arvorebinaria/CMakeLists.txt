cmake_minimum_required(VERSION 3.28)
project(arvorebinaria C)

set(CMAKE_C_STANDARD 11)

add_executable(arvorebinaria main.c
        banco_de_dados.c
        banco_de_dados.h
)
