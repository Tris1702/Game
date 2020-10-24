//
// Created by phuonghoa on 22/10/2020.
//

#include "Player.h"
using namespace sf;
Player::Player()=default;
Player::~Player()=default;
void Player::Move(float x, float y,Vector2u border)
{
    if (this->player.getPosition().x+x<0||this->player.getPosition().x+x>border.x||this->player.getPosition().y+y<0||this->player.getPosition().y+y>border.y) return;
    this->player.move(x,y);
}
Sprite Player::getPlayer()
{
    return this->player;
}
void Player::setTexture(std::string s)
{
    this->texture.loadFromFile(s);
    this->texture.setSmooth(true);
    this->player.setTexture(this->texture);
}
Texture Player::getTexture()
{
    return this->texture;
}
void Player::setPlayer(IntRect uvRect)
{
    this->player.setTextureRect(uvRect);
}
void Player::flipFace(IntRect uvRect)
{
    player.setOrigin(uvRect.height/2,uvRect.width/2);
    this->player.scale(-1,1);
}
void Player::setPosition(Vector2f tmp)
{
    this->player.setPosition(tmp);
}
void Player::died()
{

}