#include <iostream>
#include "std_lib_facilities.h"

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
        {
            std::cout << "'quit' => Exit program" << "\n\n";

            std::cout << "'gHelp' => Learn how to summon and use git manual" << "\n";
            std::cout << "'gConfig' => Learn how to summon and use " << "\n";
            std::cout << "'gTrack' => Learn how to summon and use " << "\n";
            std::cout << "'gRemote_repo' => Learn how to summon and use " << "\n";
            std::cout << "'gBranch' => Learn how to summon and use git " << "\n";
            std::cout << "'gRemote_branch' => Learn how to summon and use " << "\n";
            std::cout << "'gLog' => Learn how to summon and use " << "\n";
            std::cout << "'gTag' => Learn how to summon and use " << "\n";
            std::cout << "'gRemote_tag' => Learn how to summon and use " << "\n";
            std::cout << "'gAmend' => Learn how to summon and use " << "\n";
            std::cout << "'gUntrack' => Learn how to summon and use " << "\n\n";
        }

        else if (choice == "quit")
            break;


        else if (choice == "gHelp")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gConfig")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gTrack")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gRemote_repo")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gBranch")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gRemote_branch")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gLog")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gTag")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gRemote_tag")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gAmend")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else if (choice == "gUntrack")
        {
            std::cout << "HOW TO SUMMON: " << "\n\n";
            std::cout << "USE: " << "\n\n";
        }

        else
            std::cout << "\n\n" << "/!\\ WRONG INPUT /!\\ Please check spelling" << "\n\n\n\n";
    }

    return 0;
}