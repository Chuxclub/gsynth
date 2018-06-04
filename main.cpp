#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_commands.h"
#include "gsynth_generic_selections.h"

int main()
{
    string choice;

    while (true)
    {
        std::cout << "\n\n" << "=================== *** gsynth - Git commands synthesises software *** ===================" << "\n\n";

        std::cout << "Enter a valid command ('help' for available commands): ";
        std::cin >> choice;

        std::cout << "\n" << "==========================================================================================" << "\n\n";

        if (choice == "amending")
            git_cmd_amending();

        else if (choice == "branching")
            git_cmd_branching();

        else if (choice == "configuring")
            git_cmd_configuring();

        else if (choice == "log")
            git_cmd_log();

        else if (choice == "manual")
            git_cmd_manual();

        else if (choice == "remote_branches")
            git_cmd_remote_branches();

        else if (choice == "remote_repos")
            git_cmd_remote_repos();

        else if (choice == "tracking")
            git_cmd_tracking();

        else if (choice == "remote_tags")
            git_cmd_remote_tags();

        else if (choice == "tagging")
            git_cmd_tagging();

        else if (choice == "untracking")
            git_cmd_untracking();

        else if (choice == "help" || choice == "back")
            main_generic_selection(choice);

        else if (choice == "quit")
            break;

        else
            std::cout << "\n\n" << "/!\\ WRONG INPUT /!\\ Please check spelling" << "\n\n\n\n";
    }

    return 0;
}