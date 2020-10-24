//
// Created by phuonghoa on 24/10/2020.
//
#pragma once
#include<SFML/Graphics.hpp>
#include<bits/stdc++.h>
#define mp make_pair
using namespace std;
using namespace sf;
class Map
{
private:
    vector<vector<vector<pair<RectangleShape,bool> > > > map5x5;
public:
    pair<int,int> holem51[5]={mp(3,0),mp(4,0),mp(1,1),mp(3,1),mp(4,1)};
    void draw5x5(RenderWindow &window,int nomap);
    void dissappearmap(RenderWindow &window, int nomap);
    void createMap5x5(Vector2f startposition);
    bool check(Vector2f position);
};

