@class NSSet, UIImageView, FMFTintedActivityIndicatorView, FMFRefreshWrapperButton;

@interface FMFRefreshBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) FMFRefreshWrapperButton *wrapperButton;
@property (retain, nonatomic) FMFTintedActivityIndicatorView *aiv;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) id locateNotification;
@property (retain, nonatomic) NSSet *locations;

- (void)startAnimating;
- (void)stopAnimating;
- (void)locatingInProgressChanged:(id)a0;
- (void)addLocation:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)accessibilityHint;
- (void)dealloc;
- (BOOL)isAnimating;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateLocations;
- (void)_updateLocateInProgress;
- (BOOL)anyLocationIsUpdating;
- (void)localTapped;
- (void)removeLocationForHandle:(id)a0;

@end
