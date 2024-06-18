@class NSString;

@interface AXDataPointValue : NSObject <NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;

+ (id)valueWithCategory:(id)a0;
+ (id)valueWithNumber:(double)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
