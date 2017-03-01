// main.c
// ARC GIT-Lab 2017-03-01

//
// GIT commands:
// =============
// 
// Skapa ny katalog på lokal dator:
// git clone https://github.com/gfm10001/arc-git-intro.git
//
// Kolla git status:
// git status
//
// Addera nya filer till git rep. lokalt
// git add .
//
// Remove main.c~ from added files
// git reset main.c~
//
// Commit:
// git commit -m "Init a new project"
//
// Once only:
// git config --global user.name "GoFo"
// git config --global user.email "gfm10001@student.mdh.se"
// git commit --amend --reset-author -m "adjusted..."
//
// Commit:
// git commit -am "Init a new project"
//


#include <stdio.h>

int main(void)
{
   printf("\nHej Git!\n\n");
   return 0;
} // main
