Readme.md
#Chapter 1 git
/*Git is a free and open source distributed version control system 
designed to handle everything from small to very large projects with speed and efficiency. 
#In git there are many commands to perform different activities from gitbash, such as create, delete, among others, below we will know more about these commands*/

//Allows you to see on the screen the version of git that is available on the computer $ git --version

//You can view all of yours settings and where they are cominfrom using $ git config --list --show-origin

#Your identity

/*When you install Git you must configure your username and email address.
This is important because every Git commit uses this information,
and it is immutably built into the commits they start creating:*/

$ git config --global user.name "Adriana-ku06" 
$git config --global user.email 1909098@upy.edu.mx

//With the following command you can see the list of emails and users registered in the git system $git config --global user.name $ git config --global user.email
//------------------------------------------------------------------


// To see a tree object together with the name and mode of each one of them, and the blob´s SHA-1 value, use:
$ ls *

//----------------------------------------------------------


//This command is used to create a new GIT repertoire: 
$ git init 

//----------------------------------------------------------
// 
/*This command displays the list of files that have been changed along with files that are about to be added or committed.*/
$git status
//----------------------------------------------------------

/* git add
This command can be used to add files to the index. For example,
the following command adds a file name examen.c to the local directory of the index:*/
$ git add *  
$git add examen.c


//----------------------------------------------------------
/* git commit
The commit command is used to change the header. 
Please note that any committed changes will not affect the remote repertoire. Use the command:*/
$ git commit -m "my first commit"
//-----------------------------------------------------------//

/* git checkout 
The checkout command can be used to create or switch branches. 
For example, the following command creates a new one and changes to it:*/
$command git checkout -b <banch-name>

//-----------------------------------------------------------------------------------------------//
/*git reset
To reset the index and the directory that is working to the last committed state, use this command:*/

$git reset - -hard HEAD

//-----------------------------------------------------------------------------------------------//
/*git rebase
This command is used to re-apply the commitments in another branch. For example: */
$ git rebase master
//----------------------------------------------------------------------------------//
/*Git commit message modification
This command allows you to edit the confirmation message without modifying your snapshot.
*/
$ git commit --amend
//----------------------------------------------------------------------------------//

/*This command is used to undo changes to the commit history of a repository.*/
$ git resvert <pathspec>
 //----------------------------------------------------------------------------------//   
 
 //this command is used to see all the commands that we have entered by gitbash
$ history
