@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    BOOL _readyForDisplayReceived;
    BOOL _refreshCompletedReceived;
}

@property (readonly, nonatomic) BOOL hasCompleted;

- (void)didCancel;
- (void)didBegin;
- (id)initWithBlock:(id /* block */)a0;
- (void)didComplete;
- (void)didEnqueue;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
