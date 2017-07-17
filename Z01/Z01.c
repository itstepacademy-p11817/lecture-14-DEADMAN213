#include <conio.h>
#include <stdio.h>

void printBoard(int cellSize) {
	char cellCur = '#'; 
	char cellPrev = ' ';

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < cellSize; j++) {
			for (int k = 0; k < 8*cellSize; k++) {
				printf("%c", cellCur);
				if ((k + 1) % cellSize == 0) {
					int box = cellCur;
					cellCur = cellPrev;
					cellPrev = box;
				}
			}
			printf("\n");
		}
		int box = cellCur;
		cellCur = cellPrev;
		cellPrev = box;
	}
}

int main() {
	printBoard(2);
	_getch();
	return 0;
}