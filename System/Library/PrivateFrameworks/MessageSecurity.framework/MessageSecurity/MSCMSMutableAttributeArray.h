@class NSData, NSMutableArray;

@interface MSCMSMutableAttributeArray : NSMutableArray

@property (retain) NSMutableArray *attributes;
@property (retain) NSMutableArray *genericAttributes;
@property (retain) NSData *encodedAttributeSet;

+ (id)createAttributeArrayFromAttributeSetRaw:(struct heim_base_data { unsigned long long x0; void *x1; } *)a0 error:(id *)a1;

- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)removeAttributes:(id)a0;
- (void)addObject:(id)a0;
- (void)reset;
- (unsigned long long)count;
- (id)getAttributesWithType:(id)a0;
- (id)calculateAttributesWithDigest:(id)a0 error:(id *)a1;
- (id)encodeAttributesWithError:(id *)a0;
- (id)encodeImplicitAttributesWithError:(id *)a0;

@end
