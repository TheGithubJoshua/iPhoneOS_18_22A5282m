@class NSNumber, NSString, NSArray;

@interface MTRActionsClusterEndpointListStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *endpointListID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *endpoints;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
