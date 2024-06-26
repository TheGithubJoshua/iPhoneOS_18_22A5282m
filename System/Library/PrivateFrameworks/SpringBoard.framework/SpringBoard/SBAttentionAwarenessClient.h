@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSString, NSObject;
@protocol OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

@interface SBAttentionAwarenessClient : NSObject <BSInvalidatable> {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_identifier;
}

@property (weak, nonatomic) id<SBAttentionAwarenessClientDelegate> delegate;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_suspend;
- (id)init;
- (void)resetAttentionLostTimeout;
- (void)_handleAttentionAwarenessEvent:(id)a0;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_resetAttentionLostTimeout;
- (void)_resume;

@end
