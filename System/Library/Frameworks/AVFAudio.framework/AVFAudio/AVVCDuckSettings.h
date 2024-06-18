@class AVVCDuckOverride, AVVCDuckFadeDuration;

@interface AVVCDuckSettings : NSObject

@property (retain, nonatomic) AVVCDuckOverride *duckOverride;
@property (retain, nonatomic) AVVCDuckFadeDuration *fadeDuration;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
