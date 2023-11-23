#!/usr/bin/python3
"""    Defines a module that returns the perimeter
    of the island described in grid
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    if len(grid) == 0:
        return 0
    length = 0
    i = 0
    for row in range(0, len(grid)):
        for land in range(0, len(grid[row])):
            if (grid[row][land] == 1 and grid[row][land + 1] == 1 and
               grid[row - 1][land] == 1):
                length += 1
            if (grid[row][land] == 1 and grid[row][land + 1] == 1 and
               grid[row + 1][land] == 1):
                length += 1
            if (grid[row][land] == 1 and grid[row][land - 1] == 1 and
               grid[row + 1][land] == 1):
                length += 1
            if (grid[row][land] == 1 and grid[row][land - 1] == 1 and
               grid[row - 1][land] == 1):
                length += 1
            if grid[row][land] == 1:
                length += 1
    return length * 2
