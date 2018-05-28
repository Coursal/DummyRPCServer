struct X_array
{
	int X <100>;
	int X_size;
};

struct max_min
{
	int max;
	int min;
};

struct r_times_X
{
	int X <100>;
	int X_size;
	float r;
};

struct rX
{
	float prod <100>;
};

program DUM_PROG
{
	version DUM_VERS
	{
		float average (X_array) = 1;
		max_min maxmin(X_array) = 2;
		rX product(r_times_X) = 3;
	} = 1;
} = 0x23450001;
