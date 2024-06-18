@class UIView;

@interface NCNotificationSummaryOnboardingButton : UIButton {
    UIView *_backgroundView;
}

- (void)setHighlighted:(BOOL)a0;
- (void)_configureBackgroundViewIfNecessary;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutBackgroundView;

@end
