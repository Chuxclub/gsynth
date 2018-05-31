//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"

int git_cmd_list(string a)
{
    if(a == "configuring")
    {
        while(1)
        {
            std::cout << "\n";
            std::cout << "~~~~~~~~~~~~~~~ CONFIGURATION COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "git config" << "\n";
            std::cout << "USE: Reads and writes contributor's git settings";
            std::cout << "\n\n";

            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Select a command you want to learn how to use ('help' for available commands): ";
            string cmd_options;
            std::cin >> cmd_options;

            if(cmd_options == "git_config")
                git_config_descriptions();

            else if(cmd_options == "help")
                ghelp();

            else if(cmd_options == "back")
                break;

            else if(cmd_options == "quit")
            {
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
                std::cout << "/!\\ WRONG INPUT /!\\ You are not on main menu, enter 'back' until main menu before exiting";
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
            }


            else
                std::cout << "\n\n" << "/!\\ WRONG INPUT /!\\ Please check spelling" << "\n\n\n\n";
        }
    }

    else if(a == "manual")
    {
        while(1)
        {
            std::cout << "\n";
            std::cout << "~~~~~~~~~~~~~~~ MANUAL COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "COMMAND: git help <command>" << "\n";
            std::cout << "USE: Summon exhaustive help on how to use <command>" << "\n\n";

            std::cout << "COMMAND: man git-<command>" << "\n";
            std::cout << "USE: Summon exhaustive help on how to use <command>" << "\n\n";

            std::cout << "COMMAND: git <command> -h" << "\n";
            std::cout << "USE: gives more concise help. Example: git add -h" << "\n\n";

            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Select a command you want to learn how to use ('help' for available commands): ";
            string cmd_options;
            std::cin >> cmd_options;

            if(cmd_options == "git_help_<command>")
                git_manual_descriptions("git_help_<command>");

            else if(cmd_options == "man_git-<command>")
                git_manual_descriptions("man_git-<command>");

            else if(cmd_options == "git_<command>_-h")
                git_manual_descriptions("git_<command>_-h");

            else if(cmd_options == "help")
                ghelp();

            else if(cmd_options == "back")
                break;

            else if(cmd_options == "quit")
            {
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
                std::cout << "/!\\ WRONG INPUT /!\\ You are not on main menu, enter 'back' until main menu before exiting";
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
            }

            else
            {
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
                std::cout << "/!\\ WRONG INPUT /!\\ Please check spelling";
                std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
            }
        }
    }
}

