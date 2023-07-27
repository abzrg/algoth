# LKP '18 Contest 2 P1 - Food Lines

[src](https://dmoj.ca/problem/lkp18c2p1)

After many years of continuous warfare, the
country of Collea was left in shambles. This has
caused food shortages and famines all across the
country. In an attempt to distribute the little
food that was produced and prevent food hoarding,
the Collean government limited the amount of food
that any one person can buy. Soon, Collean
citizens are forced to wait in long lines in order
to obtain the food they needed. There are
currently $N$ such food lines in the city of
Lachtin, the $i^{th}$ of which has $a_i$ people in it.
$M$ people are going to enter one of the lines in
the next hour, where they each enter the shortest
line they see. Since Phreia plans to enter the
line, she wants to know the length of the line
that each person decides to join.


### Input Specification

- The first line contains two positive integers, $N$
  and $M$.
- The second line contains $N$ positive
  integers, $a_1$, $a_2$, ..., $a_N$.


### Output Specification

- Print $M$ lines, the $i^{th}$ of which being the
  length of the line that the $i^{th}$ person joined.


### Constraints

- $1 \le N \le 100$
- $1 \le a_i \le 100\ \text{for i in}\ 1, 2,...,N$
- $1 \le M \le 100$


### Example:

```
INPUT:
--------------------------------------

    5 3
    2 2 3 3 3


OUTPUT:
--------------------------------------

    2
    2
    3


--------------------------------------
STEPS    LINES          M        ans
0        2 2 3 3 3      3        2
1        3 2 3 3 3      2        2
2        3 3 3 3 3      1        3
3        4 3 3 3 3      0
```
