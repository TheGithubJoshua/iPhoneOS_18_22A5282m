@interface SeymourUI.AirplayAndSettingsControlsView : UIStackView {
    void /* unknown type, empty encoding */ onTapAirplay;
    void /* unknown type, empty encoding */ onTapSettings;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ airplayButton;
    void /* unknown type, empty encoding */ airplayBackground;
    void /* unknown type, empty encoding */ settingsButton;
    void /* unknown type, empty encoding */ settingsBackground;
}

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)airplayTouchUpInside:(id)a0;
- (void)settingsTouchUpInside:(id)a0;

@end
