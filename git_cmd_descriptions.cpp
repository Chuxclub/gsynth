//
// Created by crex on 31/05/18.
//
#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"
#include "gsynth_generic_selections.h"

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
void git_log_descriptions()
{
    std::cout << "\n\n" << "~~~~~~~~~~~~~~~ DESCRIPTION: git log syntax ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND SYNTAX: git log (<option 1>) (<option 2>) (<option 3>) (<option ...>)";

    std::cout << "\n\n" << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";

    while(true)
    {
        std::cout << "Do you want to have complementary information about log format options or search filters options?" << "\n\n";
        std::cout << "Type 'format' for log format options or 'filters' for search filters ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "format")
        {
            std::cout << "\n";
            std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git log <format options> ~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "OPTION(S):     -<n>" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Limits the number of log entries displayed" << "\n";
            std::cout << "EXAMPLE:       git log -2" << "\n\n";

            std::cout << "OPTION(S):     --oneline" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Shorthand for --pretty=oneline --abbrev-commit used together" << "\n";
            std::cout << "EXAMPLE:       git log --oneline" << "\n\n";

            std::cout << "OPTION(S):     -p" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Shows the difference (the patch output) introduced in each commit" << "\n";
            std::cout << "EXAMPLE:       git log -p" << "\n\n";

            std::cout << "OPTION(S):     --graph" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Displays an ASCII graph of the branch and merge history beside the log output." << "\n";
            std::cout << "EXAMPLE:       git log --graph" << "\n\n";

            std::cout << "OPTION(S):     --pretty=" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Changes the log output to formats other than the default." << "\n";
            std::cout << "               + oneline: prints each commit on a single line." << "\n";
            std::cout << "               + short, full, and fuller: the output in roughly the same format but with less or more information." << "\n";
            std::cout << "               + format: which allows you to specify your own log output format " << "\n";
            std::cout << "EXAMPLE:       git log --pretty=short" << "\n\n";

            std::cout << "OPTION(S):     --no-merges" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Prevents the display of merge commits cluttering up your log history" << "\n";
            std::cout << "EXAMPLE:       git log --no-merge" << "\n\n";

            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
        }

        else if(cmd_options == "filters")
        {
            std::cout << "\n";
            std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git log <filters options> ~~~~~~~~~~~~~~~" << "\n\n";

            std::cout << "OPTION(S):     --after" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Limits the commits to those made after the specified date" << "\n";
            std::cout << "EXAMPLE:       git log --after=2.weeks" << "\n\n";

            std::cout << "OPTION(S):     --before" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Limits the commits to those made before the specified date." << "\n";
            std::cout << "EXAMPLE:       git log --before=2.weeks" << "\n\n";

            std::cout << "OPTION(S):     --author:" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Only shows commits in which the author entry matches the specified string" << "\n";
            std::cout << "EXAMPLE:       git log --author=florian" << "\n\n";

            std::cout << "OPTION(S):     --grep" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Only shows commits with a commit message containing the string" << "\n";
            std::cout << "EXAMPLE:       git log --grep=\"your string\"" << "\n\n";

            std::cout << "OPTION(S):     -S" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Only shows commits adding or removing code matching the string" << "\n";
            std::cout << "EXAMPLE:       git log -S=\"your string\"" << "\n\n";

            std::cout << "OPTION(S):     --decorate" << "\n";
            std::cout << "ARGUMENT(S):   none" << "\n";
            std::cout << "USE:           Shows where the branch pointers are pointing" << "\n";
            std::cout << "EXAMPLE:       git log --decorate" << "\n\n";

            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
        }

        else if(cmd_options == "back")
            break;

        else if(cmd_options == "help" || cmd_options == "quit")
            cmd_generic_selection(cmd_options);

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

    if (a == "git_fetch")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git fetch ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     none" << "\n";
        std::cout << "ARGUMENT(S):   <remote> + <branch>" << "\n";
        std::cout << "USE:           Gives you the possibility to merge later" << "\n";
        std::cout << "               Especially useful when you're not ready to commit and push yet (as in a WIP)..." << "\n";
        std::cout << "EXAMPLE:       git fetch origin master" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }

    else if (a == "git_pull")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git pull ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     none" << "\n";
        std::cout << "ARGUMENT(S):   <remote> + <branch>" << "\n";
        std::cout << "USE:           Shortcut when you are ready to commit and push" << "\n";
        std::cout << "EXAMPLE:       git pull origin master" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }


    else if (a == "git_push")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git push ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     none" << "\n";
        std::cout << "ARGUMENT(S):   <remote> + <branch>" << "\n";
        std::cout << "USE:           Pushes local <branch> to remote <branch>" << "\n";
        std::cout << "               Hence <branch> has a double meaning here..." << "\n";
        std::cout << "EXAMPLE:       git push origin master" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
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


