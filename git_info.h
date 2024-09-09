#pragma once
// based on https://raw.githubusercontent.com/andrew-hardin/cmake-git-version-tracking/master/git.h
// > Released under the MIT License.
// > https://raw.githubusercontent.com/andrew-hardin/cmake-git-version-tracking/master/LICENSE

#include "BuildConfigOptions.h"

struct GitInfo {
    bool isPopulated;
    bool hasUncommittedChanges;
    const char* commitAuthorName;
    const char* commitAuthorEmail;
    const char* commitHash;
    const char* commitShortHash;
    const char* commitDate;
    const char* commitSubject;
    const char* commitBody;
    const char* describe;
    const char* branchName;
    const char* latestTag;
    const char* latestTagName;
};

// internal use
extern const GitInfo git_info;

// public use
NBL_API2 const GitInfo getGitInfo();