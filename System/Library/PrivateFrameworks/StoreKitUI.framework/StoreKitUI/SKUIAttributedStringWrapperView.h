@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView

@property (readonly, nonatomic) SKUIAttributedStringView *delegateView;

- (void)setBadgePlacement:(long long)a0;
- (void)setLayout:(id)a0;
- (double)baselineOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextColor:(id)a0;
- (id)layout;
- (double)firstBaselineOffset;
- (void).cxx_destruct;
- (long long)badgePlacement;
- (void)layoutSubviews;
- (void)setTextColorFollowsTintColor:(BOOL)a0;
- (BOOL)textColorFollowsTintColor;
- (long long)stringTreatment;
- (void)viewWasRecycled;
- (long long)firstLineTopInset;
- (id)requiredBadges;
- (void)setFirstLineTopInset:(long long)a0;
- (void)setRequiredBadges:(id)a0;
- (void)setStringTreatment:(long long)a0;
- (void)setTreatmentColor:(id)a0;
- (id)treatmentColor;
- (BOOL)usesTallCharacterSet;

@end
