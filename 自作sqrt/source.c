//Ž©ìsqrt
u_long sqrt2(u_long f)
{
	u_long s = f,t;
	if(f == 0) return 0;
	do{
		t = s;
		s = (t + f / t) >> 1;
	}while(s < t);
	return t;
}