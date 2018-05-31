#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_commands.h"

int main()
{
    string choice;

    std::cout << "*** gsynth - Git commands synthesises software ***" << "\n\n";

    while (true)
    {
        std::cout << "Enter a valid command ('help' for available commands): ";
        std::cin >> choice;
        std::cout << "\n";

        if (choice == "help")
            ghelp();

        else if (choice == "quit")
            break;

        else if (choice == "back")
            std::cout << "You are already on main menu ('quit' to exit program)" << "\n\n";


        else if (choice == "manual")
            git_cmd_list("manual");

        else if (choice == "configuring")
        {
            git_cmd_list("configuring");
        }

        else if (choice == "tracking")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";

            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "remote_repos")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "branching")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "remote_branches")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "log")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "tagging")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "remote_tags")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "amending")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "untracking")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else
            std::cout << "\n\n" << "/!\\ WRONG INPUT /!\\ Please check spelling" << "\n\n\n\n";
    }

    return 0;
}