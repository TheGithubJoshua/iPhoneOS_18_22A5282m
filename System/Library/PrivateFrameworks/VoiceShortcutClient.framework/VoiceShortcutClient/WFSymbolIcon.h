@class NSString, WFColor, WFIconBackground;

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFColor *symbolColor;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)iconWithSymbolColor:(id)a0 background:(id)a1;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithSymbolName:(id)a0 background:(id)a1;
- (id)initWithSymbolName:(id)a0 symbolColor:(id)a1 background:(id)a2;

@end
