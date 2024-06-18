@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (void)setPreferredRate:(float)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (id)newCommandEventWithPlaybackRate:(float)a0;
- (float)preferredRate;

@end
