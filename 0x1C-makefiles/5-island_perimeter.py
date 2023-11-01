#!/usr/bin/python3
"""This module returns the perimeter of the island described by grid"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += get_surrounding_water(grid, i, j)

    return perimeter


def get_surrounding_water(grid, i, j):
    """
    Returns the number of sides surrounded by water.

    Args:
    - grid: a list of lists of integers representing a grid
    - i: an integer representing the row index
    - j: an integer representing the column index

    Returns:
    - an integer representing the number of sides surrounded by water
    """
    water_sides = 0

    if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
        water_sides += 1
    if i == 0 or grid[i - 1][j] == 0:
        water_sides += 1
    if j == 0 or grid[i][j - 1] == 0:
        water_sides += 1
    if i == len(grid) - 1 or grid[i + 1][j] == 0:
        water_sides += 1

    return water_sides
