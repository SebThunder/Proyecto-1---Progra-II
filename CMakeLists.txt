cmake_minimum_required(VERSION 3.16)
project(Proyecto1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto1 main.cpp Producto.cpp Producto.h ProductoPerecedero.cpp ProductoPerecedero.h ProductoNoPerecedero.cpp ProductoNoPerecedero.h Maquina.cpp Maquina.h MonederoElectronico.cpp MonederoElectronico.h IMaquinaAdministradora.h IMaquinaVendedora.h MenuAdministrador.cpp MenuAdministrador.h MenuPrincipal.cpp MenuPrincipal.h Librerias.h Fecha.cpp Fecha.h)