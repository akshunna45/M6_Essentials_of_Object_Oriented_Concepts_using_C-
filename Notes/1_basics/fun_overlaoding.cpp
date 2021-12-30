int function(int val)
{
    return 0;
}
int function(float val)
{
    return 0;
}
int function(int val1, float val2)
{
    return 0;
}

int fun(int val1 = 0, int val2 = 0, int val3 = 0)
{
    return 0;
}
int var = 10;
int main()
{
    function(10);
    function(10.0f);
    function(10, 10.0f);

    fun();
    fun(10);
    fun(20, 30);
    fun(20, 30, 40);
    return 0;
}
// Mangled