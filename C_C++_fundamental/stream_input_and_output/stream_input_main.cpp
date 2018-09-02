//
// Created by zwpdbh on 2018/8/28.
//

#include <iostream>
using namespace std;

int main()
{
    const int size = 80;
    char buffer1[size];
    char buffer2[size];
    char buffer3[size];

    // use cin to input characters into buffer1
    cout << "Enter a sentence: " << endl;

    cin >> buffer1;
    // display buffer1 contents
    cout << "\nThe string read with cin was: " << endl
        << buffer1 << endl;

    // use cin.get to input characters into buffer2
    cin.get(buffer2, size);
    // display buffer2 contents
    cout << "\nThe string reading with cin.get was: " << endl
        << buffer2 << endl;

    // input characters in buffer via cin function getline
    cin.getline(buffer3, size);
    cout << "\nThe string reading with cin.getline was: " << endl
        <<  buffer3 << endl;

    // show the use of unformatted I/O
    char buffer4[size];
    // use function read to input characters into buffer
    cout << "Enter a sentence: " << endl;
    cin.read(buffer4, 5);
    cout << endl << "The sentence entered was: " << endl;
    cout.write(buffer4, cin.gcount());
    cout << endl;


}