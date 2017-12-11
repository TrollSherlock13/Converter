#include <iostream>
#include <cmath>
using namespace std;
void showmenu();
void BtoD();
void DtoB();
void HtoD();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 4){
        switch(choice){
            case 1 : BtoD();
                break;
            case 2 : DtoB();
                break;
            case 3 : HtoD();
                break;
            default: cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
void showmenu(){
    cout << "Please enter 1, 2, 3, or 4:\n"
    "1) Binary to Decimal           2) Decimal to Binary\n"
    "3) Hex to Decimal              4) quit\n";
}
void HtoD(){
    cout << "Enter a hex number: ";
    const int hex = 3;
    char decimal_2[hex];
    cin >> decimal_2;
    int p = -1;
    for (int f = 0; decimal_2[f] != '\0'; f++){
        p++;
        //cout << p << endl;
    }
    int result = 0;
    int number_1 = 0;
    int f = 0;
    while (p != -1){
        if (decimal_2[f] == 'a'){
            result =  10 * pow(16,p);
            //cout << result << endl;
        }
        if (decimal_2[f] == 'b'){
            result = 11 * pow(16,p);
        }
        if (decimal_2[f] == 'c'){
            result = 12 * pow(16,p);
            //cout << result << endl ;
        }
        if (decimal_2[f] == 'd'){
            result = 13 * pow(16, p);
            //cout << result << endl;
        }
        if (decimal_2[f] == 'e'){
            result = 14 * pow(16, p);
        }
        if (decimal_2[f] == 'f'){
            result = 15 * pow(16, p);
        }
        if (decimal_2[f] == '0'){
            result = 0;
        }
        if (decimal_2[f] == '1'){
            result = 1 * pow(16, p);
        }
        if (decimal_2[f] == '2'){
            result = 2 * pow(16, p);
        }
        if (decimal_2[f] == '3'){
            result = 3 * pow(16, p);
        }
        if (decimal_2[f] == '4'){
            result = 4 * pow(16, p);
        }
        if (decimal_2[f] == '5'){
            result = 5 * pow(16, p);
        }
        if (decimal_2[f] == '6'){
            result = 6 * pow(16, p);
        }
        if (decimal_2[f] == '7'){
            result = 7 * pow(16, p);
        }
        if (decimal_2[f] == '8'){
            result = 8 * pow(16, p);
        }
        if (decimal_2[f] == '9'){
            result = 9 * pow(16, p);
        }
        f++;
        p--;
        number_1 = number_1 + result;
    }
    cout << number_1 << endl;
}
void DtoB(){
    int i = - 1;
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    if (number == 0){
        i = 0;
    }
    while (number > pow(2, i)){
        i++;
    }
    do{
        if (number < pow(2,i)){
            cout << 0;
            i = i - 1;
        }
        else{
            number = number - pow(2, i);
            cout << 1;
            i = i - 1;
        }
    }while (i != - 1);
    cout << endl;
}
void BtoD(){
    const int num = 100;
    char binary[num];
    cout << "Enter a binary number: ";
    cin >> binary;
    int q = -1;
    for (int  i = 0; binary[i] != '\0'; i++){
        q++;
    }
    int sum = 0;
    int decimal = 0;
    for (int j = 0; binary[j] != '\0'; j++){
        if (binary[j] == '1'){
            sum = pow(2, q);
            q--;
        }
        if (binary [j] == '0'){
            sum = 0;
            q--;
        }
        decimal = sum + decimal;
    }
    cout << decimal << endl;
}
