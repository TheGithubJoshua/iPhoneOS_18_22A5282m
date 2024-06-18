@interface MobileTimerSupport.MTSessionsProvider : NSObject {
    void /* unknown type, empty encoding */ activities;
}

+ (BOOL)supportsSessions;

- (id)init;
- (void)updateSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void)createSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)restoreSessionsWithCompletion:(id /* block */)a0;
- (void)finishSessionWithTimerId:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasActiveTimerSession;

@end
