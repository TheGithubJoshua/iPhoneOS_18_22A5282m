@class NSNumber, MTRAccessControlClusterAccessControlEntryStruct;

@interface MTRAccessControlClusterAccessControlEntryChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *adminNodeID;
@property (copy, nonatomic) NSNumber *adminPasscodeID;
@property (copy, nonatomic) NSNumber *changeType;
@property (copy, nonatomic) MTRAccessControlClusterAccessControlEntryStruct *latestValue;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
