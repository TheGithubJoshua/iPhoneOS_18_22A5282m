@class PRSPosterConfiguration;

@interface PRSWallpaperObserverState : NSObject

@property (readonly, nonatomic) PRSPosterConfiguration *selectedLock;
@property (readonly, nonatomic) PRSPosterConfiguration *selectedHome;
@property (readonly, nonatomic) PRSPosterConfiguration *activeLock;
@property (readonly, nonatomic) PRSPosterConfiguration *activeHome;

- (id)init;
- (id)_initWithSelectedLock:(id)a0 selectedHome:(id)a1 activeLock:(id)a2 activeHome:(id)a3;
- (void).cxx_destruct;
- (id)description;

@end
