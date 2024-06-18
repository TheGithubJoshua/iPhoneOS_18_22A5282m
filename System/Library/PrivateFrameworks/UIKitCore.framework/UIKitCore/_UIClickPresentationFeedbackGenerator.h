@interface _UIClickPresentationFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (id)initWithCoordinateSpace:(id)a0;
- (void)dragged;
- (id)_clickConfiguration;
- (void)popped;
- (void)previewed;

@end
