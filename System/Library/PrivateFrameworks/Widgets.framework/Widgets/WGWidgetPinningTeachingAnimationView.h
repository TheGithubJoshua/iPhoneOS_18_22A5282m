@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (retain, nonatomic) CALayer *materialsLayer;
@property (retain, nonatomic) CALayer *pagesLayer;
@property (retain, nonatomic) CALayer *page1Layer;
@property (retain, nonatomic, setter=_setTimerToNextState:) NSTimer *timerToNextState;
@property (retain, nonatomic) UILabel *debugLabel;

- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (unsigned long long)_stateFollowingState:(unsigned long long)a0;
- (void)_updateMaterials;
- (double)_durationForState:(unsigned long long)a0;

@end
