# Understanding the various reset modes in GitHub.
## About reset 
git reset is a powerful Git command used to undo changes at various levels in your repository, allowing you to manipulate the commit history and the working directory. It can change the state of your HEAD, index (staging area), and working directory based on the provided arguments. When used with --soft, it moves the HEAD to a specific commit without altering the staging area or working directory, enabling you to revise the most recent commit while preserving changes. With --mixed, it resets the HEAD and index but leaves the working directory intact, useful for un-staging changes but keeping them in the code. The --hard option is the most drastic, resetting the HEAD, index, and working directory to a specific commit, erasing any changes since then, which can lead to data loss if used carelessly. Therefore, it's crucial to understand the implications of git reset before applying it to your repository, as it can alter your commit history or delete uncommitted work.
## Steps to perform the experiment
1.	Create a folder  and open git bash .
2.	Initialize git .
3.	Open and edit the file "file.java" using the vi editor.
4.	Edit the file as desired and save the changes.
5.	Add and commit the changes to the file using Git.  
6.	Create and switch to feature branch .
7.	Make changes in the file using vi file.java command.
8.	Add the changes to the staging area using git add ..
9.	Commit the changes with a descriptive message using git commit -m "message".
10.	Repeat steps 3 and 4 multiple times to create multiple commits.
11.	Perform a soft reset using Git to move the HEAD to the previous commit while keeping changes in the staging area.
12.	Use the command git reset --soft HEAD~1.
13.	Perform a hard reset using Git to move the HEAD to the previous commit, discarding all changes made since then.
14.	Run the command git reset --hard HEAD~1. 
15.	Perform a mixed reset using Git to move the HEAD to the previous commit and unstage the changes, resulting in untracked files.
16.	Execute the command git reset --mixed HEAD~1.
 ## Outputs
 ![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/a206b836-6936-4d6f-9f18-251b88d05c87)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/1a173a2d-5c4d-4c65-bc5e-a57c44edad3a)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/47955309-9b6e-4b04-967d-71a73ba46a39)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/ce39e67b-1b3c-42e3-8644-0ba070df2cf2)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/33a77f9f-8551-4d56-aa75-ae8036395111)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/e2114456-ec48-477d-86f2-af378c6f5166)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/14548632-1ff0-4aca-a2d9-51bb1374575a)

## Navigate to the GIT-Hub [Experiment-1.3 file](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Git%20and%20Git-Hub/Git%26Git_Hub-Exp-3/Git_Experiment1.3.pdf)
