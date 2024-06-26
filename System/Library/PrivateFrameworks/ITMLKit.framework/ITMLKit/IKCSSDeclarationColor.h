@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration

@property long long sourceType;
@property (retain, nonatomic) IKColor *color;

+ (id)_stringForColor:(id)a0 sourceType:(long long)a1;

- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (id)_colorFromParseObject:(id)a0 sourceType:(long long *)a1;
- (id)_keywordKolorFromParseToken:(id)a0;
- (id)_kolorFromParseObject:(id)a0 sourceType:(long long *)a1;
- (id)_linearGradientKolorFromParseFunction:(id)a0;
- (id)initWithParseDeclaration:(id)a0 info:(id)a1;

@end
