#include <bits/stdc++.h>

using namespace std;

string convert(string number) {
    int algarisms = 0;
    string alg = "";

    string scientific_notation = "";

    char last_digit = '0';

    bool is_negative = false;
    bool exponent_positive = false;
    bool exponent_negative = false;

    bool have_dot = false;

    int index_dot;

    int start = 0;

    int start_number_exponent_positive;
    int end_number_exponent_positive;

    int start_number_exponent_negative;
    int end_number_exponent_negative;

    bool already_last_exponent_negative = false;

    int just_zero = true;

    string temp = "";

    /* Verificar se tem um negativo no primeiro digito */
    if (number[0] == '-') {
        is_negative = true;
        start = 1;
    } 

    /* Verificar se o primeiro valor é 0 e logo em seguida é um ., se sim,
       você vai comecar a pegar o expoente como negativo */
    for (int i = start; i < number.length(); i++) {
        if (number[i] == '.') {
            have_dot = true;
            index_dot = i;

            if (!exponent_positive) {
                exponent_negative = true;
                start_number_exponent_negative = i;
            } else {
                end_number_exponent_positive = i-1;
            }
        }

        if (number[i] != '0' && number[i] != '.') {
            just_zero = false;
        }

        if (algarisms == 5) {
            last_digit = number[i];
            algarisms++;
        }

        if (number[i] != '.' && algarisms < 5 && !just_zero) {
            alg.append(1u, number[i]);
            algarisms++;
        }


        
        if (!have_dot && number[i] != '0' && !exponent_positive) {
            start_number_exponent_positive = i;
            exponent_positive = true;
            exponent_negative = false;
        }


        if (exponent_negative) {
            if (number[i] != '.' && number[i] != '0') {
                if (already_last_exponent_negative) continue;
                end_number_exponent_negative = i;
                already_last_exponent_negative = true;

            }
        }

        if (i == number.length()-1 && !have_dot) {
            end_number_exponent_positive = i;
        }
    }


    if (is_negative) {
        scientific_notation.append(1u, '-');
    } else {
        scientific_notation.append(1u, '+');
    }

    if (algarisms < 5) {
        while (algarisms < 5) {
            alg.append(1u, '0');
            algarisms++;
        }
    }

    temp.append(1u, alg[0]);
    temp.append(1u, '.');
    temp.append(alg.substr(1, 4));
    temp.append(1u, last_digit);

    stringstream ss;
    ss << fixed << setprecision(4) << stod(temp);




    scientific_notation.append(ss.str());
    /*
    scientific_notation.append(1u, alg[0]);
    scientific_notation.append(1u, '.');
    scientific_notation.append(alg.substr(1, 4));
    */
    scientific_notation.append(1u, 'E');

    if (exponent_negative) {
        scientific_notation.append(1u, '-');
        if (to_string(end_number_exponent_negative-start_number_exponent_negative).length() < 2) {
            scientific_notation.append(1u, '0');
        }
        scientific_notation.append(to_string(end_number_exponent_negative-start_number_exponent_negative));
    } else {
        scientific_notation.append(1u, '+');
        if (to_string(end_number_exponent_positive-start_number_exponent_positive).length() < 2) {
            scientific_notation.append(1u, '0');
        }
        scientific_notation.append(to_string(end_number_exponent_positive-start_number_exponent_positive));
    }

    return scientific_notation;
}

int main() {
    string number;

    cin >> number;

    cout << convert(number) << endl;    

    return 0;
}