@class NSString;
@protocol AFAudioPowerProviding;

@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding>

@property (weak, nonatomic) id<AFAudioPowerProviding> previousProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServices;

- (void)didEndAccessPower;
- (void).cxx_destruct;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)willBeginAccessPower;
- (id)getCurrentAudioPowerProvider;

@end
