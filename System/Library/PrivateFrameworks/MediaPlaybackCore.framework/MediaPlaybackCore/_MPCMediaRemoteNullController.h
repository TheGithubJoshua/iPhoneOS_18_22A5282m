@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}

+ (BOOL)_shouldRegisterForNotifications;

- (id)playQueueIdentifiersForRequest:(void *)a0;
- (id)contentItemForIdentifier:(id)a0;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (id)_init;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange { long long x0; long long x1; })a0;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)playbackState;
- (long long)playbackStateCacheState;
- (id)playingIdentifier;
- (void).cxx_destruct;
- (long long)supportedCommandsCacheState;
- (void)invalidateAllTokens;
- (id)contentItemArtworkForContentItemIdentifier:(id)a0 artworkIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 completion:(id /* block */)a2;
- (long long)contentItemCacheStateForIdentifier:(id)a0;
- (id)supportedCommands;
- (long long)playingIdentifierCacheState;

@end
