@class NSUUID, NSNumber;

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSNumber *queueTimeout;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)privateDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1 queueTimeout:(id)a2;

@end
