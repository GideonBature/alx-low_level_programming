# C - More singly linked lists

## Learning Objectives
### General
- How to use linked lists
- Start to look for the right source of information without too much help

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`.  Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### More Info
Please use this data structure for this project:
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Project Tasks
### 0. Print list
**Description:** Write a function that prints all the elements of a `listint_t` list.
- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes
- Format: see example
- You are allowed to use `printf`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `0-print_listint.c` <br>

### 1. List length
**Description:** Write a function that returns the number of elements in a linked `listint_t` list.
- Prototype: `size_t listint_len(const listint_t *h);`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `1-listint_len.c` <br>

### 2. Add node
**Description:** Write a function that adds a new node at the beginning of a `listint_t` list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `2-add_nodeint.c` <br>

### 3. Add node at the end
**Description:** Write a function that adds a new node at the end of a `listint_t` list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `3-add_nodeint_end.c` <br>

### 4. Free list
**Description:** Write a function that frees a `listint_t` list.
- Prototype: `void free_listint(listint_t *head);`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `4-free_listint.c` <br>

### 5. Free
**Description:** Write a function that frees a `listint_t` list.
- Prototype: `void free_listint2(listint_t **head);`
- The function sets the `head` to `NULL`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `5-free_listint2.c` <br>

### 6. Pop
**Description:** Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
- Prototype: `int pop_listint(listint_t **head);`
- if the linked list is empty return `0`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `6-pop_listint.c` <br>

### 7. Get node at index
**Description:** Write a function that returns the nth node of a `listint_t` linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- where `index` is the index of the node, starting at `0`
- if the node does not exist, return `NULL`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `7-get_nodeint.c` <br>

### 8. Sum list
**Description:** Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
- Prototype: `int sum_listint(listint_t *head);`
- if the list is empty, return `0`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `8-sum_listint.c` <br>

### 9. Insert
**Description:** Write a function that inserts a new node at a given position.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns: the address of the new node, or `NULL` if it failed
- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `9-insert_nodeint.c` <br>

### 10. Delete at index
**Description:** Write a function that deletes the node at index `index` of a `listint_t` linked list.
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `10-delete_nodeint.c` <br>

### 11. Reverse list (advanced task)
**Description:** Write a function that reverses a `listint_t` linked list.
- Prototype: `listint_t *reverse_listint(listint_t **head);`
- Returns: a pointer to the first node of the reversed list
- You are not allowed to use more than `1` loop.
- You are not allowed to use `malloc`, `free` or arrays
- You can only declare a maximum of two variables in your function

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `100-reverse_listint.c` <br>

### 12. Print (safe version) (advanced task)
**Description:** Write a function that prints a `listint_t` linked list.
- Prototype: `size_t print_listint_safe(const listint_t *head);`
- Returns: the number of nodes in the list
- This function can print lists with a loop
- You should go through the list only once
- If the function fails, exit the program with status `98`
- Output format: see example
```
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m
julien@ubuntu:~/0x13. More singly linked lists$ ./m
[0x1b500f0] 1024
[0x1b500d0] 402
[0x1b500b0] 98
[0x1b50090] 4
[0x1b50070] 3
[0x1b50050] 2
[0x1b50030] 1
[0x1b50010] 0
[0x1b50600] 1024
[0x1b505e0] 402
[0x1b505c0] 98
[0x1b505a0] 4
[0x1b50580] 3
[0x1b50560] 2
[0x1b50540] 1
[0x1b50110] 0
-> [0x1b505c0] 98
```

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `101-print_listint_safe.c` <br>

### 13. Free (safe version) (advanced task)
**Description:** Write a function that frees a `listint_t` list.
- Prototype: size_t free_listint_safe(listint_t **h);
- This function can free lists with a loop
- You should go though the list only once
- Returns: the size of the list that was free’d
- The function sets the `head` to `NULL`
```
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n
julien@ubuntu:~/0x13. More singly linked lists$ ./n 
[0x11260f0] 1024
[0x11260d0] 402
[0x11260b0] 98
[0x1126090] 4
[0x1126070] 3
[0x1126050] 2
[0x1126030] 1
[0x1126010] 0
[0x1126600] 1024
[0x11265e0] 402
[0x11265c0] 98
[0x11265a0] 4
[0x1126580] 3
[0x1126560] 2
[0x1126540] 1
[0x1126110] 0
-> [0x11265c0] 98
(nil), (nil)
```

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `102-free_listint_safe.c` <br>

### 14. Find the loop (advanced task)
**Description:** Write a function that finds the loop in a linked list.
- Prototype: `listint_t *find_listint_loop(listint_t *head);`
- Returns: The address of the node where the loop starts, or `NULL` if there is no loop
- You are not allowed to use `malloc`, `free` or arrays
- You can only declare a maximum of two variables in your function

GitHub repository: `alx-low_level_programming` <br>
Directory: `0x13-more_singly_linked_lists` <br>
File: `103-find_loop.c` <br>
