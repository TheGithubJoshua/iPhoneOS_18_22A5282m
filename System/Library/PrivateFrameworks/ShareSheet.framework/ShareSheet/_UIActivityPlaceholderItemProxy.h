@interface _UIActivityPlaceholderItemProxy : NSProxy <NSCopying> {
    id _uikit_placeholderItem;
}

@property (readonly, nonatomic) id placeholderItem;

+ (id)unproxiedItemForItem:(id)a0;
+ (id)unproxiedItemsForItems:(id)a0;

- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (Class)superclass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isProxy;
- (id)initWithPlaceholderItem:(id)a0;
- (id)placeholderItem;

@end
