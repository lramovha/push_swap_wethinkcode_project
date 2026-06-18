# Push Swap

A sorting algorithm challenge from the WeThinkCode_ curriculum (also widely known from coding schools like 42), implemented in C. The goal: sort a stack of integers into ascending order using only a restricted set of stack operations, and in as few moves as possible — no built-in sorting algorithms allowed.

## Concept Overview

The program works with two stacks, `stack_a` and `stack_b`. All numbers start in `stack_a`, while `stack_b` begins empty. The challenge is to sort `stack_a` into ascending order using only stack manipulation operations — direct sorting methods like bubble sort or quicksort are not allowed. Instead, the solution relies entirely on moving and reordering values between the two stacks.

![Push Swap overview](https://github.com/user-attachments/assets/c970333d-afe1-436a-a3d0-a0af4cb1e791)

## Rules and Operations

A small, fixed set of operations is permitted to manipulate the stacks:

| Operation | Description |
|---|---|
| `sa` | Swap the first two elements at the top of `stack_a` |
| `sb` | Swap the first two elements at the top of `stack_b` |
| `pa` | Push the top element of `stack_b` onto `stack_a` |
| `pb` | Push the top element of `stack_a` onto `stack_b` |
| `ra` | Rotate `stack_a`: shift the first element to the bottom |
| `rb` | Rotate `stack_b`: shift the first element to the bottom |
| `rra` | Reverse rotate `stack_a`: shift the last element to the top |
| `rrb` | Reverse rotate `stack_b`: shift the last element to the top |

![Push Swap rules](https://github.com/user-attachments/assets/c993abdc-a539-404a-9956-703c994d46b5)

## Project Structure

```
push_swap_wethinkcode_project/
├── pushswap/   # Main push_swap program — generates the sorting instructions
├── checkers/   # Verifier program — checks that a given instruction sequence correctly sorts the stack
├── libft/      # Custom C standard library implementation, used throughout the project
└── Makefile
```

## Key Skills Practiced

This project exercises algorithm design, by finding optimal strategies for sorting using only stack operations; efficiency, since minimizing the number of moves requires techniques like partitioning the stack into chunks or applying recursive strategies; and stack manipulation, requiring a solid understanding of how stacks behave under the available operation set. At its core, push_swap is about generating an optimal sequence of stack operations and verifying that sequence with a separate checker program.

## Getting Started

### Prerequisites

- A C compiler (e.g. `gcc` or `clang`)
- `make`

### Build

```bash
git clone https://github.com/lramovha/push_swap_wethinkcode_project.git
cd push_swap_wethinkcode_project
make
```

### Usage

Run the program with a list of integers to sort:

```bash
./push_swap 4 67 3 87 23
```

This outputs the sequence of operations needed to sort the list. To verify the output, pipe it into the checker program:

```bash
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

The checker reports `OK` if the sequence correctly sorts the stack, or `KO` otherwise.

## Author

**[lramovha](https://github.com/lramovha)**
