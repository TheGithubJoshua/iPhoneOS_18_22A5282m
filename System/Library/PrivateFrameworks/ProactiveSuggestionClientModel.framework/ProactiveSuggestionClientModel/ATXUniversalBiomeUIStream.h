@class _PASLock, BMStoreConfig;

@interface ATXUniversalBiomeUIStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}

- (id)init;
- (id)_streamIdForConsumerSubType:(unsigned char)a0;
- (id)_validUIStreamConsumerSubTypes;
- (void).cxx_destruct;
- (id)streamIdentifiers;
- (id)genericEventPublisherFromStartTime:(double)a0 consumerSubType:(unsigned char)a1;
- (id)deprecatedGenericEventPublisherFromStartTime:(double)a0;
- (id)_innerStreamForConsumerSubType:(unsigned char)a0;
- (id)_innerStreamForStreamId:(id)a0;
- (id)initWithStoreConfig:(id)a0;
- (void)donateGenericUIEvent:(id)a0;
- (id)genericEventPublisherFromStartTime:(double)a0;

@end
