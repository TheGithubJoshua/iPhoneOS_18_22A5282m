@class HFCameraScrubberReachabilityEventContainer, CALayer;

@interface HUCameraEventReachabilityCell : UICollectionViewCell

@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) HFCameraScrubberReachabilityEventContainer *reachabilityEvent;
@property (retain, nonatomic) CALayer *badgeLayer;
@property (nonatomic) BOOL needsFullDashedLineWidth;

+ (id)backgroundColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)updateWithReachabilityEventContainer:(id)a0 mode:(unsigned long long)a1;

@end
