#ifndef COLOR_HPP
#define COLOR_HPP


struct Color
{

	Color():
	r{0.0f},g{0.0f},b{0.0f}
	{}


	Color(float rgb_in):
	r{rgb_in},
	g{rgb_in},
	b{rgb_in}
	{}

	Color(float r_in, float g_in, float b_in):
	r{r_in},
	g{g_in},
	b{b_in}
	{}

	float r, g, b;

};
#endif