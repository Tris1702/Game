//
// Created by phuonghoa on 22/10/2020.
//
#pragma once
#include<SFML/Graphics.hpp>
#include<bits/stdc++.h>
using namespace sf;

class Player
{
private:
    Sprite player;
    Texture texture;
public:
    Player();
    ~Player();
    void Move(float x, float y,Vector2u border);
    void setTexture(std::string s);
    void setPlayer(IntRect uvRect);
    Sprite getPlayer();
    void flipFace(IntRect uvRect);
    Texture getTexture();
    void setPosition(Vector2f tmp);
    void died();
};
