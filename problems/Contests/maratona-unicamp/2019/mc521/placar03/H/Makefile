exec: a.in a.sol H.cpp
	g++ H.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res

output: a.in a.sol H.cpp
	g++ H.cpp -Wall -std=c++11 -O2 && ./a.out < a.in
