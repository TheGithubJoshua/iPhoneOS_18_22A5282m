@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {
    WFNetworkScanRecord *_currentNetwork;
}

@property BOOL currentNetworkIsDirected;
@property BOOL ipv4SelfAssigned;
@property BOOL hasNoGatewayIP;

- (void)setCurrentNetwork:(id)a0;
- (id)currentNetwork;
- (id)interfaceName;
- (void).cxx_destruct;

@end
