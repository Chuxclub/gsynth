#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_commands.h"
#include "gsynth_generic_selections.h"
#include "cmd_selections.h"

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
        {
            git_cmd_amending();
            amending_selection();
        }

        else if (choice == "branching")
        {
            git_cmd_branching();
            branching_selection();
        }

        else if (choice == "configuring")
        {
            git_cmd_configuring();
            configuring_selection();
        }

        else if (choice == "log")
        {
            git_cmd_log();
            log_selection();
        }

        else if (choice == "manual")
            git_cmd_manual();

        else if (choice == "remote_branches")
        {
            git_cmd_remote_branches();
            remote_branches_selection();
        }

        else if (choice == "remote_repos")
        {
            git_cmd_remote_repos();
            remote_repos_selection();
        }

        else if (choice == "remote_tags")
            git_cmd_remote_tags();

        else if (choice == "tagging")
        {
            git_cmd_tagging();
            tagging_selection();
        }

        else if (choice == "tracking")
        {
            git_cmd_tracking();
            tracking_selection();
        }

        else if (choice == "untracking")
        {
            git_cmd_untracking();
            untracking_selection();
        }

        else if (choice == "help" || choice == "back")
            main_generic_selection(choice);

        else if (choice == "quit")
            break;

        else
            main_generic_selection(choice);
    }

    return 0;
}