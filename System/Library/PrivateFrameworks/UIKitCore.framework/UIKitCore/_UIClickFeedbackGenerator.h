@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (id)initWithCoordinateSpace:(id)a0;
- (id)_clickConfiguration;
- (void)pressedDown;
- (void)pressedUp;

@end
