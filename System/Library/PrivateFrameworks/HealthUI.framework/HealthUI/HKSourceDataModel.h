@class HKSource, UIImage, NSDictionary;

@interface HKSourceDataModel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKSource *source;
@property BOOL installed;
@property (retain) UIImage *icon;
@property (copy) NSDictionary *purposeStrings;

- (id)initWithSource:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
