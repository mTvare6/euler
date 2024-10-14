#include <stdio.h>
int main() {
  unsigned long long c = 1;
  unsigned int n[] = {1, 0, 0, 0};
  unsigned int x;

start:
  n[2] += n[0], n[1] += n[0];
  c += n[0] + n[3] + 2 * n[1] + 1;
  n[2]++, n[3] = n[1], n[0] = 0, n[1] = 0;

b5:
  c++;
  if (n[3] != 0) {
    if (n[2] != 0) {
      x = (n[2] > n[3]) ? n[3] : n[2];
      n[3] -= x, n[2] -= x, n[0] += x, n[1] += x;
      c += 2 * x - 1;
      goto b5;
    } else if (n[1] != 0) {
      n[3]--, c++;
      c += 2 * (n[0] + n[1]), n[2] += n[0];
      n[3] += n[1];
      n[0] = 0, n[1] = 0;
      goto b5;
    } else {
      goto end;
    }

  } else {
    c += 2 * n[1] + 1, n[3] = n[1], n[1] = 0;
    goto b5;
  }

end:
  n[3]--, c++;
  if (n[0] == 104743 && n[1] == 0 && n[2] == 0 && n[3] == 0) {
    goto exit;
  }
  c++;
  goto start;

exit:

  printf("%llu\n", c);
  return 0;
}
