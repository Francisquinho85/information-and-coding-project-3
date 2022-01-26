#include "fcm.hpp"
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char** argv){
    int k =  atoi(argv[1]);
    int a = atoi(argv[2]);
    fcm test(k,a);
    test.readFile("t.txt");
    //test.printMap();
    test.writeMapToFile("mapaT.txt");
    //test.readMapFromFile("mapaPortugues.txt");
    // cout << "get_total context(ii) "<<test.get_total_context("ii")<< "\n";
    // cout << "get_entropy_context(ii) " << test.get_entropy_context("ii")<< "\n";
    // cout << "get_total_map() "<<test.get_total_map()<< "\n";
    // cout << "get_entropy_map() " << test.get_entropy_map()<< "\n";
    test.printMap();
    //test.print_alphabet();
    cout << test.getSymbolProb("ii","s") << endl;
    return 0;
}