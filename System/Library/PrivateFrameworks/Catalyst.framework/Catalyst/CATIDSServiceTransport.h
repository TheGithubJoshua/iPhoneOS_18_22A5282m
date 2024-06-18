@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)invalidateConnection;
- (void)tryReportingInvalidation;
- (void)connection:(id)a0 receivedData:(id)a1;
- (id)initWithConnection:(id)a0;
- (id)operationToSendMessage:(id)a0;
- (void)connectionClosed:(id)a0;
- (id)name;
- (void)suspendConnection;
- (void).cxx_destruct;
- (void)resumeConnection;
- (void)serviceReceiveQueue;

@end
