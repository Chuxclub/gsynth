//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "gsynth_generic_selections.h"

void main_generic_selection(string choice)
{
    if (choice == "help")
        ghelp();

    else if (choice == "back")
        std::cout << "You are already on main menu ('quit' to exit program)" << "\n\n";
}

void cmd_generic_selection(string cmd_options)
{
    if(cmd_options == "help")
        ghelp();

    else if(cmd_options == "quit")
    {
        std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << " You are not on main menu, enter 'back' until main menu before exiting";

        std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
    }
}