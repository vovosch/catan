#ifndef _CAT_MAP_CAT_
#define _CAT_MAP_CAT_

#include "tile.hpp"

namespace catan {

    class CatanMap
    {
    private:
        CatanTile map[19];
        int robberPos = 10;
        auto a = new int [36][3];
    public:
        CatanMap(/* args */);
        ~CatanMap();
    };
    
    CatanMap::CatanMap(/* args */)
    {
    }
    
    CatanMap::~CatanMap()
    {
    }
    
}

#endif