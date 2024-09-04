# ASDE Algorithm Test
## Question
Imagine Abhimanyu in Chakravyuha. There are 11 circles in the Chakravyuha surrounded by different enemies. Abhimanyu is located in the innermost circle and has to cross all the 11 circles to reach Pandavas army back.  
Given:
1.  Each circle is guarded by different enemy where enemy is equipped with k1, k2……k11 powers Abhmanyu start from the innermost circle with p power Abhimanyu has a boon to skip fighting enemy a times 
2. Abhmanyu can recharge himself with power b times 
3. Battling in each circle will result in loss of the same power from Abhimanyu as the enemy. 
4. If Abhmanyu enter the circle with energy less than the respective enemy, he will lose the battle
5.  k3 and k7 enemies are endured with power to regenerate themselves once with half of their initial power and can attack Abhimanyu from behind if he is battling in iteratively next circle 
 
Write an algorithm to find if Abhimanyu can cross the Chakravyuh and test it with two sets of test cases.

## My Approach

I have used a recursive approach that evaluates all possible paths for Abhimanyu to cross the Chakravyuha.

## Running the Code

1. Compile and run the code in a C++ environment.
2. When prompted, input the initial power, number of skips, and number of recharges.
3. Enter the power levels of the enemies guarding each circle.
4. The program will determine if Abhimanyu can cross the Chakravyuha based on the input values.

###  TestCases
*Test Case 1:*

Input:
Enter the initialPower , Number of skips and Number of recharge : 20 1 3
Enter the powers of the enemies guarding each of the 11 circles : 11 20 10 5 3 2 5 8 6 7 9

```bash
    20 1 3
    11 20 10 5 3 2 5 8 6 7 9
```
**OUTPUT**
`Abhimanyu can cross the Chakravyuha.`


*Test Case 2 :*

Input:
Enter the initialPower , Number of skips and Number of recharge : 10 2 1
Enter the powers of the enemies guarding each of the 11 circles : 10 2 5 9 4 9 10 1 5 5 1

```bash
    10 2 1
    10 2 5 9 4 9 10 1 5 5 1
```
**OUTPUT**
`Abhimanyu can't cross the Chakravyuha!`
