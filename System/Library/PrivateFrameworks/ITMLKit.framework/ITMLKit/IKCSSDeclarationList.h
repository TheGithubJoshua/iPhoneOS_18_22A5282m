@class IKMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>

@property (readonly, nonatomic) IKMutableArray *declarations;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)addDeclaration:(id)a0;
- (id)lastDeclaration;
- (id)declarationAtIndex:(unsigned long long)a0;
- (id)firstDeclaration;

@end
