#include <iostream>

#include "catan/tile.hpp"

int main(int argc, char *argv[]) {

    catan::CatanTile a(catan::CatanResoureseType::Wood, 12);

    std::cout << a.getType();
}