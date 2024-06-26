@class NSString, SBPlatterHomeGestureManager;

@interface SBDashBoardPlatterHomeGestureManager : NSObject <SBPlatterHomeGestureManagerDelegate, CSPlatterHomeGestureManaging> {
    SBPlatterHomeGestureManager *_platterHomeGestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_platterHomeGestureManager;
- (void).cxx_destruct;
- (long long)platterHomeGestureManager:(id)a0 zStackParticipantIdentifierForParticipant:(id)a1;
- (id)platterHomeGestureManager:(id)a0 windowForParticipant:(id)a1;
- (id)homeGestureContextForViewController:(id)a0;
- (void)unregisterHomeGestureContextForViewController:(id)a0;
- (BOOL)_isViewControllerPlatterHomeGestureParticipant:(id)a0;

@end
