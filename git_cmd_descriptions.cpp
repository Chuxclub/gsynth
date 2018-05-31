//
// Created by crex on 31/05/18.
//
#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"

void git_config_descriptions()
{
    std::cout << "\n";

    std::cout << "COMMAND SYNTAX: git config <option> <key> <user input value>" << "\n\n\n";


    std::cout << "~~~~~~~~~~~~~~~ OPTIONS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "none" << "\n";
    std::cout << "ARGUMENT(S): <key> + (<user input value>)" << "\n";
    std::cout << "USE 1: If no <user input value>, reads <key> in tracked project only" << "\n";
    std::cout << "USE 2: If a value is input, writes values in <key> but in tracked project only" << "\n";
    std::cout << "WARNING: Overwrites --global and --system <key> configuration" << "\n\n";

    std::cout << "--global" << "\n";
    std::cout << "ARGUMENT(S): <key> + (<user input value>)" << "\n";
    std::cout << "USE 1: If no <user input value>, reads values specific to you, the user in <key>" << "\n";
    std::cout << "USE 2: If <user input value>, writes values specific to you, the user in <key>" << "\n";
    std::cout << "WARNING: Overwrites --system <key> configuration" << "\n\n";

    std::cout << "--system" << "\n";
    std::cout << "ARGUMENT(S): <key> + (<user input value>)" << "\n";
    std::cout << "USE 1: If no <user input value>, reads values applied to every user on the system and all their repositories in <key>" << "\n";
    std::cout << "USE 2: If a <user input value>, writes values applied to every user on the system and all their repositories in <key> " << "\n\n";

    std::cout << "--list" << "\n";
    std::cout << "ARGUMENT(S): Takes no arguments";
    std::cout << "USE: Lists all <key>";
    std::cout << "\n\n\n";


    std::cout << "~~~~~~~~~~~~~~~ EXAMPLE OF KEYS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "alias.<shortcut> <user input command>" << "\n";
    std::cout << "USE: Creates shortcuts (names defined by user) of git commands and stores them in <options> settings." << "\n";
    std::cout << "Start the command with a '!' to refer to an external command (not a git subcommand as with gitk)." << "\n";
    std::cout << "Useful shortcuts to implement: alias.co checkout // alias.br branch // alias.ci commit // alias.st status" << "\n";
    std::cout << "alias.unstage 'reset HEAD --' // alias.last 'log -1 HEAD'" << "\n\n";

    std::cout << "core.editor <user input editor>" << "\n";
    std::cout << "USE: Changes default text editor that will be used when Git needs you to type in a message" << "\n\n";

    std::cout << "user.email <user input email> " << "\n";
    std::cout << "USE: Sets contributor's email" << "\n\n";

    std::cout << "user.name \"<user input name>\" " << "\n";
    std::cout << "USE: Sets contributor's name ";
    std::cout << "\n\n\n";
}

void git_manual_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_help_<command>")
        std::cout << "git help takes no options, argument is <command> only" << "\n\n";

    else if (a == "man_git-<command>")
        std::cout << "man git takes no options, argument is <command> only" << "\n\n";

    else if (a == "git_<command>_-h")
        std::cout << "Special syntax: argument is placed before the option, maybe other arguments or options exist";
}
