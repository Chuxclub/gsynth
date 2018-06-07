#include <iostream>
#include "std_lib_facilities.h"
#include "git_commands.h"
#include "gsynth_generic_selections.h"
#include "cmd_selections.h"

int main()
{
    string choice;

    while (true)
    {
        std::cout << "\n\n" << "============== *** gsynth - Git commands synthesises software *** ==============" << "\n\n";

        std::cout << "Enter a valid command ('help' for available commands): ";
        std::cin >> choice;

        std::cout << "\n" << "================================================================================" << "\n\n";

        if (choice == "amending")
            amending_selection();

        else if (choice == "branching")
            branching_selection();

        else if (choice == "configuring")
            configuring_selection();

        else if (choice == "log")
            log_selection();

        else if (choice == "manual")
            git_cmd_manual();

        else if (choice == "remote_branches")
            remote_branches_selection();

        else if (choice == "remote_repos")
            remote_repos_selection();

        else if (choice == "remote_tags")
            remote_tags_selection();

        else if (choice == "tagging")
            tagging_selection();

        else if (choice == "tracking")
            tracking_selection();

        else if (choice == "untracking")
            untracking_selection();

        else if (choice == "help" || choice == "back")
            main_generic_selection(choice);

        else if (choice == "quit")
            break;

        else
            main_generic_selection(choice);
    }

    return 0;
}