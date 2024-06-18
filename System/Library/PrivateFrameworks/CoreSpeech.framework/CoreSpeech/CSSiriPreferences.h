@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;

- (id)init;
- (unsigned long long)internalUserClassification;
- (void).cxx_destruct;
- (id)initWithInstanceContext:(id)a0;
- (id)overrideAudioSessionActiveDelay;
- (id)serverAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

@end
