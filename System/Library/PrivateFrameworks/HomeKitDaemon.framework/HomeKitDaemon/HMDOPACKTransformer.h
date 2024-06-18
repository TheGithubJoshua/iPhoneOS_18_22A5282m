@interface HMDOPACKTransformer : HMDValueTransformer

+ (Class)valueClass;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueFromOPACK:(id)a0 error:(id *)a1;
+ (id)reverseTransformedValue:(id)a0 error:(id *)a1;
+ (id)transformedValue:(id)a0 error:(id *)a1;
+ (id)OPACKFromValue:(id)a0 error:(id *)a1;
+ (BOOL)isStructuredDataCompatible;

- (id)valueFromOPACK:(id)a0 error:(id *)a1;
- (id)OPACKFromValue:(id)a0 error:(id *)a1;

@end
