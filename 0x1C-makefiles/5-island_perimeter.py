#!/usr/bin/python3
"""
This module contains a function to calculate
the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a given grid.

    Args:
        grid (list of list of int): Two Dimensional grid
        representing the map,
        where 0 is water and 1 is land.

    Returns:
        int: Perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    prmter = 0

    for x in range(rows):
        for y in range(cols):
            if grid[x][y] == 1:

                # Check all four directions
                if x == 0 or grid[x-1][y] == 0:
                    prmter += 1

                if x == rows - 1 or grid[x+1][y] == 0:
                    prmter += 1

                if y == 0 or grid[x][y-1] == 0:
                    prmter += 1

                if y == cols - 1 or grid[x][y+1] == 0:
                    prmter += 1

    return prmter
