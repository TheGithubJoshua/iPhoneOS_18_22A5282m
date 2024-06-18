@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

@property (readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (id)_stats_key;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)userInteractionCancelled;
- (void).cxx_destruct;
- (void)dropTargetUpdated;
- (void)positionUpdated;

@end
