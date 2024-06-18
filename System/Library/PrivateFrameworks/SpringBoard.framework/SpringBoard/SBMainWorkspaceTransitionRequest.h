@class SBMainWorkspace, NSMutableArray;
@protocol SBBannerUnfurlSourceContextProviding;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest {
    NSMutableArray *_completionTasks;
}

@property (readonly, nonatomic) SBMainWorkspace *workspace;
@property (nonatomic) long long source;
@property (nonatomic) BOOL shouldPreventEmergencyNotificationBannerDismissal;
@property (retain, nonatomic) id<SBBannerUnfurlSourceContextProviding> bannerUnfurlSourceContextProvider;
@property (nonatomic) BOOL shouldPreventDismissalOfUnrelatedTransientOverlays;
@property (copy, nonatomic) id /* block */ transactionProvider;
@property (copy, nonatomic) id /* block */ transactionConfigurator;
@property (readonly, copy, nonatomic) id /* block */ completionBlock;

+ (id)ancillaryTransitionRequestsForTransitionRequest:(id)a0;

- (void)declineWithReason:(id)a0;
- (void)modifyTransientOverlayContext:(id /* block */)a0;
- (id)addCompletionHandler:(id /* block */)a0;
- (BOOL)isMainWorkspaceTransitionRequest;
- (id)_initWithWorkspace:(id)a0 displayConfiguration:(id)a1;
- (void)_invalidateCompletionTasks;
- (void)finalize;
- (id)copyMainWorkspaceTransitionRequest;
- (void).cxx_destruct;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)compactDescriptionBuilder;
- (void)setTransientOverlayContext:(id)a0;
- (void)dealloc;

@end
