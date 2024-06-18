@class NSString, NSNumber;

@interface MTRChannelClusterLineupInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *operatorName;
@property (copy, nonatomic) NSString *lineupName;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSNumber *lineupInfoType;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
