//
// Created by crex on 31/05/18.
//
#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"

/* -------------------------- GIT AMENDING COMMANDS DESCRIPTIONS  -------------------------- */
void git_amending_descriptions()
{
    std::cout << "\n";

    std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git commit --amend ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
    std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

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


/* -------------------------- GIT BRANCHING COMMANDS DESCRIPTIONS  -------------------------- */
void git_branching_descriptions()
{
    std::cout << "\n";

    std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git branch ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND SYNTAX: git branch <option> <branch>" << "\n\n";

    std::cout << "OPTION(S):    none" << "\n";
    std::cout << "ARGUMENT(S):  none" << "\n";
    std::cout << "USE:          Displays all branches" << "\n";
    std::cout << "EXAMPLE:      git branch" << "\n\n";

    std::cout << "OPTION(S):    none" << "\n";
    std::cout << "ARGUMENT(S):  <branch>" << "\n";
    std::cout << "USE:          Creates <branch>" << "\n";
    std::cout << "EXAMPLE:      git branch <branch>" << "\n\n";

    std::cout << "OPTION(S):    -d OR -D" << "\n";
    std::cout << "ARGUMENT(S):  <branch>" << "\n";
    std::cout << "USE:          Deletes <branch>" << "\n";
    std::cout << "EXAMPLE:      git branch -d OR -D <branch>" << "\n\n";
    std::cout << "WARNING:      -D forces delete and doesn't warn if there's a risk of data loss" << "\n";
    std::cout << "              always delete first with -d" << "\n";
    std::cout << "EXAMPLE:      git branch -d OR -D <branch>" << "\n\n";

    std::cout << "OPTION(S):    --merge OR --no-merge " << "\n";
    std::cout << "ARGUMENT(S):  none OR <branch>" << "\n";
    std::cout << "USE 1:        Displays branches that have been merged (--merge) or not merged yet in active branch (--no-merge)" << "\n";
    std::cout << "USE 2:        If <branch> argument is added => Displays branches that have been merged or not merged yet in <branch>" << "\n";
    std::cout << "EXAMPLE:      git branch --merge OR --no-merge (<branch>)" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

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


/* -------------------------- GIT CONFIGURING COMMANDS DESCRIPTIONS  -------------------------- */
void git_config_descriptions()
{
    std::cout << "\n";

    std::cout << "COMMAND SYNTAX: git config <option> <key> <user input value>" << "\n\n\n";


    std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git config ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "OPTION(S):     none" << "\n";
    std::cout << "ARGUMENT(S):   <key> + (<user input value>)" << "\n";
    std::cout << "USE 1:         If no <user input value>, reads <key> in tracked project only" << "\n";
    std::cout << "USE 2:         If a value is input, writes values in <key> but in tracked project only" << "\n";
    std::cout << "WARNING:       Overwrites --global and --system <key> configuration" << "\n";
    std::cout << "EXAMPLE:       git config <key> (<user input value>)" << "\n\n";

    std::cout << "OPTION(S):     --global" << "\n";
    std::cout << "ARGUMENT(S):   <key> + (<user input value>)" << "\n";
    std::cout << "USE 1:         If no <user input value>, reads values specific to you, the user in <key>" << "\n";
    std::cout << "USE 2:         If <user input value>, writes values specific to you, the user in <key>" << "\n";
    std::cout << "WARNING:       Overwrites --system <key> configuration" << "\n";
    std::cout << "EXAMPLE:       git config --global <key> (<user input value>)" << "\n\n";

    std::cout << "OPTION(S):     --system" << "\n";
    std::cout << "ARGUMENT(S):   <key> + (<user input value>)" << "\n";
    std::cout << "USE 1:         If no <user input value>, reads values applied to every user on the system and all their repositories in <key>" << "\n";
    std::cout << "USE 2:         If a <user input value>, writes values applied to every user on the system and all their repositories in <key> " << "\n";
    std::cout << "EXAMPLE:       git config --system <key> (<user input value>)" << "\n\n";

    std::cout << "OPTION(S):     --list" << "\n";
    std::cout << "ARGUMENT(S):   Takes no arguments" << "\n";
    std::cout << "USE:           Lists all <key>" << "\n";
    std::cout << "EXAMPLE:       git config --list" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";


    string example_choice;
    while (true)
    {
        std::cout << "Do you want some examples of useful keys?" << "\n";
        std::cout << "Enter 'y' for YES and 'n' for NO: " << "\n";
        std::cin >> example_choice;

        if (example_choice == "y")
        {
            std::cout << "~~~~~~~~~~~~~~~ EXAMPLE OF KEYS ~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "KEY 1: alias.<shortcut> <user input command>" << "\n";
            std::cout << "USE:   Creates shortcuts (names defined by user) of git commands and stores them in <options> settings." << "\n";
            std::cout << "       Start the command with a '!' to refer to an external command (not a git subcommand as with gitk)." << "\n";
            std::cout << "       Useful shortcuts to implement: alias.co checkout // alias.br branch // alias.ci commit // alias.st status" << "\n";
            std::cout << "       alias.unstage 'reset HEAD --' // alias.last 'log -1 HEAD'" << "\n\n";

            std::cout << "KEY 2: core.editor <user input editor>" << "\n";
            std::cout << "USE:   Changes default text editor that will be used when Git needs you to type in a message" << "\n\n";

            std::cout << "KEY 3: user.email <user input email> " << "\n";
            std::cout << "USE:   Sets contributor's email" << "\n\n";

            std::cout << "KEY 4: user.name \"<user input name>\" " << "\n";
            std::cout << "USE:   Sets contributor's name ";
            std::cout << "\n\n\n";
            break;
        }

        else if (example_choice == "n")
            break;

        else
        {
            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "Please check spelling";

            std::cout << "\n\n" << "~~~~~~~~~~~~~~~ /!\\ WRONG INPUT /!\\ ~~~~~~~~~~~~~~~~" << "\n\n";
        }
    }

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


/* -------------------------- GIT LOG COMMANDS DESCRIPTIONS  -------------------------- */
void git_log_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";


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


/* -------------------------- GIT REMOTE BRANCHES COMMANDS DESCRIPTIONS  -------------------------- */
void git_remote_branches_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

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


/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS DESCRIPTIONS  -------------------------- */
void git_remote_repos_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

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


/* -------------------------- GIT REMOTE TAGS COMMANDS DESCRIPTIONS  -------------------------- */
void git_remote_tags_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

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

/* -------------------------- GIT TAGGING COMMANDS DESCRIPTIONS  -------------------------- */
void git_tagging_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

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

/* -------------------------- GIT TRACKING COMMANDS DESCRIPTIONS  -------------------------- */
void git_tracking_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git commit --amend ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git reset HEAD <file> ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git checkout --<file> ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
    }


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

/* -------------------------- GIT UNTRACKING COMMANDS DESCRIPTIONS  -------------------------- */
void git_untracking_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "This is not a command as it is an option to the git commit command, still it belongs to the amending theme" << "\n";
        std::cout << "No more information than what've been said in the amending commands menu can be provided..." << "\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "Git reset might have other uses as it might have other arguments" << "\n";
        std::cout << "Unfortunately, I cannot provide more information than what've been said in the amending commands menu..." << "\n\n";
    }


    else if (a == "git_checkout_--<file>")
        std::cout << "git checkout has other uses depending on its options and arguments (see 'branching')" << "\n\n";

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