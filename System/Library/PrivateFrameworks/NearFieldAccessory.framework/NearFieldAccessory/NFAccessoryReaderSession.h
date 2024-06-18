@class NSString;
@protocol NFAccessoryReaderSessionDelegate;

@interface NFAccessoryReaderSession : NFAccessorySession <NFReaderSessionAccessoryCallbacks> {
    id<NFAccessoryReaderSessionDelegate> _delegate;
}

@property (weak) id<NFAccessoryReaderSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)didEndUnexpectedly;
- (BOOL)connectTag:(id)a0 error:(id *)a1;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)didDetectTags:(id)a0;
- (void)didTerminate:(id)a0;
- (BOOL)disconnectTag:(id *)a0;
- (id)enableContinuousWave:(BOOL)a0 withFrequencySweep:(BOOL)a1;
- (BOOL)startPollingForTechnology:(unsigned int)a0 error:(id *)a1;
- (id)transceive:(id)a0 error:(id *)a1;
- (id)setTagDataRate:(int)a0;
- (BOOL)checkNdefSupport:(BOOL *)a0 andWrite:(BOOL *)a1 error:(id *)a2;
- (BOOL)checkPresence:(id *)a0;
- (id)readNDEF:(id *)a0;
- (id)readTypeIdentifier:(id *)a0;
- (id)sendAccessoryProtocolCommand:(id)a0 outError:(id *)a1;
- (id)sendAuthProtocolCommand:(id)a0 error:(id *)a1;
- (BOOL)startPolling:(id *)a0;
- (BOOL)stopPolling:(id *)a0;

@end
