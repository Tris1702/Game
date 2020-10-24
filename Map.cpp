//
// Created by phuonghoa on 24/10/2020.
//

#include "Map.h"
using namespace std;
using namespace sf;
void Map::draw5x5(RenderWindow &window, int nomap)
{
    for(int i=0;i<this->map5x5[nomap].size();i++)
        for(int j=0;j<this->map5x5[nomap][i].size();j++)
        {
            if (map5x5[nomap][i][j].second)
            {
                map5x5[nomap][i][j].first.setFillColor(Color::Red);
            }
            window.draw(map5x5[nomap][i][j].first);
        }
}
void Map::dissappearmap(RenderWindow &window, int nomap)
{
    for(int i=0;i<this->map5x5[nomap].size();i++)
        for(int j=0;j<this->map5x5[nomap][i].size();j++)
        {
            window.draw(map5x5[nomap][i][j].first);
        }
}
void Map::createMap5x5(Vector2f startposition)
{
    //map1
    vector<vector<pair<RectangleShape,bool> > > maptmp(5,vector<pair<RectangleShape,bool> > (5));
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<5;k++)
                if (holem51[k].first==i&&holem51[k].second==j)
                {
                    maptmp[i][j].second=1;
                    break;
                }
            maptmp[i][j].first.setOutlineThickness(5.0f);
            maptmp[i][j].first.setOutlineColor(Color::Black);
            maptmp[i][j].first.setSize(Vector2f(100.0f,100.0f));
            maptmp[i][j].first.setPosition(Vector2f(startposition.x+i*100.0f,startposition.y+j*100.0f));
        }
    this->map5x5.push_back(maptmp);
}
bool Map::check(Vector2f position)
{

}
