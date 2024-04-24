#include "catan/tile.hpp"

catan::CatanTile::CatanTile(catan::CatanResoureseType type = Empty, int activationNumber = 13) {
    this->type = type;
    this->activationNumber = activationNumber;
}
catan::CatanTile::~CatanTile() = default;

catan::CatanResoureseType catan::CatanTile::getType() {
    return type;
}