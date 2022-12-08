#!/usr/bin/python3
"""This module can be used to find the perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    if len(grid) < 1:
        return 0
    rows = 0
    row_counter = [0 for i in range(len(grid[0]))]

    for row in grid:
        not_empty = 0
        j = 0
        for cell in row:
            if cell == 1:
                row_counter[j] = 1
                not_empty = 1
            j += 1
        if not_empty:
            rows += 1
        elif rows > 0:
            break
    return 2 * rows + 2 * row_counter.count(1)
