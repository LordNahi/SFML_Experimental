#pragma once

#include <SFML/Graphics.hpp>

#include "State.hpp"
#include "Game.hpp"

namespace GameTools
{
    class DefaultScreen : public State
    {
    public:
        DefaultScreen(GameDataRef data);

        void Init();
        void HandleInput();
        void Update(float dt);
        void Draw(float dt);

    private:
        GameDataRef _data;

        sf::Clock _clock;
        sf::Texture _backgroundTexture;
        sf::Sprite _background;
    };
} // namespace GameTools