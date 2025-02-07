#include <iostream>
#include <fstream>
#include <string>

void writeToFile(const std::string& filename) {
    std::ofstream outfile(filename);

    if (outfile.is_open()) {
        outfile << "Hello worlds.\n";
        outfile << "Tien Phat.\n";
        outfile.close();
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }
}

void readFromFile(const std::string& filename) {
    std::ifstream infile(filename);

    std::string content;

    if (infile.is_open()) {
        while (std::getline(infile, content)) {
            std::cout << content << "\n";
        }
        
        infile.close();
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }
}

int main() {
    std::string filename = "example.txt";

    writeToFile(filename);

    readFromFile(filename);

    return 0;
}
