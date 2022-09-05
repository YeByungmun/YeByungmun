var canvas = document.getElementById('canvas');
var ctx = canvas.getContext('2d');

canvas.width = window.innerWidth - 200;
canvas.height = window.innerHeight - 200;

// 공룡 이미지 가져다 쓰기위해서
var img2 = new Image();     // Image 오브젝트 하나를 생성한다.
img2.src = 'dinosaur.webp';

// 등장 캐릭터(공룡)의 속성부터 object 자료에 정리해두면 편리하다.
var dino = {
    x : 10,     // 공룡 등장 x  좌표
    y : 200,
    width : 50,     // 공룡 크기(폭과 높이)
    height : 50,
    draw(){         // 위에 속성 여기에 함수 지정하여 .draw() 형식으로 사용한다.
        ctx.fillStyle = 'green';        // 공룡의 내부 색상
        // ctx.fillRect(this.x, this.y, this.width,this.height);    // 일단 공룡을 사각형으로 표현해 본다.
        ctx.drawImage(img2, this.x, this.y)     // 공료 이미지 위치하기 위한 함수
    }
}

// 이미지 가져다 쓰기위해서
var img1 = new Image();     // Image 오브젝트 하나를 생성한다.
img1.src = 'cactus.jpg';

// 장애물들은 넓이, 높이 등이 각각 다를 수도 있기에 비슷한 오브젝트가 많이 필요해서 일반적으로 class 로 만든다. 아래 선인장 클래스

class Cactus{
    constructor(){
        this.x = 500;
        this.y = 200;
        this.width = 50;
        this.height = 50;
    }
    draw(){
        ctx.fillStyle = 'red';
        // ctx.fillRect(this.x,this.y,this.width,this.height);  // 장애물(빨간색 네모)
        ctx.drawImage(img1, this.x, this.y)     // 이미지 위치하기 위한 함수
    }
}

// 장애물 하나를 생성해 보자
var cactus = new Cactus();
cactus.draw()       // 위에서 만든 오브젝트에 저 위에서 만든 클래스의 draw() 기능을 이용하여 장애물을 그린다.


// 단순이동이 아닌 애니메이션을 구현하기 위하여 프레임마다 실행할 함수를 작성한다.
// 먼저 함수에 필요한 변수를 먼저 선언하고 초기화도 한다.
var timer = 0;
var cactus여러개 = [];
var 점프timer = 0;
var animation;      // requestAnimationFrame 함수(프레임마다 실행해주는 함수)를 변수에 담아쓰기 위해 변수 선언

function 프레임마다실행할거(){
    // 1초에 60번 코드 실행할 기본 자바스크립트 함수 사용한다.requestAnimationFrame()
    // 함수를 만들고 기본 함수를 매개변수로 사용한다.
    animation = requestAnimationFrame(프레임마다실행할거)   // 변수에 담아 쓰면 좋다
    timer++;

    ctx.clearRect(0,0, canvas.width, canvas.height);  // 캔버스 클리어

    if (timer % 200 === 0){
        var cactus = new Cactus();
        cactus여러개.push(cactus)
    }

    cactus여러개.forEach((a, i, o)=>{
        // x좌표가 0미만이면 제거
        if(a.x < 0){
            o.splice(i,1)
        }
        a.x--;   // 장애물 왼쪽 이동

        충돌하냐(dino, a);

        a.draw();
    })

    if(점프중 == true){     // 만약 점프중이면
        dino.y-=2;          // 다이노 y 축을 빼준다 즉, 위로 이동
        점프timer++;
    }
    if(점프중 == false){    // 점프중이 아니라면
        if(dino.y < 200){   // dino 의 위치가 200 아래면 
            dino.y++;           // 아래로 이동
        }
    }

    if(점프timer > 100){    // 점플 실행 후 100프레임이 지나면
        점프중 = false;     // 점프 중단해라 
        점프timer = 0
    }

    dino.draw()     // 위에서 미리 만들어 놓은 dino object 를 사용해서 object.draw() 함수를 사용하면 오브젝트가 그려진다.
}

프레임마다실행할거();

// 충돌확인

function 충돌하냐(dino, cactus){
    var x축차이 = cactus.x - (dino.x + dino.width);     // 장애물 x축 - (dino의 x축 + dino.폭)
    var y축차이 = cactus.y - (dino.y + dino.height);
    if(x축차이 < 0 && y축차이 < 0){
        ctx.clearRect(0,0, canvas.width, canvas.height);  // 캔버스 클리어
        cancelAnimationFrame(animation)
    }
}

var 점프중 = false;
document.addEventListener('keydown', function(e){
    if(e.code === 'Space'){
        점프중 = true;
    }
})
