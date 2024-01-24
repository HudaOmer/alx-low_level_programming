#!/usr/bin/python3
"""This  module defines island_perimeter function"""


def island_perimeter(grid):
    """A function that counts the perimeter of an island"""
    if not grid:
        return 0
    rows = len(grid)
    columns = len(grid[0])
    result = 0
    for i in range(0, rows):
        for j in range(0, columns):
            if (grid[i][j] == 1):
                if (i == 0):
                    result += 1
                elif i == rows - 1:
                    result += 1
                else:
                    if grid[i+1][j] == 0:
                        result += 1
                    if grid[i-1][j] == 0:
                        result += 1
                if j == 0:
                    result += 1
                elif j == columns - 1:
                    result += 1
                else:
                    if grid[i][j+1] == 0:
                        result += 1
                    if grid[i][j-1] == 0:
                        result += 1
    return result
