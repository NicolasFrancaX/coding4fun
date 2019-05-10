exec: a.in a.sol E.cpp
	g++ E.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res
output: a.in a.sol E.cpp
	g++ E.cpp -Wall -std=c++11 -O2 && ./a.out < a.in
test: a.in a.sol E.cpp
	g++ E.cpp -Wall -std=c++11 -O2 && ./a.out
