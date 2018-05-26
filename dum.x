struct X_arr
{
	int X <100>;
	int X_size;
};

struct max_min
{
	int max;
	int min;
};

struct X_times_r
{
	int X <100>;
	int X_size;
	float r;
};

struct prod
{
	float prod <100>;
};

program DUM_PROG
{
	version DUM_VERS
	{
		float average(X_arr)=1;
		max_min max_and_min(X_arr)=2;
		prod product(X_times_r)=3;
	}=1;
}=0x23451111;