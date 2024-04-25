# Git diff - Comparing Changes in Git
## About Git-diff
Git diff is a versatile Git command that allows you to view differences within your Git repository. It's commonly used to compare changes in your working directory against the latest commit, helping you understand what has changed since your last commit. By adding the --staged option, you can compare staged changes against the last commit, which is useful to verify what will be included in your next commit. Additionally, git diff can compare two branches, tags, or specific commits to understand how they differ. This command is particularly helpful for code reviews, identifying conflicts, and understanding the evolution of your codebase over time.
## Steps to use git diff
1. Create a new directory on your local device, then open the repo and initialize.
2. Use Git Bash to open the file using the command “vi Check_diff.txt”. Edit the content of
the file as needed.
3. Add the changes to the staging area using the command “git add .”
4. Commit them with a descriptive message using "git commit -m 'message'".
5. Create a new branch named "branch1" using either "git branch branch1" or "git checkout
-b branch1".
6. Edit the file “vi Check_diff.txt” add it to the staging area, and commit the changes using
the same commands as in steps 3&4.
7. Switch back to the main branch using "git checkout main" and run the "git diff"
command to compare changes between branches.
8. Then we use “git log ” to view all the commits made.
9. We can view the log history in different forms using different log commands like “--
graph”, “-p”, “-n”, “--oneline”. 
### Outputs
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/640fd790-64c5-46b7-9095-3763551a608c)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/c046ca92-8e90-4888-a8e7-ae7a142c67ca)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/7463de03-06e5-435f-bc10-2c4eb7a41874)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/ab03546e-e23d-45a3-9bc9-31647675c6b1)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/732b13ab-2511-48dc-841b-817f5c2ba46c)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/0f71bd2e-100a-4386-b182-0348cd474952)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/1ca007c6-5a41-4211-8f6f-1512927df28e)
![image](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/917f4cc4-5145-48a8-b616-63b57cdebda2)
