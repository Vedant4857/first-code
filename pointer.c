#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
char board[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
int cm[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

void dis() {
    printf("|%c|%c|%c|\n", board[0], board[1], board[2]);
    printf("|%c|%c|%c|\n", board[3], board[4], board[5]);
    printf("|%c|%c|%c|\n", board[6], board[7], board[8]);
}

bool check(char* board) {
    char p1 = 'x';
    char p2 = 'o';
    if (board[0] == board[1] && board[1] == board[2] && (board[0] == p1 || board[0] == p2)) {
        return true;
    }
    else if (board[3] == board[4] && board[4] == board[5] && (board[3] == p1 || board[3] == p2)) {
        return true;
    }
    else if (board[6] == board[7] && board[7] == board[8] && (board[6] == p1 || board[6] == p2)) {
        return true;
    }
    else if (board[0] == board[3] && board[3] == board[6] && (board[0] == p1 || board[0] == p2)) {
        return true;
    }
    else if (board[1] == board[4] && board[4] == board[7] && (board[1] == p1 || board[1] == p2)) {
        return true;
    }
    else if (board[2] == board[5] && board[5] == board[8] && (board[2] == p1 || board[2] == p2)) {
        return true;
    }
    else if (board[0] == board[4] && board[4] == board[8] && (board[0] == p1 || board[0] == p2)) {
        return true;
    }
    else if (board[2] == board[4] && board[4] == board[6] && (board[2] == p1 || board[2] == p2)) {
        return true;
    }
    else {
        return false;
    }
}

int inp1(char* board) {
    int x;
    printf("Enter the position:");
    scanf("%d", &x);
    if (board[x-1] != '-') {
        printf("value already exist\n");
        return inp1(board);
    }
    else {
    	printf("\n");
        return x;
    }
}

int inp2(char* board) {
    
    int c = cm[rand() % 9];
    if (board[c-1] != '-') {
        //printf("value already exist\n");
        return inp2(board);
    }
    else {
    	printf("\n");
        return c;
    }
}

int main() {
	int m;
    srand(time(0));
    for (m = 0; m < 9; m++) {
        if (m % 2 == 0) {
            int x = inp2(board);
            board[x-1] = 'o';
            dis();
            for (int i = 0; i < 9; i++) {
                if (cm[i] == x)  {
                    cm[i] = -1;
                    break;
                }
            }
            if (check(board)) 
			{
                printf("ai win\n");
                break;
            }
        }
        else {
            int x = inp1(board);
            board[x-1] = 'x';
            dis();
            for (int i = 0; i < 9; i++) {
                if (cm[i] == x) {
                    cm[i] = -1;
                    break;
                }
            }
            if (check(board)) {
                printf("player win\n");
                
                break;
            }
        }
    }
    
    return 0;
}
