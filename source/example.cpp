#include "window.hpp"
#include <GLFW/glfw3.h>
#include <utility>
#include <cmath>
#include "vec2.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char* argv[])
{
  Window win{std::make_pair(800,800)};

  while (!win.should_close()) {
    if (win.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
      win.close();
    }

    bool left_pressed = win.get_mouse_button(GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS;

    auto t = win.get_time();

    float x1{400 + 380 * std::sin(t)};
    float y1{400 + 380 * std::cos(t)};

    float x2{400 + 380 * std::sin(2.0f*t)};
    float y2{400 + 380 * std::cos(2.0f*t)};

    float x3{400 + 380 * std::sin(t-10.f)};
    float y3{400 + 380 * std::cos(t-10.f)};

    win.draw_point(x1, y1,
        1.0f, 0.0f, 0.0f);
    win.draw_point(x2, y2, 0.0f, 1.0f, 0.0f);
    win.draw_point(x3, y3, 0.0f, 0.0f, 1.0f);

    auto m = win.mouse_position();
    if (left_pressed) {
      win.draw_line(30, 30, // from
          m.first, m.second, // to
          1.0,0.0,0.0);
    }

    //.................................................
    //.................................................

    //Zeichnen vom Rechteck schwarz
    Vec2 mins{400.0f, 200.0f};
    Vec2 maxs{700.0f, 500.0f};
    Rectangle rechts(mins, maxs);
    rechts.draw_rectangle(win);

    // Zeichnen des Kreises schwarz
    Vec2 kreismittelpunkts{350.0f, 350.0f};
    Circle kreiss(kreismittelpunkts, 220.0f);
    kreiss.draw_circle(win);

    //Zeichnen vom Rechteck farbig
    Vec2 min{50.0f, 50.0f};
    Vec2 max{200.0f, 200.0f};
    Color red{1.0f, 0.0f, 0.0f};
    Color lila{1.0f, 0.0f, 1.0f};
    Rectangle recht(min, max);
    recht.draw_rectangle(win, lila);

    // Zeichnen des Kreises farbig
    Vec2 kreismittelpunkt{300.0f, 300.0f};
    Circle kreis(kreismittelpunkt, 150.0f);
    kreis.draw_circle(win, red);

    //.................................................
    //.................................................

    win.draw_line(0, m.second, 10, m.second, 0.0, 0.0, 0.0);
    win.draw_line(win.window_size().second - 10, m.second, win.window_size().second, m.second, 0.0, 0.0, 0.0);

    win.draw_line(m.first, 0, m.first, 10, 0.0, 0.0, 0.0);
    win.draw_line(m.first, win.window_size().second - 10, m.first, win.window_size().second, 0.0, 0.0, 0.0);

    std::string text = "mouse position: (" + std::to_string(m.first) + ", " + std::to_string(m.second) + ")";
    win.draw_text(10, 5, 35.0f, text);

    win.update();
  }

  return 0;
}
