@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *associationFailure;
@property (copy, nonatomic) NSNumber *status;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
