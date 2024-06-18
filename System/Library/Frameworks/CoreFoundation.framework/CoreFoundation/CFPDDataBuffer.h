@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromCFData:(struct __CFData { } *)a0;
+ (id)newBufferFromFile:(int)a0 allowMappingIfSafe:(BOOL)a1;
+ (id)newBufferFromPropertyList:(void *)a0;

- (void)endAccessing;
- (id)copyXPCData;
- (BOOL)validatePlist;
- (struct __CFData { } *)copyCFData;
- (void *)copyPropertyListWithMutability:(unsigned long long)a0 error:(struct __CFError **)a1;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(id /* block */)a0;
- (BOOL)purgable;
- (BOOL)beginAccessing;
- (unsigned long long)length;
- (void *)bytes;

@end
