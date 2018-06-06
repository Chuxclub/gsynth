//
// Created by crex on 31/05/18.
//

#include <iostream>
#include "std_lib_facilities.h"
#include "ghelp.h"
#include "git_cmd_descriptions.h"
#include "cmd_selections.h"
#include "gsynth_generic_selections.h"


/* -------------------------- GIT AMENDING COMMANDS  -------------------------- */
void git_cmd_amending()
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
}


/* -------------------------- GIT BRANCHING COMMANDS  -------------------------- */
void git_cmd_branching()
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
    std::cout << "USE:     Fires up graphical tool for merge-conflicts resolutions" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
}


/* -------------------------- GIT CONFIGURING COMMANDS  -------------------------- */
void git_cmd_configuring()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ CONFIGURATION COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND: git config" << "\n";
    std::cout << "USE:     Reads and writes contributor's git settings";
    std::cout << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
}


/* -------------------------- GIT LOG COMMANDS -------------------------- */
void git_cmd_log()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ LOG COMMANDS ~~~~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND: git log" << "\n";
    std::cout << "USE: Prints the commit history" << "\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
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


/* -------------------------- GIT REMOTE BRANCHES COMMANDS -------------------------- */
void git_cmd_remote_branches()
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
}


/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS  -------------------------- */
void git_cmd_remote_repos()
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
}


/* -------------------------- GIT REMOTE TAGS COMMANDS -------------------------- */
void git_cmd_remote_tags()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ MANAGING REMOTE TAGS COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND: git push <remote> <tagname> OR --tags" << "\n";
    std::cout << "USE:     Pushes <tagname> to <remote>" << "\n";
    std::cout << "         --tags option pushes all tags from current branch to <remote>" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";

    generic_proceed();
}


/* -------------------------- GIT TAGGING COMMANDS -------------------------- */
void git_cmd_tagging()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ TAGGING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND: git tag <tag_name>" << "\n";
    std::cout << "USE:     Creates a lightweight tag: only the commit checksum is stored in a file" << "\n\n";

    std::cout << "COMMAND: git tag -a <tag_name> (<commit_checksum>) -m <description>" << "\n";
    std::cout << "USE:     Creates an annotated tag: they are stored as full objects in the Git database." << "\n";
    std::cout << "         They contain the tagger name, email, and date; have a tagging message; and can be" << "\n";
    std::cout << "         signed and verified. Add commit checksum first 6 characters to tag a former commit as important" << "\n";
    std::cout << "         (Commit checksum can be found by git log command, it looks like this: '29ec21c'...)" << "\n\n";

    std::cout << "COMMAND: git tag" << "\n";
    std::cout << "USE:     Lists all tags." << "\n\n";

    std::cout << "COMMAND: git show <tag_name>" << "\n";
    std::cout << "USE:     Displays the tag data along with the commit tagged" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
}


/* -------------------------- GIT TRACKING COMMANDS  -------------------------- */
void git_cmd_tracking()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ TRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "COMMAND: git init" << "\n";
    std::cout << "USE:     Start controlling a project directory with Git, you first need to go to" << "\n";
    std::cout << "         that project’s directory" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

    std::cout << "COMMAND: git status" << "\n";
    std::cout << "USE:     Shows which files are in which state" << "\n\n";

    std::cout << "COMMAND: git add <file_name>" << "\n";
    std::cout << "USE:     Starts tracking new <file_name> OR stages <file_name>" << "\n\n";

    std::cout << "COMMAND: git commit" << "\n";
    std::cout << "USE:     Creates commit. Launches your editor of choice." << "\n\n";

    std::cout << "COMMAND: git diff" << "\n";
    std::cout << "USE:     Print what you’ve changed but not yet staged (except with --staged option)" << "\n\n";

    std::cout << "COMMAND: git difftool" << "\n";
    std::cout << "USE:     Print diffs in another graphical or external diff viewing program instead." << "\n";
    std::cout << "         (Run git difftool --tool-help to see what is available on your system)" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
}


/* -------------------------- GIT UNTRACKING COMMANDS  -------------------------- */
void git_cmd_untracking()
{
    std::cout << "\n";
    std::cout << "~~~~~~~~~~~~~~~ UNTRACKING COMMANDS ~~~~~~~~~~~~~~~" << "\n\n";

    std::cout << "FILE:    .gitignore" << "\n";
    std::cout << "USE:     User-created file listing files and/or wildcard patterns to match class of files" << "\n";
    std::cout << "         that you don’t want Git to automatically add or even show you as being untracked." << "\n";
    std::cout << "WARNING: This is not a command but a file that you have to create in your project's directory!" << "\n\n";

    std::cout << "COMMAND: git rm <file>" << "\n";
    std::cout << "USE:     Remove file from the work directory and from tracked files, but not from the history. " << "\n";
    std::cout << "WARNING: Be sure of what you're doing, you might lose important data you didn't want to lose!" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

    std::cout << "COMMAND: git rm --cached <file>" << "\n";
    std::cout << "USE:     Remove from tracked files but don't remove from the work directory nor the history. " << "\n";
    std::cout << "WARNING: File will be untrack, meaning that further modifications won't be saved in Git history!" << "\n";
    std::cout << "NOTE:    No more information on this command can be provided..." << "\n\n";

    std::cout << "COMMAND: git mv <file_to_rm> <file_to_track>" << "\n";
    std::cout << "USE:     Mainly used to change a tracked file's name" << "\n\n";

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n\n";
}
