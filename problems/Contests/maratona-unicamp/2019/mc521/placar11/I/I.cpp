#include <bits/stdc++.h>

using namespace std;

int main()
{
        char  *strA, *strB;
	      char * pointer_char;
        fgets(pointer_char, 1000000, stdin);
        strA = strtok(pointer_char, " \n");
        // strA = ;
        strB = strtok(NULL, " \n");
        // strB = entry;

        sort(strB.begin(), strB.end());
        string Solution;

        for ( char& it: strA)
        {
                if ( binary_search(strB.begin(), strB.end(), it))
                        Solution.append(1u, it);
        }
        cout << Solution << endl;

}
