@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (readonly, nonatomic, getter=_dragSnappingConfiguration) _UIDragSnappingFeedbackGeneratorConfiguration *dragSnappingConfiguration;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)draggedObjectLifted;
- (void)_stopLanding;
- (void)_startLanding;
- (void)draggedObjectLanded;
- (void)objectSnapped;

@end
