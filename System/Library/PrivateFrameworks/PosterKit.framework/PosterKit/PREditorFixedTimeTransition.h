@class CSProminentDisplayViewController;

@interface PREditorFixedTimeTransition : NSObject

@property (retain, nonatomic) CSProminentDisplayViewController *sourceTimeViewController;
@property (retain, nonatomic) CSProminentDisplayViewController *destinationTimeViewController;

- (void)updateInteractiveTransition:(double)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)animationKey;
- (id)initWithSourceTimeViewController:(id)a0 destinationTimeViewController:(id)a1 anchorView:(id)a2;

@end
