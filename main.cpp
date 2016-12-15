#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>


using namespace std;
string alphabet[26] = {
 ".-",      //A
 "-...",    //B
 "-.-.",    //C
 "-..",     //D
 ".",       //E
 "..-.",    //F
 "--.",     //G
 "....",    //H
 "..",      //I
 ".---",    //J
 "-.-",     //K
 ".-..",    //L
 "--",      //M
 "-.",      //N
 "---",     //O
 ".--.",    //P
 "--.-",    //Q
 ".-.",     //R
 "...",     //S
 "-",       //T
 "..-",     //U
 "...-",    //V
 ".--",     //W
 "-..-",    //X
 "-.--",    //Y
 "--.."     //Z
};

void texttomorse_convert(string text){
    int length = text.length();
    for(int i = 0; i < length; i++){
        switch(text[i]){
            case 'a': cout << alphabet[0] << " "; break;
            case 'b': cout << alphabet[1] << " "; break;
            case 'c': cout << alphabet[2] << " "; break;
            case 'd': cout << alphabet[3] << " "; break;
            case 'e': cout << alphabet[4] << " "; break;
            case 'f': cout << alphabet[5] << " "; break;
            case 'g': cout << alphabet[6] << " "; break;
            case 'h': cout << alphabet[7] << " "; break;
            case 'i': cout << alphabet[8] << " "; break;
            case 'j': cout << alphabet[9] << " "; break;
            case 'k': cout << alphabet[10] << " "; break;
            case 'l': cout << alphabet[11] << " "; break;
            case 'm': cout << alphabet[12] << " "; break;
            case 'n': cout << alphabet[13] << " "; break;
            case 'o': cout << alphabet[14] << " "; break;
            case 'p': cout << alphabet[15] << " "; break;
            case 'q': cout << alphabet[16] << " "; break;
            case 'r': cout << alphabet[17] << " "; break;
            case 's': cout << alphabet[18] << " "; break;
            case 't': cout << alphabet[19] << " "; break;
            case 'u': cout << alphabet[20] << " "; break;
            case 'v': cout << alphabet[21] << " "; break;
            case 'w': cout << alphabet[22] << " "; break;
            case 'x': cout << alphabet[23] << " "; break;
            case 'y': cout << alphabet[24] << " "; break;
            case 'z': cout << alphabet[25] << " "; break;
            default: cout << "ERROR "; break;
        }
    }
}

void texttomorse_menu(){
    string text;
    system("cls");
    cout << "---------------------------" << endl;
    cout << "       TEXT TO MORSE       " << endl;
    cout << "---------------------------" << endl;
    cout << "Text:" << endl;
    cin >> text;
    cout << "---------------------------" << endl;
    cout << "Morse:" << endl;
    texttomorse_convert(text);
    cout << endl;
    cout << "---------------------------" << endl;
    cout << " TO CONTINUE PRESS ANY KEY " << endl;
    cout << "---------------------------" << endl;
    getch();
}

void morsetotext_menu(){
    system("cls");
    cout << "Comming soon... " << endl;
    cout << "---------------------------" << endl;
    cout << " TO CONTINUE PRESS ANY KEY " << endl;
    cout << "---------------------------" << endl;
    getch();
}

int main()
{
    char choose;
    for(;;){
        system("cls");
        cout << "---------------------------" << endl;
        cout << "           MENU           " << endl;
        cout << "---------------------------" << endl;
        cout << "[1] Text to Morse " << endl;
        cout << "[2] Morse to Text (comming soon...)" << endl;
        cout << "[0] Exit" << endl;
        cout << "---------------------------" << endl;

        choose = getch();

        switch(choose){
            case '1': texttomorse_menu(); break;
            case '2': morsetotext_menu(); break;
            case '0': return 0; break;
            default:
                cout << "      Error. Try again     " << endl;
                cout << "---------------------------" << endl;
                cout << " TO CONTINUE PRESS ANY KEY " << endl;
                cout << "---------------------------" << endl;
                getch();
                break;
        }
    }
    getch();
    return 0;
}
