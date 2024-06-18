@class NSNumber, NSArray;

@interface MTRScenesClusterExtensionFieldSet : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *clusterId;
@property (copy, nonatomic) NSArray *attributeValueList;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
