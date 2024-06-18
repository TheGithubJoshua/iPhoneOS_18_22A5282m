@class NSNumber;

@interface MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *productID;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
