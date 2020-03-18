
#Unit 2 and Unit 3
#Unit 2-> Git Basics

//This creates a new subdirectory named .git that contains all of your necessary repository files
$ git init

/* Cloning an Existing Repository
--If you want to get a copy of an existing Git repository,
for example a project you would like to contribute to, the command you need is git clone.*/

$ git clone https://github.com/Adriana-ku06/gitcheatsheet

/*
If you want to clone the repository into a directory with a different name libgit2,
you can specify the new directory name as an additional argument:
*/
$ git clone https://github.com/Adriana-ku06/gitcheatsheet gitcheatsheet-v2


/*The main tool you use to determine which files are in what state is the git status command.
If you run this command directly after a clone, you should see something like this:*/

$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
nothing to commit, working directory clean


/*Use the git add command. To start tracing the README file, you can run this:*/

$ git add README.md

/*Git also has a short status indicator so you can see your changes in a more compact way
 */
$ git status -s 
$ git status --short

/*These are generally automatically generated files such as log files or files produced by your build system. 
In such cases, you can create a file listing patterns to match them named .gitignore. Here is an example .gitignore file:
*/
$ cat .gitignore

Here is another example .gitignore file:

# ignore all .a files
*.a

# but do track lib.a, even though you're ignoring .a files above
!lib.a

# only ignore the TODO file in the current directory, not subdir/TODO
/TODO

# ignore all files in any directory named build
build/

# ignore doc/notes.txt, but not doc/server/arch.txt
doc/*.txt

# ignore all .pdf files in the doc/ directory and any of its subdirectories
doc/**/*.pdf


/*you can use the git diff command. We’ll cover git diff in more detail later,  That command compares what is in your working 
directory with what is in your staging area. 
The result tells you the changes you’ve made that you haven’t yet staged.

If you want to see what you’ve staged that will go into your next commit, you can use git diff --staged. 
This command compares your staged changes to your last commit:*/
$ git diff
/*
The git rm command does that, and also removes
the file from your working directory so you don’t see it as an untracked file the next time around.
*/

$ git rm Readme.md

/*his is particularly useful if you forgot to add something to your .gitignore file and accidentally staged it, 
like a large log file or a bunch of .a compiled files. To do this, use the --cached option:*/

$ git rm --cached README
/*You can pass files, directories, and file-glob patterns to the git rm command. That means you can do things such as:*/

$ git rm log/\*.log
/*Note the backslash (\) in front of the *. This is necessary because Git does its own filename expansion 
in addition to your shell’s filename expansion. This command removes all files that have the .log extension in the log/ directory. Or, you can do something like this:*/

$ git rm \*~
/*
This command removes all files whose names end with a ~.*/

/*Thus it’s a bit confusing that Git has a mv command. If you want to rename a file in Git, you can run something like:*/

$ git mv file_from file_to
/*In fact, if you run something like this and look at the status, you’ll see that Git considers it a renamed file:*/

$ git mv README.md README
/*
After you have created several commits, or if you have cloned a repository with an existing commit history, 
you’ll probably want to look back to see what has happened. 
The most basic and powerful tool to do this is the command.
*/
$ git log
//Useful options for git log --pretty=format
//Option	Description of Output
/*
%H--Commit hash

%h-- Abbreviated commit hash

%T--Tree hash

%t--Abbreviated tree hash

%P--Parent hashes

%p--Abbreviated parent hashes

%an--Author name

%ae--Author email

%ad--Author date (format respects the --date=option)

%ar--Author date, relative

%cn--Committer name

%ce--Committer email

%cd--Committer date

%cr--Committer date, relative

%s--Subject*/

/*This command takes your preparation area and uses it for confirmation. 
If you haven't made any changes since your last commit (for example, run this command immediately after your previous commit), 
then your snapshot will look exactly the same, and all it will change is your confirmation message.*/
$ git commit --amend

/*To see what remote servers you have configured, you can run the git remote command. 
Lists the short names of each remote identifier that you have specified.*/
$git remote

