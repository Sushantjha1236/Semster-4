# Working with your history in Git.
## About git Log
git log is a Git command that displays the commit history for a repository, providing a detailed view of how the code has evolved over time. By default, it shows a chronological list of commits starting from the most recent, including information such as the commit hash, author, date, and commit message. This command is invaluable for tracking changes, understanding the project's development history, and identifying who made specific changes and when. It can be customized with various options to filter results by date, author, or commit message. The --oneline option offers a simplified view, displaying only commit hashes and short messages, while --graph adds a visual representation of branch structures, illustrating how commits relate to one another. You can also use git log to compare different branches or commits, examine merge history, and identify points of divergence. Whether you're exploring a project's history or diagnosing a bug, git log is a fundamental tool for understanding the timeline and context of code changes.
## Steps to perform the experiment
1.	Create a file locally and navigate to its folder using Git Bash.
2.	Open and edit the file "file.txt" using the vi editor. 
3.	Add and commit the changes to the file using Git.
4.	Repeat steps 3 and 4 multiple times to create multiple commits.
  
5.	Edit the file again, stage the edit, and amend the previous commit using "git commit --amend".
      
6.	View the commit history using "git log" to verify the changes. 
7.	Now make a new branch and go to that branch and make changes in the file using “git checkout -b feature”. 
8.	Make several commits in this new branch.
9.	Switch back to the main branch and rebase the changes from the new branch onto it.
  
10.	Review the commit history using "git log" to analyze the changes. 
11.	Create another new branch and make commits in it.
 
 
12.	Merge the changes from this branch into the main branch and rebase the main branch to 3 rd commits.This will open a prompt and makes changes whatever you want to make.
 

13.	Use "git log" to examine the updated commit history.


 ## Outputs
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/189011e3-fed0-4a00-a452-b9dbb2a121da)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/c992b49d-981c-4e73-88bd-66d5b2343b0d)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/3f314676-be33-4fe1-b5df-96f23ebf9342)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/e679cc78-2788-4ae9-b57f-b2ba1720e1d1)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/6da1650a-5168-488e-9036-d2c391affd30)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/f6dbeded-1a4c-4ae7-9159-2a895995c6fa)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/8aa1ede6-9b71-4fff-be50-cb98d7835b4b)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/e36e0daf-a85d-4ad7-9fb9-53de59f89aa2)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/0f755056-ae31-42bf-9d80-2983def63eb9)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/8fc2ae15-19e2-49a5-aeaa-0f977b93f906)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/cf515257-7042-44cb-ba94-764dbbf314c7)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/046fe571-e7ff-4a4a-ab64-f8f1240ec1a1)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/03dbf3ef-318c-4413-918c-144b39e443d0)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/69b84c14-7db4-48ab-b49b-6e81e63720ed)

## Navigate to the GIT-Hub [Experiment-1.3 file](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Git%20and%20Git-Hub/Git%26Git_Hub-Exp-3/Git_Experiment1.3.pdf)
