@class BMComputeSourceClient, BMStreamDatastoreWriter, BMStreamsAccessClient;

@interface BMStoreSource : BMSource {
    BMStreamDatastoreWriter *_writer;
    BMStreamsAccessClient *_accessClient;
    BOOL _shouldSendMetrics;
}

@property (readonly, nonatomic) BOOL isPublicStream;
@property (readonly, nonatomic) BMComputeSourceClient *computeSource;

- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1;
- (void)sendEvent:(id)a0;
- (void)sendEvent:(id)a0 timestampNumber:(id)a1 notifyCompute:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 storeConfig:(id)a1 accessClient:(id)a2;
- (void)sendEvent:(id)a0 timestamp:(double)a1;

@end
