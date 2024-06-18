@interface SXWeakReferenceObject : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)withObject:(id)a0;

- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
