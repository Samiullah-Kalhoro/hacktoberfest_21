//set up the canvas to draw to
const canvas=document.querySelector('canvas');
const c=canvas.getContext('2d');

canvas.width=window.innerWidth;
canvas.height=window.innerHeight;

c.fillStyle=("#000000");
c.fillRect(20,20,20,20);


class Cell{
    constructor(x,y,alive){
        this.x=x;
        this.y=y;
        this.alive=alive;
        this.neighbours=0;
    }
    birth=()=>{
        this.alive=true;
        console.log("birth @: ("+this.x+","+this.y+")");
    }
    death=()=>{
        this.alive=false;
        console.log("death @: ("+this.x+","+this.y+")");
    }
    isAlive(){
        return this.alive;
    }
    setNeighbours(num){
        this.neighbours=num;
    }
    getNeighbours(){
        return this.neighbours;
    }
}

class World{

    constructor(rows,columns){

        this.rows=rows;
        this.columns=columns;
        this.blockWidth=canvas.width/rows;
        this.blockHeight=canvas.height/columns;
        this.gridArray=[];
        this.whiteCellBuffer=[];
        this.greenCellBuffer=[];

        for(let i=0;i<canvas.width;i+=this.blockWidth){
            for(let j=0;j<canvas.height;j+=this.blockHeight){
                c.fillStyle=("black");
                c.fillRect(i,j,this.blockWidth,this.blockHeight);
                c.fillStyle=("white");
                c.fillRect(i,j,this.blockWidth,this.blockHeight-1);

            }
        }
    }

    activateCell(x,y){
        for(let i=0;i<canvas.width;i+=this.blockWidth){
            for(let j=0;j<canvas.height;j+=this.blockHeight){
                if(i>=x && j>=y){
                c.fillStyle=("black");
                c.fillRect(i,j,this.blockWidth,this.blockHeight);
                c.fillStyle=("green");
                c.fillRect(i,j,this.blockWidth,this.blockHeight);
                this.gridArray[i][j].birth();
                return;}
            }
        }
    }
    
    populate(){
        for(let i =0;i<this.rows;i++){
            this.gridArray.push([]);
            for(let j=0;j<this.columns;j++){
                this.gridArray[i].push(new Cell(i,j,false));
            }
        }
    }
    printGrid(){
        for(let i=0;i<this.rows;i++){
            console.log("\n");
            for(let j=0;j<this.columns;j++){
                console.log("| ("+this.gridArray[i][j].x+","+this.gridArray[i][j].y+") |");
            }
        }
    }

    paintCell(x,y,color){
        c.clearRect(x*this.blockWidth,y*this.blockHeight,this.blockWidth,this.blockHeight);
        //c.fillStyle="black";
        c.fillRect(x*this.blockWidth,y*this.blockHeight,this.blockWidth,this.blockHeight);
        c.fillStyle=color;
        c.fillRect(x*this.blockWidth,y*this.blockHeight,this.blockWidth,this.blockHeight);
    }

    checkLiveNeighbours(x,y){
        let count=0;
        try{
            if(this.gridArray[x+1][y+1].isAlive()) {//upper right corner cell
                count+=1;}
            if(this.gridArray[x+1][y].isAlive()){//right cell
                count+=1;
            } 
            if(this.gridArray[x-1][y].isAlive()){//left cell
                count+=1;
            }
            if(this.gridArray[x-1][y+1].isAlive()){//upper left corner cell
                count+=1;
            }
            if(this.gridArray[x][y+1].isAlive()){//top cell
                count+=1;
            }
            if(this.gridArray[x][y-1].isAlive()){//bottom cell
                count+=1;
            }
            if(this.gridArray[x-1][y-1].isAlive()){//bottom left corner
                count+=1;
            }
            if(this.gridArray[x+1][y-1].isAlive()){//bottom right corner
                count+=1;
            }}
            catch(e){
                //console.log(e);
                count+=0;
            }
            this.gridArray[x][y].setNeighbours(count);
           // console.log("the count is: "+x+" "+y+" "+count);
    }

    scanGrid(){
        for(let i =0;i<this.rows;i++){
            for(let j=0;j<this.columns;j++){
                          this.checkLiveNeighbours(i,j);
             }
        }
    }
    tick(){
        for(let i =0;i<this.rows;i++){
            for(let j=0;j<this.columns;j++){
                let currentCell=this.gridArray[i][j];
                if(currentCell.getNeighbours()>3 || currentCell.getNeighbours()<2) {
                    if(currentCell.isAlive()){
                        currentCell.death();
                        this.whiteCellBuffer.push([i,j]);
                        console.log(this.whiteCellBuffer);
                    }
                }else if(currentCell.getNeighbours()==3){ 
                    if(!currentCell.isAlive()){
                    currentCell.birth();
                    this.greenCellBuffer.push([i,j]);}
                }
                       
             }
        }
    }

   initRender(){
        for(let i =0;i<this.rows;i++){
            for(let j=0;j<this.columns;j++){
                let currentCell=this.gridArray[i][j];
                if(!currentCell.alive) {
                    this.paintCell(i,j,"white");
                }else{
                    this.paintCell(i,j,"green");
                }
                       
             }
        }
    }

    render(){
        console.log(this.whiteCellBuffer);
        for(let i of this.whiteCellBuffer){
            this.paintCell(i[0],i[1],"white");
        }
        for(let j of this.greenCellBuffer){
            this.paintCell(j[0],j[1],"green");
        }
        this.whiteCellBuffer=[];
        this.greenCellBuffer=[];
    }

    simulate(){
        this.scanGrid();
        this.tick();
        this.render();
    }

}

//let world=new World(80,45);
let world=new World(320,160);
console.log()
world.populate();
world.initRender();

function animate(){
    setTimeout(function(){

        requestAnimationFrame(animate);
        world.simulate();

},100);
}
//animate();
addEventListener('keydown', event => {
 animate();
    })



const mouse = {
    x: undefined,
    y: undefined
}
// Event Listeners
addEventListener('mousemove', event => {
    mouse.x = Math.floor(event.clientX/world.blockWidth);
    mouse.y = Math.floor(event.clientY/world.blockHeight);
    console.log(mouse.x+" "+mouse.y);
    world.gridArray[mouse.x][mouse.y].birth();
    world.paintCell(mouse.x,mouse.y,"green");
  //  world.activateCell(mouse.x,mouse.y);
})
