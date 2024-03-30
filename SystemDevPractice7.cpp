#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Inverse(ifstream& f1, ofstream& f2) {
    double value;
    if (f1 >> value) {
        Inverse(f1, f2);
        f2 << value << "\n";
    }
}

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    if (!input.is_open() || !output.is_open()) {
        cerr << "Files no exist." << endl;
        return 1;
    }

    Inverse(input, output);

    input.close();
    output.close();

    cout << "Done." << endl;
    return 0;
}
