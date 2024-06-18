@class UILabel, NSString, UIView;

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *chevronView;
@property (copy, nonatomic) NSString *title;

- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setupSubviews;

@end
