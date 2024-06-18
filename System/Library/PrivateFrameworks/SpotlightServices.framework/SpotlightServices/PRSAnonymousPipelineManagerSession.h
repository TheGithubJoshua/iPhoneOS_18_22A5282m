@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

@property (retain, nonatomic) PARSession *session;

+ (id)sharedManager;

- (id)init;
- (void)sendCustomFeedback:(id)a0;
- (void)setFeedbackDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setPARSession:(id)a0;

@end
