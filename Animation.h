#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Animation
{
private:
    Vector2u texture;
//    float deltatime;
    float currentFrame=0;
public:
    IntRect uvRect;
    Animation(Texture texture, int norow,int nocol);
    ~Animation();
    void Update(int row, float time);
//    void flipFace();
};

