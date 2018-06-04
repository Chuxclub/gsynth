//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"
#include "gsynth_generic_selections.h"


/* -------------------------- GIT AMENDING COMMANDS  -------------------------- */
void git_cmd_amending()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ AMENDING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git commit --amend" << "\n";
        std::cout << "USE:     Combines staged changes with the previous commit instead of creating an entirely new commit. \n";
        std::cout << "         Can also be used to simply edit the previous commit message without changing its snapshot. \n";
        std::cout << "         Warning! Amending does not just alter the most recent commit, it replaces it entirely, meaning\n";
        std::cout << "         the amended commit will be a new entity with its own ref." << "\n\n";

        std::cout << "COMMAND: git reset HEAD <file>" << "\n";
        std::cout << "USE:     Unstages <file>" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git checkout --<file>" << "\n";
        std::cout << "USE:     Discards the changes of the defined file in the working directory." << "\n";
        std::cout << "WARNING: Any changes you made to that file are gone" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_commit_--amend")
            git_amending_descriptions();

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


/* -------------------------- GIT BRANCHING COMMANDS  -------------------------- */
void git_cmd_branching()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ BRANCHING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git branch" << "\n";
        std::cout << "USE:     Depending on the option it lets you creates new branches, delete branches or list branches" << "\n\n";

        std::cout << "COMMAND: git checkout <branch>" << "\n";
        std::cout << "USE:     Switches to existing <branch> branch’s head" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git checkout -b <branch>" << "\n";
        std::cout << "USE:     Creates a new branch named <branch> and automatically switches to it" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git merge <branch>" << "\n";
        std::cout << "USE:     Merges targeted <branch> to current branch (two methods: fast-forward or three-way)" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git mergetool" << "\n";
        std::cout << "USE:     Fires up graphical tool for merge-conflicts resolutions" << "\n\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_branch")
            git_branching_descriptions();

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


/* -------------------------- GIT CONFIGURING COMMANDS  -------------------------- */
void git_cmd_configuring()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ CONFIGURATION COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git config" << "\n";
        std::cout << "USE:     Reads and writes contributor's git settings";
        std::cout << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_config")
            git_config_descriptions();

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


/* -------------------------- GIT LOG COMMANDS -------------------------- */
void git_cmd_log()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ LOG COMMANDS ~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git log" << "\n";
        std::cout << "USE: Prints the commit history" << "\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_log")
            git_log_descriptions();

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


/* -------------------------- GIT MANUAL COMMANDS  -------------------------- */
void git_cmd_manual()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANUAL COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git help <command>" << "\n";
        std::cout << "USE:     Summon exhaustive help on how to use <command>" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: man git-<command>" << "\n";
        std::cout << "USE:     Summon exhaustive help on how to use <command>" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git <command> -h" << "\n";
        std::cout << "USE:     gives more concise help. Example: git add -h" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        string proceed;

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


/* -------------------------- GIT REMOTE BRANCHES COMMANDS -------------------------- NOT DONE*/
void git_cmd_remote_branches()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE BRANCHES COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git fetch <remote> <branch>" << "\n";
        std::cout << "USE:     Fetches <branch> in <remote> but doesn’t merge it yet" << "\n\n";

        std::cout << "COMMAND: git pull <remote> <branch>" << "\n";
        std::cout << "USE:     Automatically fetches and merges <branch> in <remote> into current branch" << "\n\n";

        std::cout << "COMMAND: git push <remote> <branch>" << "\n";
        std::cout << "USE:     Pushes local <branch> to <branch> in <remote>" << "\n";
        std::cout << "WARNING: When the command line does not specify where to push with the " << "\n";
        std::cout << "         <remote> argument, configuration for the current branch is consulted to " << "\n";
        std::cout << "         determine where to push. If the configuration is missing, it defaults to " << "\n";
        std::cout << "         origin." << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_fetch_<remote>_<branch>" || cmd_options == "git_fetch")
            git_remote_branches_descriptions("git_fetch");

        else if(cmd_options == "git_pull_<remote>_<branch>" || cmd_options == "git_pull")
            git_remote_branches_descriptions("git_pull");

        else if(cmd_options == "git_push_<remote>_<branch>" || cmd_options == "git_push")
            git_remote_branches_descriptions("git_push");

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


/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS  -------------------------- */
void git_cmd_remote_repos()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE REPOSITORIES COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git clone <url> <name_you_want_to_give_to_the_repo>" << "\n";
        std::cout << "USE:     Gets a copy of an existing Git repository" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git remote add <shortname> <url>" << "\n";
        std::cout << "USE:     Adds a new remote Git repository with a <shortname> you can reference easily" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git remote rename <name_before> <name_after>" << "\n";
        std::cout << "USE:     Changes a remote’s shortname" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git remote" << "\n";
        std::cout << "USE:     Shows a list of project's existing remotes" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

        std::cout << "COMMAND: git remote show <remote>" << "\n";
        std::cout << "USE:     Gives some information about the remote <name>" << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_remote_show_<remote>" || cmd_options == "git_remote_show")
            git_remote_repos_descriptions();

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


/* -------------------------- GIT REMOTE TAGS COMMANDS -------------------------- */
void git_cmd_remote_tags()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE TAGS COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git push <remote> <tagname> OR --tags" << "\n";
        std::cout << "USE:     Pushes <tagname> to <remote>" << "\n";
        std::cout << "         --tags option pushes all tags from current branch to <remote>" << "\n";
        std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type 'back' to go back to main menu ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "back")
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


/* -------------------------- GIT TAGGING COMMANDS -------------------------- NOT DONE*/
void git_cmd_tagging()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ TAGGING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE:     " << "\n";
        std::cout << "WARNING: " << "\n";
        std::cout << "NOTE:    " << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
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


/* -------------------------- GIT TRACKING COMMANDS  -------------------------- NOT DONE*/
void git_cmd_tracking()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ TRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: git init" << "\n";
        std::cout << "USE: Start controlling a project directory with Git, you first need to go to that project’s directory" << "\n";

        std::cout << "COMMAND: git status" << "\n";
        std::cout << "USE: Shows which files are in which state" << "\n";

        std::cout << "COMMAND: git add" << "\n";
        std::cout << "USE: Starts tracking new files or stage files" << "\n";

        std::cout << "COMMAND: git commit" << "\n";
        std::cout << "USE: Creates commit. Launches your editor of choice." << "\n";

        std::cout << "COMMAND: git diff" << "\n";
        std::cout << "USE: Print what you’ve changed but not yet staged (except with --staged option)" << "\n";

        std::cout << "COMMAND: git difftool" << "\n";
        std::cout << "USE: Print diffs in another graphical or external diff viewing program instead." << "\n";
        std::cout << "    (Run git difftool --tool-help to see what is available on your system)" << "\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
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


/* -------------------------- GIT UNTRACKING COMMANDS  -------------------------- NOT DONE*/
void git_cmd_untracking()
{
    while(true)
    {
        std::cout << "\n";
        std::cout << "~~~~~~~~~~~~~~~ UNTRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "COMMAND: " << "\n";
        std::cout << "USE:     " << "\n";
        std::cout << "WARNING: " << "\n";
        std::cout << "NOTE:    " << "\n\n";

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

        std::cout << "Select a command you want to learn how to use ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        /*
        if(cmd_options == "git_")
            //EMPTY

        else if(cmd_options == "git_")
            //EMPTY*/

        if(cmd_options == "back")
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
