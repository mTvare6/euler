#include <stdio.h>
#include <unistd.h>
#define uint unsigned long long

#define MOD 1307674368000ull
#define MUL(i) s+=(p[i]=((p[i]*(i+1))%MOD))
int main() {

  uint p[100] = {   [0 ... 99] = 1  };
  uint a = 1, b = 0, c = 1;
  uint s, sum=0;
  for (uint idx=1;idx<=(uint)1e8;idx++) {
    c = (a + b) % MOD;
    s = 1;
    MUL(1);
    MUL(2);
    MUL(3);
    MUL(4);
    MUL(5);
    MUL(6);
    MUL(7);
    MUL(8);
    MUL(9);
    MUL(10);
    MUL(11);
    MUL(12);
    MUL(13);
    MUL(14);
    MUL(15);
    MUL(16);
    MUL(17);
    MUL(18);
    MUL(19);
    MUL(20);
    MUL(21);
    MUL(22);
    MUL(23);
    MUL(24);
    MUL(25);
    MUL(26);
    MUL(27);
    MUL(28);
    MUL(29);
    MUL(30);
    MUL(31);
    MUL(32);
    MUL(33);
    MUL(34);
    MUL(35);
    MUL(36);
    MUL(37);
    MUL(38);
    MUL(39);
    MUL(40);
    MUL(41);
    MUL(42);
    MUL(43);
    MUL(44);
    MUL(45);
    MUL(46);
    MUL(47);
    MUL(48);
    MUL(49);
    MUL(50);
    MUL(51);
    MUL(52);
    MUL(53);
    MUL(54);
    MUL(55);
    MUL(56);
    MUL(57);
    MUL(58);
    MUL(59);
    MUL(60);
    MUL(61);
    MUL(62);
    MUL(63);
    MUL(64);
    MUL(65);
    MUL(66);
    MUL(67);
    MUL(68);
    MUL(69);
    MUL(70);
    MUL(71);
    MUL(72);
    MUL(73);
    MUL(74);
    MUL(75);
    MUL(76);
    MUL(77);
    MUL(78);
    MUL(79);
    MUL(80);
    MUL(81);
    MUL(82);
    MUL(83);
    MUL(84);
    MUL(85);
    MUL(86);
    MUL(87);
    MUL(88);
    MUL(89);
    MUL(90);
    MUL(91);
    MUL(92);
    MUL(93);
    MUL(94);
    MUL(95);
    MUL(96);
    MUL(97);
    MUL(98);
    MUL(99);

    sum = ((sum+ (s*c)%MOD))%MOD;
    a = b, b = c;

  }
  printf("%llu\n", sum);
}
