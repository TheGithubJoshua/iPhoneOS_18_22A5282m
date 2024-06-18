@class NSData, NSNumber;

@interface MTRGeneralDiagnosticsClusterTestEventTriggerParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *enableKey;
@property (copy, nonatomic) NSNumber *eventTrigger;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
