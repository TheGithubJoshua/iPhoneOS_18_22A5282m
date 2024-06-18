@class NSString;

@interface AXMDataPointValue : NSObject <NSCopying>

@property (nonatomic) double number;
@property (copy, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL isEmptyValue;

+ (id)emptyValue;
+ (id)valueWithCategory:(id)a0;
+ (id)valueWithNumber:(double)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIsEmptyValue:(BOOL)a0;

@end
