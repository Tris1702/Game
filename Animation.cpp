#include "Animation.h"

Animation::~Animation(){}
Animation::Animation(sf::Texture texture, int norow, int nocol)
{
    this->texture.x= texture.getSize().x/norow;
    this->texture.y= texture.getSize().y/nocol;
    uvRect.height=this->texture.y;
    uvRect.width=this->texture.x;
}
void Animation::Update(int row,float time)
{
    this->currentFrame+=time;
    if (currentFrame>=3) currentFrame=0;
    uvRect.top=uvRect.height*row;
    uvRect.left=uvRect.width*int(currentFrame);
}


