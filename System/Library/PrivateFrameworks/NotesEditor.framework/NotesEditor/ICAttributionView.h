@class NSMapTable, UIImageView, ICAttributionViewConfiguration, UILabel, UIView;

@interface ICAttributionView : UIView

@property (retain, nonatomic) UILabel *attributionLabel;
@property (retain, nonatomic) UIView *attributionClippingView;
@property (retain, nonatomic) UILabel *timestampLabel;
@property (retain, nonatomic) UIImageView *disclosureImageView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) NSMapTable *childAttributionViews;
@property (retain, nonatomic) NSMapTable *highlightViews;
@property (readonly, nonatomic) ICAttributionViewConfiguration *configuration;

- (void)updateVisibility;
- (id)initWithConfiguration:(id)a0;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)updateContentAnimated:(BOOL)a0;
- (void)updatePositionAndVisibility;

@end
