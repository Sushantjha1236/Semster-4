# Job Sequencing
## About Greedy Algo
A greedy algorithm solves problems by choosing the most favorable option at each step, without concern for potential long-term optimality. It proceeds in a top-down manner, never reconsidering earlier decisions, even if they turn out to be suboptimal.
### Algorithm:-
- Sort Jobs by Profit: Sort the given jobs in descending order of their profits. This step ensures that the jobs with higher profits are considered first during job sequencing.<br>
- Initialize Result and Slots Arrays: Create two arrays: one to store the sequence of jobs (result array) and another to track the availability of slots (slots array). Initialize both arrays appropriately.<br>
- Iterate Over Jobs: For each job in the sorted list:<br>
- Determine the deadline of the current job.<br>
- Find the latest available slot before the deadline (if any).<br>
If a slot is available before the deadline, assign the job to that slot.<br>
Mark the slot as occupied in the slots array.<br>
- Output Sequence of Jobs: Print the sequence of jobs that were successfully assigned to slots. These jobs form the optimal job sequence that maximizes profit while meeting all deadlines.<br>
- End of Algorithm: End the algorithm once all jobs have been considered.<br>
### Checkout the [Code](https://github.com/Sushantjha1236/Semster-4_Practicals/blob/main/Data%20Analysis%20and%20Algorithm/DAA_exp-5/JobSequencingExp2.2.cpp)
### Output
![WhatsApp Image 2024-03-04 at 12 56 07 AM](https://github.com/Sushantjha1236/Semster-4_Practicals/assets/113833084/8f9b30ab-acfa-4b7a-9225-6d905bee3ee5)
