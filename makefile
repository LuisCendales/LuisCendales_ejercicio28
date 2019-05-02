gra.png: datos.dat gra.py
    python gra.py

%.dat : a.out
    ./a.out 

a.out: LuisCendales_ej28.cpp
    g++ LuisCendales_ej28.cpp