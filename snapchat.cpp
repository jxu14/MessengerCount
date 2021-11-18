#include <iostream>
#include <stdexcept>
#include <fstream>
#include <string>

void openFile(std::ifstream &infile);


int main() {
    std::cout << "Snapchat: " << std::endl << std::endl;
    std::ifstream infile;
    openFile(infile);

    int count1 = 0;
    int count2 = 0;

    std::string word;
    std::string name;
    std::string username = "aidanchueh";
    std::string formattedUsername = "\"" + username + "\",";

    while(infile >> word) {
        if(word == "{\"From\":") {
            infile >> name;
            if (name == formattedUsername) {
                count1++;
            }
        } else if (word == "{\"To\":") {
            infile >> name;
            if (name == formattedUsername) {
                count2++;
            }
        }

    }

    std::cout << username << " snapped me " << count1 << " times between 12/20 and 1/20." << std::endl;
    std::cout << "I snapped " << username << " " << count2 << " times between 12/20 and 1/20." << std::endl;

    return 0;
}


void openFile(std::ifstream &infile) {

    // open input data file
//    std::string inFileName;
//    std::cout << "Enter the name of the input file: ";
//    std::cin >> inFileName;
    std::string inFileName = "snap.txt";
    infile.open(inFileName.c_str());
    if (infile.fail()) {
        std::cout << "Error opening input data file" << std::endl;
        std::cout << "press enter to exit";
        std::cin.get();
        std::cin.get();
        exit(1);
    }


}

