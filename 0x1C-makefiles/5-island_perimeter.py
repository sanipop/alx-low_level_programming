#!/usr/bin/python3
"""script for measuring island parametter."""


def island_perimeter(grid):
    """Function to calculate island parameter.

    binary representation of land and water.

    Args:
        grid (list): integer encoding of island.
    Returns:
        a grid rep of island parameter.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

