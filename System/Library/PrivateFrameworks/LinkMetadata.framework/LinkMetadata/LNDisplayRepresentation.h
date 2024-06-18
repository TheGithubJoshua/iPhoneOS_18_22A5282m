@class LNImage, LNStaticDeferredLocalizedString;

@interface LNDisplayRepresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *subtitle;
@property (readonly, nonatomic) LNImage *image;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2;

@end
