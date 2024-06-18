@interface PHAssetDeleteOptions : NSObject <NSCopying>

@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly;

- (id)initWithXPCDict:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeToXPCDict:(id)a0;

@end
