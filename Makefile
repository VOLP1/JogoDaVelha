all: velha.o testa_velha.cpp
	g++ -std=c++11 -Wall  velha.o testa_velha.cpp -o testa_velha
	

velha.o : velha.cpp velha.hpp
	g++ -std=c++11 -Wall  -c velha.cpp
	

clean:
	rm -rf *.o *.exe testa_velha
	
	
