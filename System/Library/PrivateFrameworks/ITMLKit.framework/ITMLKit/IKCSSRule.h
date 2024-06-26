@class IKCSSMediaQuery, IKCSSSelectorList, IKCSSDeclarationList;

@interface IKCSSRule : NSObject <NSCopying>

@property (retain, nonatomic) IKCSSSelectorList *selectorList;
@property (retain, nonatomic) IKCSSDeclarationList *declarationList;
@property (readonly, nonatomic) IKCSSMediaQuery *mediaQuery;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
