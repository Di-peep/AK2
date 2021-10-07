#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

/*
Lorem ipsum dolor sit amet consectetur adipiscing elit auctor dui,
sapien magna montes nullam etiam venenatis condimentum laoreet,
dis mattis volutpat elementum id interdum gravida efficitur.
Ex rhoncus a tempor turpis primis orci sit dolor sem elit, magnis ipsum risus odio sapien efficitur cras conubia mattis fusce,
eros hendrerit ultrices fames lobortis felis mauris consequat nulla. Taciti integer eleifend nisi sit amet in proin tristique,
ante tempor duis parturient lacus vitae natoque scelerisque montes,
iaculis magnis suscipit hendrerit tincidunt condimentum ac.
*/