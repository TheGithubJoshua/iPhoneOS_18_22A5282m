@class NSNumber, NSArray;

@interface MTRScenesClusterAttributeValuePair : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSArray *attributeValue;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
