exec: a.in a.sol K.cpp
	g++ K.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res
output: a.in a.sol K.cpp
	g++ K.cpp -Wall -std=c++11 -O2 && ./a.out < a.in
test: a.in a.sol K.cpp
	g++ K.cpp -Wall -std=c++11 -O2 && ./a.out
