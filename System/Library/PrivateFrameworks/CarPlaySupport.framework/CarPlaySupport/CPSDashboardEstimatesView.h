@class UIStackView, NSString, UILabel, CPSTravelEstimatesStringFormatter;

@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying>

@property (retain, nonatomic) UILabel *etaLabel;
@property (retain, nonatomic) UILabel *timeRemainingLabel;
@property (retain, nonatomic) UILabel *distanceRemainingLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_labelFont;
- (void)layoutSubviews;
- (void)updateTripEstimates:(id)a0;

@end
