#include <iostream>
#include <stdexcept>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

typedef std::map<std::string, int>;

void openFile(std::ifstream &infile);


int main() {
    std::ifstream infile;
    openFile(infile);

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;


//    std::string fname;
//    std::string lname;
//    std::string name;
//    std::string word;
    std::string str = "";
//
//    bool name_found = false;
//    while (infile >> word && !name_found) {
//        if (word == "\"name\":") {
//            infile >> fname;
//            infile >> lname;
//            name_found = true;
//        }
//
//    }
//    name = fname + " " + lname;
//    name = name.substr(1, name.length() - 2);
    while(std::getline(infile, str)) {
        if (str == "      \"sender_name\": \"Jeremy Xu\",") {
            count1++;
        }
        if (str == "      \"sender_name\": \"Jeffrey Mi\",") {
            count2++;
        }
        if (str == "      \"sender_name\": \"Taylor Yamashita\",") {
            count3++;
        }
        if (str == "      \"sender_name\": \"Haley Ho\",") {
            count4++;
        }
        if (str == "      \"sender_name\": \"Laura Kim\",") {
            count5++;
        }
        if (str == "      \"sender_name\": \"Belinda Cheng\",") {
            count6++;
        }


    }

    std::cout <<  "Jeremy \t Jeff \t Tay \t Haley \t Laura \t Belinda \n"
    << count1 << "\t" << count2 << "\t" << count3 << "\t" << count4 << "\t" << count5 << "\t" << count6 << std::endl;

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

