#pragma once

#include "widgets/helper/Button.hpp"

namespace chatterino {

enum class TitleBarButtonStyle {
    None = 0,
    Minimize = 1,
    Maximize = 2,
    Unmaximize = 4,
    Close = 8,
    User = 16,
    Settings = 32,
    StreamerMode = 64,
};

class TitleBarButton : public Button
{
public:
    TitleBarButton();

    TitleBarButtonStyle getButtonStyle() const;
    void setButtonStyle(TitleBarButtonStyle style_);

protected:
    void paintEvent(QPaintEvent *) override;

private:
    TitleBarButtonStyle style_{};
};

}  // namespace chatterino
