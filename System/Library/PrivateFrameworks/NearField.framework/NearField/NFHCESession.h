@class NSString;
@protocol NFHCESessionDelegate;

@interface NFHCESession : NFSession <NFHostEmulationSessionCallbacks> {
    id<NFHCESessionDelegate> _delegate;
}

@property id<NFHCESessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (void).cxx_destruct;
- (void)didEndUnexpectedly;
- (void)didReceiveAPDU:(id)a0;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (id)readAPDU:(id *)a0;
- (void)readAPDUWithCompletion:(id /* block */)a0;
- (id)sendAPDU:(id)a0;
- (id)startEmulation;
- (id)stopEmulation;

@end
