// snake game

#include<cstdlib>
#include<ncurses.h>


// 게임오버 변수 필요
// 게임 가로,세로 변수 및 선언 필요
// 위치 변수 , 과일 변수 , 점수 변수 필요
// 뱀의 머리 방향 변수 필요

bool gameOver;
const int width = 20, height = 20;
int x, y, FruitX, FruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


// 뱀의 방향을 잡기 위한 설정
void Setup()
{
    /*
    http://comedudb6.knue.ac.kr/tykim/Myhome/Cnote/chap4-CursesLecture.pdf

curses 루틴을 사용하는 프로그램에서는 initscr 을 수행시킨 다음 단말기의 입출력 모드를 지정한다.
echo();  enable echoing 
noecho();  disable echoing  
 initscr 루틴은 모든 curses 함수에 앞서서 수행시켜야 한다.
이 루틴은 curses 의 자료구조를 초기화하고 UNIX 환경의 TERM 변수를 통하여 단말기의 종류를
결정한다. 그렇게 함으로서 원래의 단말기 상태로 돌아갈 수 있고 커서는 맨 아래 왼쪽에 위치하게
된다. 


    initscr();
    clear();
    noecho();   // 노에코
    cbreak();   // 프로그램을 중단하고
    curs_set(0);    // 커서는 0으로 설정
*/

    //게임오버가 거짓이면 방향 중지 선언
    gameOver = false;
    dir = STOP;
    // 뱀머리가 보드 중앙으로 보드의 x,y중앙 즉, 각각을 2로 나누면 된다.
    x = width/2;
    y = height/2;
    // 과일은 맴에서 랜덤 위치해야 하므로
    FruitX = (rand() % width) + 1;
    FruitY = (rand() % height) + 1;
    //점수는 시작이 0 이다.
    score = 0;

}

void Draw()
{
    clear();

    for (int i = 0; i < width*2; i++)
    {
        mvprintw(0,i,"*");
    }
    
}

void Input()
{

}

void Logic()
{

}

int main()
{
    Setup();

    while (!gameOver)   
    {
        Draw();
        Input();
        Logic();
    }
    

    return 0;
}