
Python - Hello, World


==========================


lists.h


#ifndef LISTS_H

#define LISTS_H


#include <stdlib.h>


/**

 * struct listint_s - singly linked list

 * @n: integer

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 * for Holberton project

 */

typedef struct listint_s

{

        int n;

        struct listint_s *next;

} listint_t;


size_t print_listint(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

void free_listint(listint_t *head);

int check_cycle(listint_t *list);


#endif /* LISTS_H */



============================


0-run


#!/bin/bash

python3 $PYFILE


==================


1-run_inline


#!/bin/bash

python3 <<< $PYCODE

==================


2-print.py


#!/usr/bin/python3

print("\"Programming is like building a multilingual puzzle")


==================


3-print_number.py


#!/usr/bin/python3

number = 98

print(f"{number:d} Battery street")


==================


4-print_float.py


#!/usr/bin/python3

number = 3.14159

print(f"Float: {number:.2f}")


==================


5-print_string.py


#!/usr/bin/python3

str = "Holberton School"

print(3 * str)

print(str[:9])


==================


6-concat.py


#!/usr/bin/python3

str1 = "Holberton"

str2 = "School"

str1 += " " + str2

print("Welcome to {}!".format(str1))


==================


7-edges.py


#!/usr/bin/python3

word = "Holberton"

word_first_3 = word[:3]

word_last_2 = word[-2:]

middle_word = word[1:-1]

print("First 3 letters: {}".format(word_first_3))

print("Last 2 letters: {}".format(word_last_2))

print("Middle word: {}".format(middle_word))


==================


8-concat_edges.py


#!/usr/bin/python3

str = "Python is an interpreted, interactive, object-oriented programming\

        language that combines remarkable power with very clear syntax"

str = str[39:67] + str[107:112] + str[:6]

print(str)


==================


9-easter_egg.py


#!/usr/bin/python3

import this


==================


10-check_cycle.c


#include "lists.h"


/**

 * check_cycle - checks if a linked list contains a cycle

 * @list: linked list to check

 *

 * Return: 1 if the list has a cycle, 0 if it doesn't

 */

int check_cycle(listint_t *list)

{

        listint_t *slow = list;

        listint_t *fast = list;


        if (!list)

                return (0);


        while (slow && fast && fast->next)

        {

                slow = slow->next;

                fast = fast->next->next;

                if (slow == fast)

                        return (1);

        }


        return (0);

}



===================


100-write.py


#!/usr/bin/python3

import sys

sys.stderr.write("and that piece of art is useful - Dora Korpar, 2015-10-19\n")

sys.exit(1)



===================


101-compile


#!/bin/bash

python3 -m compileall -b $PYFILE i



===================


102-magic_calculation.py


#!/usr/bin/python3

def magic_calculation(a, b):

    return (98 + a ** b)



===================
