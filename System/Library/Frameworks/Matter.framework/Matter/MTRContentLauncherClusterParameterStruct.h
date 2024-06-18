@class NSNumber, NSString, NSArray;

@interface MTRContentLauncherClusterParameterStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSArray *externalIDList;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
