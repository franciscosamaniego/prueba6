size(400,400);
background(255);
noFill();
int n = 100;
int x = 200;
int y = 200;
int division = 20;
for(int i = 0; i < n; i++) {
  ellipse(x,y,division,division);
  division += 10;
}
