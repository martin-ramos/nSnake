#ifndef GAMESTATEMAINMENU_H_DEFINED
#define GAMESTATEMAINMENU_H_DEFINED

#include "GameState.hpp"
//#include "Menu.hpp"
//#include "Music.hpp"

/// Everything that happens on the main menu.
class GameStateMainMenu: public GameState
{
public:
    GameStateMainMenu();
    virtual ~GameStateMainMenu();

    /// Constructs everything necessary for the menu.
    void load(int stack=0);

    /// Destroys anything builded during the menu.
    int unload();

    /// Updates all possible things on the menu.
    ///
    /// @return A status code indicating what t odo (should we
    ///         change states/quit the game?). The codes are
    ///         defined on GameState.hpp.
    GameState::StateCode update(float dt);

    /// Shows everything onscreen;
    void render();

private:
//    Music* music;     ///< Menu's background music.
//    Menu* menu;       ///< The actual game menu.

};

#endif //GAMESTATEMAINMENU_H_DEFINED