/*Existing tags in Git is straightforward. Just type git tag (with optional -l or --list):*/

$ git tag  v1.0

/*Creating an annotated tag in Git is simple. The easiest way is to specify -a when you run the tag command:*/

$ git tag -a v1.4 -m "my version 1.4"
$ git tag

/*git show on the tag, you don’t see the extra tag information. The command just shows the commit:

 */
 $ git show v1.4-lw
 //This command is used to create a new GIT repertoire:
 $ git init

//---------------------------------------------------------- // 
//This command displays the list of files that have been changed along with files that are about to be added or committed.*
/ $git status 
//----------------------------------------------------------//

/* git add This command can be used to add files to the index.
For example, the following command adds a file name examen.c to the local directory of the index:*/
$ git add *
$git add examen.c

//---------------------------------------------------------- 
/* git commit The commit command is used to change the header. Please note that any
committed changes will not affect the remote repertoire. Use the command:*/ 
$ git commit -m "my first commit" 
//-----------------------------------------------------------//

/* git checkout The checkout command can be used to create or switch branches. 
For example, the following command creates a new one and changes to it:*/ 
$command git checkout -b

//-----------------------------------------------------------------------------------------------
/*git reset To reset the index and the directory that is working to the last committed state, use this command:*/

$git reset - -hard HEAD

//-----------------------------------------------------------------------------------------------// 
/*git rebase This command is used to re-apply the commitments in another branch. For example: */ 
$ git rebase master 
//----------------------------------------------------------------------------------//
/*Git commit message modification This command allows you to edit the confirmation message without modifying your snapshot. */ }
$ git commit --amend 
//----------------------------------------------------------------------------------//

//This command is used to undo changes to the commit history of a repository./
$ git resvert 
//----------------------------------------------------------------------------------//

//this command is used to see all the commands that we have entered by gitbash
$ history

#Unit 3->Git Branching

/*Create a new branch
What happens when you create a new branch? Well, doing so creates a new pointer for you to move. 
Let's say you want to create a new branch called testing. You do this with the git branchcommand:*/

$ git branch testing

/*To switch to an existing branch, run the git checkout command. Let's switch to the new testingrama:*/

$ git checkout testing

/*Let's say you have confirmed all your changes, so you can go back to your master branch:*/
$ git checkout master
//Switched to branch 'master'

/*The git branch command does more than just create and delete branches. 
If you run it without arguments, you will get a simple list of your current branches:*/

$ git branch

//To see all the branches that contain job that has not yet been merged, you can run 
$ git branch --no-merged
/*Remote branches
Remote references are references (pointers) in your remote repositories, 
which include branches, labels, etc. You can get a complete list of remote references explicitly with*/
git ls-remote <remote>
git remote show <remote>
/*for remote branches, as well as more information. However, a more common way is to take advantage of remote monitoring branches.*/
//-----------------------------------------------
/*To sync your work with a given remote control, run a git fetch <remote> command (in our case git fetch origin). 
This command looks for what "origin" of the server is (in this case, it is git.ourcompany.com), extracts from it all the information that it does not already have, 
    and updates its local database, moving its origin / master pointer to its new and most updated position.*/
    
  $ git fetch <remote>   
  
 /*you can remove a remote branch using the --deleteoption for git push. 
 If you want to remove your serverfix server branch, run the following:*/
$ git push origin --delete

/*In Git, there are two main ways to integrate changes from one branch to another:
the mergey the rebase. In this section you will learn what overflow is,
how to do it, why it is a pretty amazing tool and in which cases you don't want to use it.*/


/*
Incorporates changes from the named commits (since the time their histories diverged from the current branch) into the current branch.
This command is used by git pull to incorporate changes from another repository and can be used by hand to merge changes from one branch into another.*/ 
$git-merge - //Join two or more development histories together

/*You can re-create the serverrama on the masterrama without having to check it first by running 
git rebase <basebranch> <topicbranch>, which checks the theme branch (in this case server) and plays it on the base (master) branch:*/

$ git rebase master server
