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
    if not grid:
        return 0

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1

    return perimeter * 2
