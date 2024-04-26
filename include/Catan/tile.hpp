#ifndef _CAT_TILE_CAT_
#define _CAT_TILE_CAT_

namespace catan {

enum CatanResoureseType{

    Empty = 0,
    Brick = 1,
    Ore = 2,
    Sheep = 3,
    Wheat = 4,
    Wood = 5
};

class CatanTile
{
private:
    CatanResoureseType type;
    int activationNumber;
public:
    CatanTile(CatanResoureseType type, int activationNumber);
    ~CatanTile();

    CatanResoureseType getType();
};
}

#endif