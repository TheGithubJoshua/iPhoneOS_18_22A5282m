@class NSArray, LNDeferredLocalizedString;

@interface LNDynamicOptionsSection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNDeferredLocalizedString *title;
@property (readonly, nonatomic) NSArray *options;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0 title:(id)a1;

@end
