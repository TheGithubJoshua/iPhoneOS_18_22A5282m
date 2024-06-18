@class UILabel, NSArray, CCChartView;

@interface SHSHeadphoneNotificationTableCell : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    NSArray *_constraints;
    NSArray *_notificationData;
    CCChartView *_notificationChart;
    BOOL _shouldHideChart;
}

- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)accessibilityConstraintsWithVariableBindings:(id)a0 metrics:(id)a1 hideChart:(BOOL)a2;
- (id)createNotificationChart;
- (id)notificationChartSpec;
- (id)regularConstraintsWithVariableBindings:(id)a0 metrics:(id)a1 hideChart:(BOOL)a2;

@end
