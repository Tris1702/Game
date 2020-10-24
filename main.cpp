#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animation.h"
#include "Player.h"
#include "Map.h"
using namespace sf;

int main()
{
    RenderWindow window (VideoMode(800,800), "Game",Style::Default);
    float fbs=0.01;

    Player player;
    player.setTexture("tux_from_linux.png");
    Animation animation(player.getTexture(),3,9);
    bool face=1;//1 right, 0 left
    Vector2f startpostition(0.0f,150.0f),finishposition(650.0f,650.0f);
    player.setPosition(startpostition);
    Map map;
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }
        bool ok=0;
        if (Keyboard::isKeyPressed(Keyboard::Key::D))
        {
            animation.Update(1,fbs);
            player.setPlayer(animation.uvRect);
            if (!face) {
                player.flipFace(animation.uvRect);
                face=1;
            }
            player.Move(2.0f,0.0f,window.getSize());
            ok=1;
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::A))
        {
            animation.Update(1,fbs);
            player.setPlayer(animation.uvRect);
            if (face)
            {
                player.flipFace(animation.uvRect);
                face=0;
            }
            else
            player.Move(-2.0f, 0.0f,window.getSize());
            ok = 1;
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::W))
        {
            animation.Update(2,fbs);
            player.setPlayer(animation.uvRect);
            player.Move(0.0f, -2.0f,window.getSize());
            ok = 1;
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::S))
        {
            animation.Update(5,fbs);
            player.setPlayer(animation.uvRect);
            player.Move(0.0f, 2.0f,window.getSize());
            ok = 1;
        }
        if (!ok)
        {
            animation.Update(0, fbs);
            player.setPlayer(animation.uvRect);
        }
//        if (map.check(player.getPlayer().getPosition()))
//        {
//            animation.Update(8,fbs);
//            player.setPlayer(animation.uvRect)
//        }
        window.clear(Color::White);
        map.createMap5x5(Vector2f(startpostition.x+100.0f,startpostition.y));
        map.draw5x5(window,0);
        map.dissappearmap(window,0);
        window.draw(player.getPlayer());
        window.display();
    }
    return 0;
}