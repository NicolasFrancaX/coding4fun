exec: a.in a.sol L.cpp
	g++ L.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res
test: L.cpp
	g++ L.cpp -Wall -std=c++11 -O2 && ./a.out
