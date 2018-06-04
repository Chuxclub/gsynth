//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"

void ghelp()
{
    std::cout << "================== *** gsynth help *** ==================" << "\n\n";

    std::cout << "'back' => Go to previous selection" << "\n";
    std::cout << "'quit' => Exit program (has to be used in main menu)" << "\n\n";

    std::cout << "IMPORTANT: Replace all spaces by underscores (this character: _ ) when typing in your selected commands" << "\n";
    std::cout << "           Example: git push <origin> <branch> => Type in: git_push_<origin>_<branch>" << "\n";
    std::cout << "           Tip: Some commands have shortcuts like git push <origin> <branch> => Type in: git_push" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~ MAIN MENU COMMANDS ~~~~~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "'amending' => Learn how to make small corrections to commits, staged files, etc." << "\n";
    std::cout << "'branching' => Learn how to manage and use git branches in your project" << "\n";
    std::cout << "'configuring' => Learn how to summon and use your git settings" << "\n";
    std::cout << "'manual' => Learn how to summon and use git manual" << "\n";
    std::cout << "'log' => Learn how to summon and use your project's log" << "\n";
    std::cout << "'remote_branches' => Learn how to manage remote branches" << "\n";
    std::cout << "'remote_repos' => Learn how to manage remote repositories" << "\n";
    std::cout << "'remote_tags' => Learn how to manage remote tags" << "\n";
    std::cout << "'tagging' => Learn how to summon and use tags in your project" << "\n";
    std::cout << "'tracking' => Learn how to summon and use projects' tracking commands" << "\n";
    std::cout << "'untracking' => Learn how to untrack projects' files" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "=========================================================" << "\n\n";

    string proceed;
    while(true)
    {
        std::cout << "Enter 'p' when you are ready to proceed: ";
        cin >> proceed;

        if(proceed == "p")
            break;
        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }
}