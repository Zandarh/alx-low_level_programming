#!/usr/bin/python3
"""Perimeter Grid Module."""


def island_perimeter(grid):
    """Island grid function
        Arg:
            grid: a list of list of integers
        Returns:
            The perimeter of the grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for row in range(height):
        for column in range(width):
            if grid[row][column] == 1:
                size += 1
                if (column > 0 and grid[row][column - 1] == 1):
                    edges += 1
                if (row > 0 and grid[row - 1][column] == 1):
                    edges += 1
    return size * 4 - edges * 2
