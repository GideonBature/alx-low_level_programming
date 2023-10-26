#!/usr/bin/python3
"""Island Perimeter
"""


def island_perimeter(grid):
    """Returns perimeter of Island

    args:
        grid (int) - parameter

    return:
        perimeter of island described in grid
    """
    perimeter = 0
    for row in grid:
        for col in row:
            if col == 0:
                perimeter += 0
            elif col == 1:
                perimeter += 1
    if perimeter >= 1:
        perimeter += 1
    return perimeter * 2
