@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioSessionInfoProviding;
- (id)clientForAudioProviding;

@end
