#include <iostream>
#include <fstream>
#include <string>

#define FILE "jabberwocky.txt"
#define FILE2 "jabberwocky_lat.txt"
#define FILE3 "Outputdoc.txt"
#define FILE4 "Outputdoc2.txt"
using namespace std;


int main()
{
    string tekstString;
    string tekstString2;
    char ch;
    char ch2;
    std::ifstream in_stream;
    std::ifstream in_stream2;
    std::ofstream out_stream;
    std::ofstream out_stream2;
    in_stream.open(FILE);
    in_stream2.open(FILE2);
    out_stream.open(FILE3);
    out_stream.open(FILE4);

    if (!in_stream || !in_stream2) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }

    in_stream.get(ch);
    in_stream >> std::noskipws;
    while (!in_stream.eof()) {
        in_stream.get(ch);
        tekstString.push_back(ch);
    }
    in_stream.close();
    reverse(tekstString.begin(), tekstString.end());
    std::cout << tekstString << std::endl;

    //Print de eerste achterstevoren.
    for (size_t i = 0; i != tekstString.size(); ++i) {
        ch << tekstString[i];
        std::cout << tekstString[i];
        out_stream.put(ch);
        
    }

    //Print ze allebij maar eerst een letter van de een en daarna een letter van de ander.
    while (!in_stream.eof() && !in_stream2.eof()) {
        in_stream.get(ch);
        out_stream2.put(ch);
        std::cout << ch << std::endl;
        in_stream2.get(ch);
        out_stream2.put(ch);
        std::cout << ch;
    }
    return 0;
}