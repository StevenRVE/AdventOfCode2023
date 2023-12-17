#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void firstDigit(string line, vector<int> &digits) {
    // get first digit of each line
    for (int i = 0; i < line.length(); i++) {
        if (isdigit(line[i])) {
            digits.push_back(line[i]);
            break;
        }
    }
}

void lastDigit(string line, vector<int> &digits) {
    // get last digit of each line
}

void readLines(string& filename, vector<string> &lines) {
    // read lines from a text file and put in a vector
    ifstream file(filename);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            lines.push_back(line);
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cerr << "Error opening file: " << filename << endl;
    }

    for (int i = 0; i < lines.size(); i++) {
        cout << lines[i] << endl;
    }

    cout << "Number of lines: " << lines.size() << endl;
}

int main(int argc, char** argv) {
    // each line, first digit and last digit
    /*
     * 1abc2
     * pqr3stu8vwx
     * a1b2c3d4e5f
     * treb7uchet
    */

    // Vector to store lines
    vector<string> lines;

    // read lines from a text file and put in a vector
    string filename = "../puzzle-input/adventofcode-2023-day-1-input.txt";

    readLines(filename, lines);

    return 0;
}
