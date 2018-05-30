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
            std::cout << "COMMAND: git help <command> OR  man git-<command>" << "\n";
            std::cout << "USE: Summon exhaustive help on how to use <command>" << "\n";
            std::cout << "OPTIONS: -h => give more concise help. Example: git add -h" << "\n\n";
        }

        else if (choice == "gConfig")
        {
            std::cout << "~~~~~~~~~~~~ COMMAND ~~~~~~~~~~~~ " << "\n\n";

            std::cout << "git config" << "\n";
            std::cout << "USE: Reads and writes contributor's git settings";
            std::cout << "\n\n\n";


            std::cout << " ~~~~~~~~~~~~ OPTION(S) ~~~~~~~~~~~~ " << "\n\n";

            std::cout << "NONE + argument" << "\n";
            std::cout << "USE: Reads and writes values in tracked project only" << "\n\n";

            std::cout << "--global" << "\n";
            std::cout << "USE: Reads and writes values specific personally to you, the user." << "\n\n";

            std::cout << "--system" << "\n";
            std::cout << "USE: Reads and writes values applied to every user on the system and all their repositories." << "\n\n";

            std::cout << "--list" << "\n";
            std::cout << "USE: List all Git settings (You can also check a specific key’s value is by typing git config <key>)";
            std::cout << "\n\n\n";


            std::cout << "~~~~~~~~~~~~ ARGUMENT(S) ~~~~~~~~~~~~ " << "\n\n";

            std::cout << "alias.<shortcut> <command>" << "\n\n";
            std::cout << "USE: Creates shortcuts (names defined by user) of git commands and stores them in <options> settings." << "\n";
            std::cout << "Start the command with a '!' to refer to an external command (not a git subcommand as with gitk)." << "\n";
            std::cout << "Useful shortcuts to implement: alias.co checkout // alias.br branch // alias.ci commit // alias.st status" << "\n";
            std::cout << "alias.unstage 'reset HEAD --' // alias.last 'log -1 HEAD'" << "\n\n";

            std::cout << "core.editor emacs" << "\n";
            std::cout << "USE: Changes default text editor that will be used when Git needs you to type in a message" << "\n";

            std::cout << "user.email johndoe@example.com " << "\n";
            std::cout << "USE: Sets contributor's email" << "\n";

            std::cout << "user.name \"John Doe\" " << "\n";
            std::cout << "USE: Sets contributor's name ";
            std::cout << "\n\n\n";
        }

        else if (choice == "gTrack")
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

        else if (choice == "gRemote_repo")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gBranch")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gRemote_branch")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gLog")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gTag")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gRemote_tag")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gAmend")
        {
            std::cout << "COMMAND: " << "\n";
            std::cout << "USE: " << "\n";
            std::cout << "OPTIONS: " << "\n\n";
        }

        else if (choice == "gUntrack")
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