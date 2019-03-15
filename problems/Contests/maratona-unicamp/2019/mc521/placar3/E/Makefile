exec: a.in a.sol E.cpp
	g++ E.cpp -std=c++11 -O2 -Wall && ./a.out < a.in > a.res && diff a.sol a.res

output: a.in a.sol E.cpp
	g++ E.cpp -std=c++11 -O2 -Wall && ./a.out < a.in
