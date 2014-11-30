#include <iostream>
using namespace std;

#include <chum/bucket.h>
#include <sqr.h>

int main(){
    std::cout << "Hello, World!" << std::endl;
    int piecesOfChum = CHUM_BUCKET;
    std::cout << "The chum bucket includes " << sqr(piecesOfChum) << " pieces of chum!" << std::endl;
    return 0;
}