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

    std::cout << "'manual' => Learn how to summon and use git manual" << "\n";
    std::cout << "'configuring' => Learn how to summon and use " << "\n";
    std::cout << "'tracking' => Learn how to summon and use " << "\n";
    std::cout << "'remote_repos' => Learn how to summon and use " << "\n";
    std::cout << "'branching' => Learn how to summon and use git " << "\n";
    std::cout << "'remote_branches' => Learn how to summon and use " << "\n";
    std::cout << "'log' => Learn how to summon and use " << "\n";
    std::cout << "'tagging' => Learn how to summon and use " << "\n";
    std::cout << "'remote_tags' => Learn how to summon and use " << "\n";
    std::cout << "'amending' => Learn how to summon and use " << "\n";
    std::cout << "'untracking' => Learn how to summon and use " << "\n\n";

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