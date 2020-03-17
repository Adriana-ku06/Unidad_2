# Readme.md
# Chapter 1 git
#Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.
#In git there are many commands to perform different activities from gitbash, such as create, delete, among others, below we will know more about these commands

//Allows you to see on the screen the version of git that is available on the computer
$ git --version

//You can view all of yours settings and where they are cominfrom using 
$ git config --list --show-origin

#Your identity

//When you install Git you must configure your username and email address. This is important because every Git commit uses this information, and it is immutably built into the commits they start creating:

$ git config --global user.name "Adriana-ku06"
$ git config --global user.email 1909098@upy.edu.mx


//With the following command you can see the list of emails and users registered in the git system
 $git config --global user.name
 $ git config --global user.email
  
  
  // 
 $ ls *
//
 $ git init
 //
 $git status
 
 //
  $git add examen.c
  
  $git status

  $ git add *
  $ git status
 
  $  git commit -m "my first commit"
  
 $  history
