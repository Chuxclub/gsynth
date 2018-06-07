//
// Created by florian on 06/06/18.
//
#include <iostream>
#include "std_lib_facilities.h"
#include "git_commands.h"
#include "git_cmd_descriptions.h"
#include "gsynth_generic_selections.h"

/* -------------------------- GIT AMENDING COMMANDS SELECTION  -------------------------- */
void amending_selection()
{
    while(true)
    {
        git_cmd_amending();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_commit_--amend")
            git_amending_descriptions();

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT BRANCHING COMMANDS SELECTION  -------------------------- */

void branching_selection()
{
    while(true)
    {
        git_cmd_branching();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_branch")
            git_branching_descriptions();

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT CONFIGURING COMMANDS SELECTION  -------------------------- */
void configuring_selection()
{
    while(true)
    {
        git_cmd_configuring();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_config")
            git_config_descriptions();

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT LOG COMMANDS SELECTION -------------------------- */
void log_selection()
{
    while(true)
    {
        git_cmd_log();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_log")
            git_log_descriptions();

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT REMOTE BRANCHES COMMANDS SELECTION -------------------------- */
void remote_branches_selection()
{
    while(true)
    {
        git_cmd_remote_branches();

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

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT REMOTE REPOSITORIES COMMANDS SELECTION -------------------------- */
void remote_repos_selection()
{
    while(true)
    {
        git_cmd_remote_repos();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_remote_show_<remote>" || cmd_options == "git_remote_show")
            git_remote_repos_descriptions();

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT REMOTE TAGS COMMANDS SELECTION -------------------------- */
void remote_tags_selection()
{
    git_cmd_remote_tags();
    generic_proceed();
}

/* -------------------------- GIT TAGGING COMMANDS SELECTION -------------------------- */
void tagging_selection()
{
    while(true)
    {
        git_cmd_tagging();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_tag_<tag_name>")
            git_tagging_descriptions("git_tag_<tag_name>");

        else if(cmd_options == "git_tag_-a" || cmd_options == "git_tag_-a_<tag_name>_(<commit_checksum>)_-m_<description>")
            git_tagging_descriptions("git_tag_-a");

        else if(cmd_options == "git_tag")
            git_tagging_descriptions("git_tag");

        else if(cmd_options == "git_show" || cmd_options == "git_show_<tag_name>")
            git_tagging_descriptions("git_show");

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT TRACKING COMMANDS SELECTION -------------------------- */
void tracking_selection()
{
    while(true)
    {
        git_cmd_tracking();

        std::cout << "Type a command you want to have complementary information about ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == "git_status")
            git_tracking_descriptions("git_status");

        else if(cmd_options == "git_add" || cmd_options == "git_add_<file_name>")
            git_tracking_descriptions("git_add");

        else if(cmd_options == "git_commit")
            git_tracking_descriptions("git_commit");

        else if(cmd_options == "git_diff")
            git_tracking_descriptions("git_diff");

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}

/* -------------------------- GIT UNTRACKING COMMANDS SELECTION -------------------------- */
void untracking_selection()
{
    while(true)
    {
        git_cmd_untracking();

        std::cout << "Select a command you want to learn how to use ('help' for available commands): ";
        string cmd_options;
        std::cin >> cmd_options;

        if(cmd_options == ".gitignore")
            git_untracking_descriptions(".gitignore");

        else if(cmd_options == "git_mv" || cmd_options == "git_mv_<file_to_rm>_<file_to_track>")
            git_untracking_descriptions("git_mv");

        else if(cmd_options == "back")
            break;

        else
            cmd_generic_selection(cmd_options);
    }
}