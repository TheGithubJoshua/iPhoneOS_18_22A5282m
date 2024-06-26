@interface MPCFWrapper : NSObject

@property (nonatomic, getter=isNullRef) BOOL nullRef;
@property (readonly, nonatomic) const void *refValue;

- (id)description;
- (void)dealloc;
- (id)initWithCFType:(void *)a0;

@end
