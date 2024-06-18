@interface BWInferenceDataRequirement : NSObject <NSCopying>

@property (readonly, nonatomic) long long identifier;

- (id)initWithDataRequirement:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
