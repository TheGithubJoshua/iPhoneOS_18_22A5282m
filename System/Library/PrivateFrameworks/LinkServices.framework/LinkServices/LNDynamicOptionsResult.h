@class NSArray, LNStaticDeferredLocalizedString;

@interface LNDynamicOptionsResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL usesIndexedCollation;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *promptLabel;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSections:(id)a0 usesIndexedCollation:(BOOL)a1 promptLabel:(id)a2;

@end
