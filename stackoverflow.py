coords = [['60', '01'], ['30', '19']]
coords = [int(coords[i][j])/60**j for i in range(2) for j in range(len(coords[i]))]