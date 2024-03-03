# To Merge Pull Request and Update local repository on GitHub
## About Merge Pull
A "merge pull" typically refers to a common operation in version control systems, particularly Git. In Git, when you have two branches of development - say, a feature branch and a main branch (often called "master" or "main") - and you want to incorporate the changes made in the feature branch into the main branch, you perform a "merge pull."

This process involves combining the changes from one branch into another, typically by creating a new "merge commit" that represents the combined state of both branches. This allows the changes from the feature branch to be integrated seamlessly into the main branch while preserving the commit history of both branches.

In summary, a merge pull is a fundamental operation in Git used to integrate changes from one branch into another, often used in collaborative software development workflows.
## Steps To Merge Pull and Update Local Repository on GitHub
1. Create a new local repository and initialize it using git init.
2. Add a file file1.java and edit it using the vi command.
3. Save the changes made to f1.java using git add and git commit.
4. Create a remote repository on GitHub without including README.md.
5. Configure the GitHub repository as the new remote repository using git remote add origin
<https link to the repository>.
7. Push the changes (the f1.java file) to the remote repository using git push -u origin main.
8. Verify the updated remote repository with f1.java.
9. Create another repository on GitHub, this time with README.md.
10. Link this remote repository to our local repository using git remote add or <url of the
second repo>.
11. Check existing remote linked repositories using the git remote -v command.
12. Attempt to update the local repository with the remote repository using git pull or2 main,
which returns an error.<br>
![Screenshot 2024-03-03 171554](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/1f3394e9-5487-4920-b911-1dee146a67f3)

13. Merge the contents of both remote repositories with different commit histories into a
single local repository using git pull or main --allow-unrelated-histories.
14. Change the contents of the README.md file using the vi command.
15. Push the changes back to the remote repository (new5.2) using git push dope main after
adding the file to the staging area and committing the changes.<br>
![Screenshot 2024-03-03 171614](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/9de5190d-ef6a-4e56-8101-be4e7d6b8006)
## Navigate to the GIT-Hub [Experiment-2.2 file](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Git%20and%20Git-Hub/Git%26Git_Hub-Exp-5/Git_Experiment2.2.pdf)
