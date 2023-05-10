#mat полотно
#new_val новый цвет
#x,y нач координаты заливки
matrix = [
    [1,0,0,1],
    [1,1,0,1],
    [0,1,1,1],
    [0,0,0,0]
]


def flood_fill(matrix, x, y, new_val):
   x_len, y_len = len(matrix), len(matrix[0])
   color = matrix[x][y]
   if color == new_val:
       return matrix


   def fill(r, c):
       if matrix[r][c] == color:
           matrix[r][c] = new_val
           if r >= 1: fill(r - 1, c)
           if r + 1 < x_len: fill(r + 1, c)
           if c >= 1: fill(r, c-1)
           if c + 1 < y_len: fill(r, c + 1)


   fill(x, y)
   return matrix

print('\n'.join('\t'.join(map(str, row)) for row in matrix))

flood_fill(matrix, 0, 2, 1)
print("\n")



print('\n'.join('\t'.join(map(str, row)) for row in matrix))