@class NSString, _AFAudioPowerXPCSharedMemory;

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding> {
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndAccessPower;
- (void).cxx_destruct;
- (BOOL)getAveragePower:(float *)a0 andPeakPower:(float *)a1;
- (void)willBeginAccessPower;
- (id)initWithXPCWrapper:(id)a0;

@end
