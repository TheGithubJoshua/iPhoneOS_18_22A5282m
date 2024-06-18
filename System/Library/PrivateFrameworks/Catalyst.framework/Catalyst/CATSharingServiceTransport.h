@class NSString, NSMutableArray, CATOperationQueue;
@protocol CATSharingConnection;

@interface CATSharingServiceTransport : CATTransport <CATSharingConnectionDelegate> {
    id<CATSharingConnection> mConnection;
    CATOperationQueue *mCatalystQueue;
    NSMutableArray *mReceivedMessages;
    BOOL mIsActive;
    BOOL mIsInvalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateIfNeeded;
- (void)invalidateConnection;
- (void)connection:(id)a0 receivedData:(id)a1;
- (id)initWithConnection:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)connectionClosed:(id)a0;
- (id)name;
- (void)suspendConnection;
- (void).cxx_destruct;
- (void)processReceivedMessages;
- (void)resumeConnection;

@end
