# Find All Sum Combinations
Given a positive integer, 'target', print all possible combinations of positive integers that sum up to the 'target' number.

This code is written based on the solution mentioned in: [educative.io](https://www.educative.io/m/find-all-sum-combinations)


### Runtime Complexity
`Exponential`

### Memory Complexity
`Linear, O(n)`

## Examples
Allowed Numbers: `2, 1, 5`

Entry: `10` 

Output: 
```
10*1 
8*1 + 1*2 
6*1 + 2*2 
5*1 + 1*5 
4*1 + 3*2 
3*1 + 1*2 + 1*5 
2*1 + 4*2 
1*1 + 2*2 + 1*5 
5*2 
2*5 
```

Allowed Numbers: `5, 10, 20, 50, 100`

Entry: `100` 

Output: 
```
20*5 
18*5 + 1*10 
16*5 + 2*10 
16*5 + 1*20 
14*5 + 3*10 
14*5 + 1*10 + 1*20 
12*5 + 4*10 
12*5 + 2*10 + 1*20 
12*5 + 2*20 
10*5 + 5*10 
10*5 + 3*10 + 1*20 
10*5 + 1*10 + 2*20 
10*5 + 1*50 
8*5 + 6*10 
8*5 + 4*10 + 1*20 
8*5 + 2*10 + 2*20 
8*5 + 1*10 + 1*50 
8*5 + 3*20 
6*5 + 7*10 
6*5 + 5*10 + 1*20 
6*5 + 3*10 + 2*20 
6*5 + 2*10 + 1*50 
6*5 + 1*10 + 3*20 
6*5 + 1*20 + 1*50 
4*5 + 8*10 
4*5 + 6*10 + 1*20 
4*5 + 4*10 + 2*20 
4*5 + 3*10 + 1*50 
4*5 + 2*10 + 3*20 
4*5 + 1*10 + 1*20 + 1*50 
4*5 + 4*20 
2*5 + 9*10 
2*5 + 7*10 + 1*20 
2*5 + 5*10 + 2*20 
2*5 + 4*10 + 1*50 
2*5 + 3*10 + 3*20 
2*5 + 2*10 + 1*20 + 1*50 
2*5 + 1*10 + 4*20 
2*5 + 2*20 + 1*50 
10*10 
8*10 + 1*20 
6*10 + 2*20 
5*10 + 1*50 
4*10 + 3*20 
3*10 + 1*20 + 1*50 
2*10 + 4*20 
1*10 + 2*20 + 1*50 
5*20 
2*50 
1*100 
```

## Instructions
Do `g++ -Wall -std=c++17 main.cpp` and then `./a.out`.

