@class _TtC18MobileTimerSupport18MTSessionsProvider;

@interface MTSessionsManager : NSObject

@property (retain, nonatomic) _TtC18MobileTimerSupport18MTSessionsProvider *provider;

+ (BOOL)supportsSessions;

- (id)init;
- (void).cxx_destruct;
- (id)contextWithTimer:(id)a0;
- (void)createSessionWithTimer:(id)a0;
- (void)localSetup;
- (BOOL)hasActiveTimerSession;
- (void)finishSessionWithTimer:(id)a0;
- (void)updateSessionWithTimer:(id)a0;
- (long long)sessionStateForTimer:(id)a0;

@end
