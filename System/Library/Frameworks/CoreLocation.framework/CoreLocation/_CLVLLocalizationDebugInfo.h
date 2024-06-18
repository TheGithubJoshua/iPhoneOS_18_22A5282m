@class _CLVLLocalizationMaps488Details;

@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLVLLocalizationMaps488Details *maps488Details;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;
- (id)initWithVLLocalizationDebugInfo:(id)a0;

@end
