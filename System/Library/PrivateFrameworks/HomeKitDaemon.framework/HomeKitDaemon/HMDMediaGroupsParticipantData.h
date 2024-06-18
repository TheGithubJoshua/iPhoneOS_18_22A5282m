@class NSArray, HMMediaDestination, HMMediaDestinationControllerData;

@interface HMDMediaGroupsParticipantData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying>

@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;
@property (copy) NSArray *backedUpGroups;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeToProtoBufferData;
- (id)initWithProtoBufferData:(id)a0;
- (id)initWithDestination:(id)a0 destinationControllerData:(id)a1 backedUpGroups:(id)a2;

@end