/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS DESCRIPTIONS  -------------------------- */
void git_remote_repos_descriptions()
{
    std::cout << "\n";

    std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git remote show ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "OPTION:        none" << "\n";
    std::cout << "ARGUMENT(S):   <remote>" << "\n";
    std::cout << "USE:           Shows which branch is automatically pushed to when you run git push while on certain branches." << "\n";
    std::cout << "               Shows you which remote branches on the server you don’t yet have," << "\n";
    std::cout << "               which remote branches you have that have been removed from the server," << "\n";
    std::cout << "               and multiple local branches that are able to merge automatically" << "\n";
    std::cout << "               with their remote-tracking branch when you run git pull)" << "\n";
    std::cout << "EXAMPLE:       git remote show origin" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";

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

    if (a == "git_tag_<tag_name>")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git tag <tag_name> ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "FYI: Mere pointer to a text file where <tag_name> is stored" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }

    else if (a == "git_tag_-a")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git tag -a <tag_name> (<commit_checksum>) -m <description> ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "FYI: A checksum is a string of letters and numbers associated to a file after having been" << "\n\n";
        std::cout << "     processed (we say 'hashed' by analogy to cooking) by a function as a way to check its integrity" << "\n\n";
        std::cout << "     as well as to store it more easily and efficiently. Checksums have many other applications" << "\n\n";
        std::cout << "     as in security where they are used to protect passwords but also in data transmissions (cf. integrity)..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }

    else if (a == "git_tag")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git tag ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     -l" << "\n";
        std::cout << "ARGUMENT(S):   <tag_name + wildcard> OR <wildcard + tag_name> OR <wildcards>..." << "\n";
        std::cout << "USE:           Adds wildcards support" << "\n";
        std::cout << "EXAMPLE:       git tag -l \"v1.8.5*\"" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }

    else if (a == "git_show")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git show <tag_name> ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "FYI: If tag is lightweight it will display <tag_name> and the commit it refers to" << "\n";
        std::cout << "FYI: If tag is annotated it will display everything an annotated tag supports" << "\n";
        std::cout << "FYI: (description, author...) + the commit it refers to" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
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

/* -------------------------- GIT TRACKING COMMANDS DESCRIPTIONS  -------------------------- NOT DONE*/
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

/* -------------------------- GIT UNTRACKING COMMANDS DESCRIPTIONS  -------------------------- NOT DONE*/
void git_untracking_descriptions(string a)
{
    std::cout << "\n";

    if (a == "git_commit_--amend")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git log ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     " << "\n";
        std::cout << "ARGUMENT(S):   " << "\n";
        std::cout << "USE 1:         " << "\n";
        std::cout << "USE 2:         " << "\n";
        std::cout << "WARNING:       " << "\n";
        std::cout << "EXAMPLE:       " << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
    }

    else if (a == "git_reset_HEAD_<file>")
    {
        std::cout << "~~~~~~~~~~~~~~~ DESCRIPTION: git log ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "OPTION(S):     " << "\n";
        std::cout << "ARGUMENT(S):   " << "\n";
        std::cout << "USE 1:         " << "\n";
        std::cout << "USE 2:         " << "\n";
        std::cout << "WARNING:       " << "\n";
        std::cout << "EXAMPLE:       " << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n\n";
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