@class NSString, MAAsset, VSTrialVoice, VSVoiceAsset;

@interface VSVoiceAssetSelection : NSObject

@property (retain) VSVoiceAsset *voiceData;
@property (retain) MAAsset *asset;
@property (retain) VSTrialVoice *trialVoice;
@property (retain) NSString *builtInVoicePath;
@property (retain, nonatomic) NSString *voicePath;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } voicePathLock;

- (id)init;
- (id)key;
- (double)preferenceScore;
- (BOOL)isDownloading;
- (id)initWithTrialVoice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (unsigned long long)size;
- (void)dealloc;
- (id)descriptiveKey;

@end
