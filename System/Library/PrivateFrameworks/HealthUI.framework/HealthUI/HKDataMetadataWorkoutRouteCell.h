@class UIImageView, NSLayoutConstraint, UIActivityIndicatorView;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell

@property (retain, nonatomic) UIImageView *routeImageView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;

- (id)init;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setRouteImage:(id)a0;

@end
