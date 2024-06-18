@class ARCoachingOverlayView;

@interface ARCoachingState : NSObject

@property (weak, nonatomic) ARCoachingOverlayView *view;
@property (readonly, nonatomic) long long requirements;
@property (readonly, nonatomic) BOOL isViewActiveForState;

- (void)enter;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)exit;
- (id)doAction:(long long)a0;

@end
