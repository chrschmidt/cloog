/* Generated from ../../../git/cloog/test/walters.cloog by CLooG 0.14.0-238-gb1cb779 gmp bits in 0.02s. */
S2(1,0,1,0);
S4(1,0,1,0);
S3(2,0,1,1);
S4(2,0,1,1);
for (i=3;i<=10;i++) {
  if ((i+1)%3 == 0) {
    S3(i,(i-2)/3,(i+1)/3,(i+1)/3);
  }
  if ((i+2)%3 == 0) {
    S2(i,(i-1)/3,(i+2)/3,(i-1)/3);
  }
  if (i%3 == 0) {
    S1(i,i/3,i/3,i/3);
  }
  div36 = floord(i,3);
  for (div37=max(ceild(i,3),ceild(2*i-3*div36-1,3));div37<=min(floord(i+2,3),floord(2*i-3*div36+1,3));div37++) {
    S4(i,div36,div37,i-div36-div37);
  }
}
