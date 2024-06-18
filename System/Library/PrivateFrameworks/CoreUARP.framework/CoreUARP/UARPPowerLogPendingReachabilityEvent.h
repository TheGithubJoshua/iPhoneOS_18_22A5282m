@class NSString, NSUUID;

@interface UARPPowerLogPendingReachabilityEvent : NSObject

@property (readonly) NSString *modelNumber;
@property (readonly) NSUUID *uuid;
@property (copy) NSString *activeFirmwareVersion;
@property (copy) NSString *stagedFirmwareVersion;
@property (readonly) BOOL allDataPresent;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initModelNumber:(id)a0 uuid:(id)a1;

@end