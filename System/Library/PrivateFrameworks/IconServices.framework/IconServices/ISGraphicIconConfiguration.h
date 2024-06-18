@class NSArray;

@interface ISGraphicIconConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *symbolColors;
@property (copy, nonatomic) NSArray *enclosureColors;
@property (nonatomic) long long renderingMode;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
