#pragma once

struct GameData;

class InputLogic
{
    public:
        InputLogic(GameData& data);
        void update();
    private:
        GameData& mData;
};
