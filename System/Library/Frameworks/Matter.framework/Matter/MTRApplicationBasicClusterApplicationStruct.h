@class NSNumber, NSString;

@interface MTRApplicationBasicClusterApplicationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *catalogVendorID;
@property (copy, nonatomic) NSNumber *catalogVendorId;
@property (copy, nonatomic) NSString *applicationID;
@property (copy, nonatomic) NSString *applicationId;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
