exec: a.in a.sol B.cpp
	g++ B.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res
output: a.in a.sol B.cpp
	g++ B.cpp -Wall -std=c++11 -O2 && ./a.out < a.in
test: B.cpp
	g++ B.cpp -Wall -std=c++11 -O2 && ./a.out 
