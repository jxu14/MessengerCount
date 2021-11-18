#include <iostream>
#include <stdexcept>
#include <fstream>
#include <string>

void openFile(std::ifstream &infile);


int main() {
    std::ifstream infile;
    openFile(infile);

    int count1 = 0;
    int count2 = 0;
    std::string fname;
    std::string lname;
    std::string name;
    std::string word;
    std::string str;
//    for(int i = 0; i < 20; ++i) {
//        std::getline(infile, str);
//        std::cout<< str << std::endl;
//    }
    bool name_found = false;
    while(infile >> word && !name_found) {
        if(word == "\"name\":") {
            infile >> fname;
            infile >> lname;
            name_found = true;
        }

    }
    name = fname + " " + lname;
    name = name.substr(1, name.length()-2);
//    std::cout << fname << std::endl;
//    std::cout << lname << std::endl;
//    std::cout << name << std::endl;



//    std::string other = "      \"sender_name\": \"" + name + "\",";
//    while(std::getline(infile, str)) {
//        if (str == other) {
//            count1++;
//        }
//        if (str == "      \"sender_name\": \"Jeremy Xu\",") {
//            count2++;
//        }
//
//    }
    while(std::getline(infile, str)) {
        if (str == "      \"sender_name\": \"" + name + "\",") {
            count1++;
        }
        if (str == "      \"sender_name\": \"Jeremy Xu\",") {
            count2++;
        }
    }

    std::cout << fname.substr(1) << "\t me " << "\n" << count1 << "\t" << count2 << std::endl;
//    std::cout << "emoji: " << emojicount;
    return 0;
}


void openFile(std::ifstream &infile) {

    // open input data file
    std::string inFileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> inFileName;
    infile.open(inFileName.c_str());
    if (infile.fail()) {
        std::cout << "Error opening input data file" << std::endl;
        std::cout << "press enter to exit";
        std::cin.get();
        std::cin.get();
        exit(1);
    }


}

