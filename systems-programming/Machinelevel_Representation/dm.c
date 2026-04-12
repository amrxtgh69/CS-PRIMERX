// procedure parameters xp and y are stored in %rdi and %rsi
long exchange(long *xp, long y) {
  // reads x from the memory and stores in %rax cause it it long return type 
  long x = *xp;
  // write y to the memory location designated by xp in %rdi 
  *xp = y;
  return y;
}
