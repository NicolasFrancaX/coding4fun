exec: a.in a.sol A.cpp
	g++ A.cpp -Wall -std=c++11 -O2 && ./a.out < a.in > a.res && diff a.sol a.res
output: a.in a.sol A.cpp
	g++ A.cpp -Wall -std=c++11 -O2 && ./a.out < a.in
test: A.cpp
	g++ A.cpp -Wall -std=c++11 -O2 && ./a.out
