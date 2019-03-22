exec: a.in a.sol B.cpp
	g++ B.cpp -std=c++11 -O2 -Wall && ./a.out < a.in > a.res && diff a.sol a.res
