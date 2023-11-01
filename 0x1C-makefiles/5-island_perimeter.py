#!/usr/bin/python3
"""
Module for island_perimeter function
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Parameters:
    - grid: list of list of ints where 0 rep a water zone 1 rep land zone.

    Returns:
    - perimeter: integer representing the perimeter of the island.
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
