//week08_5_pacman_part1_
//File-Preference 
void setup(){
   size(400,500); 
}
int x=200,y=250;//座標
float m=0,dm=0.03;//嘴巴大小
void draw(){
  background(0);
  fill(255,255,0);//黃色
  //ellipse(x,y,30,30);//小精靈
  arc(x,y,30,30,m,PI*2-m);
  m+=dm;
  if(m>1||m<0)dm=-dm;
}
