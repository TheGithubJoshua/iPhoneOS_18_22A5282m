@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (void)setGuidanceType:(unsigned long long)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)enterState;
- (unsigned long long)type;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;

@end
