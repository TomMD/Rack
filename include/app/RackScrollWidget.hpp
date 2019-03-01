#pragma once
#include "app/common.hpp"
#include "ui/ScrollWidget.hpp"
#include "widget/ZoomWidget.hpp"
#include "app/RackWidget.hpp"


namespace rack {
namespace app {


struct RackScrollWidget : ui::ScrollWidget {
	widget::ZoomWidget *zoom;
	RackWidget *rack;

	RackScrollWidget();
	void step() override;
	void draw(const DrawArgs &args) override;
	void onHover(const widget::HoverEvent &e) override;
	void onHoverScroll(const widget::HoverScrollEvent &e) override;
};


} // namespace app
} // namespace rack
