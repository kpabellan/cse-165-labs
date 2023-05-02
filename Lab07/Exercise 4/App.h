#ifndef APP_H
#define APP_H

#include <iostream>
#include "Rect.h"

class AppWindow {
  protected:
    Rect* rect;
  
  public:
    AppWindow() {
      rect = new Rect(0, 0, 0, 0);
    }

    AppWindow(float x, float y, float w, float h) {
      rect = new Rect(x, y, w, h);
    }

    AppWindow(const Rect& r) {
      rect = new Rect(r.x, r.y, r.w, r.h);
    }

    const Rect& get_rect() {
      return *rect;
    }

    virtual void resize(int w, int h) {
      rect->w = w;
      rect->h = h;
    }
};

class CircleWin : public AppWindow {
  protected: 
    float radius;

  public:
    CircleWin() : AppWindow() {
      radius = 0;
    }

    CircleWin(float x, float y, float w, float h) : AppWindow(x, y, w, h) {
      if (w > h) {
        radius = w;
      } else {
        radius = h;
      }
    }

    CircleWin(const Rect& r) : AppWindow(r) {
      if (r.h > r.w) {
        radius = r.h;
      } else {
        radius = r.w;
      }
    }

    virtual void resize(int w, int h) {
      if (w > h) {
        radius = w;
      } else {
        radius = h;
      }
      AppWindow::resize(w, h);
      std::cout << "radius: " << radius << std::endl;
    }
};

class RectWin : public AppWindow {
  protected:
    float area;

  public:
    RectWin() : AppWindow() {
      area = 0;
    }

    RectWin(float x, float y, float w, float h) : AppWindow(x, y, w, h) {
      area = w * h;
    }

    RectWin(const Rect& r) : AppWindow(r) {
      area = r.w * r.h;
    }

    virtual void resize(int w, int h) {
      area = w * h;
      AppWindow::resize(w, h);
      std::cout << "area: " << area << std::endl;
    }
};

#endif