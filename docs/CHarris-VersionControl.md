# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## Project & Portfolio I

- **Cody Harris**
- **September 6, 2026**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- clear: Clear the Screen
- pwd: Print the "Working Directory"
- ls: List files and folders
- ls -a: List files and folders, including invisible files
- ls -alh: List all files and folders, in human readable form
- cd [directory]: Change directory
- cd /: Change directory, go to root directory
- cd ~: Change directory and go to user home directory
- cd ..: Change directory, go up one folder level
- cd ../..: Change directory, go up two folder levels
- cd ~/Desktop: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

I tested the folder-drop process using Command Prompt on my Windows computer. I typed `cd` followed by a space and dragged a folder into the command window. Windows automatically inserted the full path to the folder. After pressing Enter, the working directory changed to that folder. This demonstrated how dragging a folder into a command-line interface can save time and prevent errors when entering long directory paths.

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

1. **Local Version Control** - Local version control stores file revisions on a single computer. It allows a developer to return to earlier versions of a file, but it is limited for teamwork because the history is stored locally.

2. **Centralized Version Control** - Centralized version control stores the project and its history on one central server. Multiple developers can connect to the server and work on the same project. This makes collaboration easier, but if the central server becomes unavailable, access to the repository may also be affected.

3. **Distributed Version Control** - Distributed version control gives each developer a complete copy of the repository, including its history. Developers can work and commit changes locally, then synchronize their work with a remote repository. Git is an example of a distributed version control system.

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- `git clone <repository-url>`: Clone a repository
- `git config --global user.name "Cody Harris"`: Set up a global user name
- `git config --global user.email "CHarris01@student.fullsail.edu"`: Set up a global email address to match my GitHub account email
- `git status`: Show the current state of the working directory and staging area
- `git add <file>`: Add a modified file to the next commit
- `git commit -m "commit message"`: Make a commit with a descriptive message
- `git log`: Show my commit history
- `git help`: Show Git's help information

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

To connect to a GitHub repository using HTTPS, I first open the repository on GitHub and select the **Code** button. From there, I select **HTTPS** and copy the repository URL.

Next, I open Terminal and use the `cd` command to navigate to the folder where I want to store the repository. I then use the `git clone` command followed by the copied HTTPS URL.

Example:

`git clone https://github.com/username/repository.git`

After the repository is cloned, I use `cd repository-name` to enter the project folder. Git may ask me to authenticate through GitHub or Git Credential Manager when I push changes. Once connected, I can use Git commands such as `git status`, `git add`, `git commit`, `git pull`, and `git push` to work with the repository.

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  A `.gitignore` file tells Git which files and folders should not be tracked or committed to a repository. It is useful for excluding temporary files, build files, IDE settings, and other files that are not necessary for the project. This helps keep the repository organized and prevents unnecessary files from being included in commits.

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  A `.DS_Store` file is automatically created by macOS Finder to store information about how a folder is displayed, such as icon positions and view settings. It does not contain source code needed for the project, so it should normally be ignored to prevent unnecessary changes from appearing in the repository.

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
 I would add the `.vs/` folder used by Visual Studio to the `.gitignore` file. This folder contains local Visual Studio settings, caches, and other generated information that can be recreated on each developer's computer. Ignoring it keeps unnecessary IDE-specific files out of the repository.

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

The resources I found most helpful this week were the official Git documentation, GitHub documentation, and Apple Terminal documentation. These resources helped me better understand how version control systems work, how Git commands are used to manage changes, how repositories are connected through HTTPS, and how Terminal commands are used to navigate and manage files.


**Terminal Commands**  
Apple Terminal User Guide: https://support.apple.com/guide/terminal/welcome/mac

**Three Types of Version Control**  
Git - About Version Control: https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control

**Git Commands**  
Git Reference Documentation: https://git-scm.com/docs

**Connecting to GitHub using Terminal**  
GitHub Docs - Cloning a Repository: https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository

GitHub Docs - About Remote Repositories: https://docs.github.com/en/get-started/git-basics/about-remote-repositories

**Using .gitignore and Why it's Important**  
GitHub Docs - Ignoring Files: https://docs.github.com/en/get-started/getting-started-with-git/ignoring-files
