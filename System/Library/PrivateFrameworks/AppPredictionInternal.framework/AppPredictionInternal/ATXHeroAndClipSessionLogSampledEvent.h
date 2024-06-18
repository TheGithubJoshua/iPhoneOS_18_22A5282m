@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)init;
- (id)location;
- (void).cxx_destruct;
- (id)bundleId;
- (BOOL)isClip;
- (id)initFromLaunch:(id)a0;

@end
