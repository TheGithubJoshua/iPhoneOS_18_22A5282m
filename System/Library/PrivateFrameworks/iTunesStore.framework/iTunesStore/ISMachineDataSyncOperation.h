@class NSString, NSData;

@interface ISMachineDataSyncOperation : ISOperation {
    unsigned long long _accountID;
    BOOL _allowsBootstrapCellularData;
    BOOL _hidesServerDrivenDialogs;
    NSData *_inputData;
    long long _protocolVersion;
    NSString *_syncState;
    NSString *_userAgent;
}

@property BOOL allowsBootstrapCellularData;
@property BOOL hidesServerDrivenDialogs;
@property long long protocolVersion;
@property (copy) NSString *userAgent;
@property (readonly) NSString *syncState;

- (void).cxx_destruct;
- (void)run;
- (id)_newSyncOperationWithClientData:(id)a0 machineIDData:(id)a1;
- (id)initWithAccountIdentifier:(unsigned long long)a0 syncData:(id)a1;

@end
