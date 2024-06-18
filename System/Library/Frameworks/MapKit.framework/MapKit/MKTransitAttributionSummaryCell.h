@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorCell {
    _MKUILabel *_attributionLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *attributionSummary;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_contentSizeCategoryDidChange;
- (void)setAttribution:(id)a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)_moreString;
- (BOOL)_newStationCardUIEnabled;
- (void)_updateConstraintValues;

@end
