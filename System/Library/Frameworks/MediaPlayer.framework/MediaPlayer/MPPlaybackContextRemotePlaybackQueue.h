@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)siriAssetInfo;
- (id)privateListeningOverride;
- (void).cxx_destruct;
- (id)description;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)a0;
- (id)asMusicPlaybackContextWithError:(id *)a0;
- (id)initWithPlaybackContext:(id)a0;
- (BOOL)isRequestingImmediatePlayback;
- (id)siriRecommendationIdentifier;
- (id)siriWHAMetricsInfo;

@end
