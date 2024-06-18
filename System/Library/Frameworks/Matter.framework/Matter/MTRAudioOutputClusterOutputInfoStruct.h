@class NSNumber, NSString;

@interface MTRAudioOutputClusterOutputInfoStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSNumber *outputType;
@property (copy, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
