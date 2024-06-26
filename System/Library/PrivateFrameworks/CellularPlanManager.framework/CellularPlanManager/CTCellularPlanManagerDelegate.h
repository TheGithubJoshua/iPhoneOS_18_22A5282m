@class NSString;

@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pendingTransferPlanInfoDidUpdate;
- (void)localPlanInfoDidUpdate:(id)a0;
- (void)remoteProvisioningDidBecomeAvailable;
- (void)carrierInfoDidUpdate;
- (void)planInfoDidUpdate;

@end
