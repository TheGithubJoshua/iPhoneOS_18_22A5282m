@class NSString, IKViewElement;

@interface _TVShadowViewElementID : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) IKViewElement *viewElement;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewElement:(id)a0;

@end
