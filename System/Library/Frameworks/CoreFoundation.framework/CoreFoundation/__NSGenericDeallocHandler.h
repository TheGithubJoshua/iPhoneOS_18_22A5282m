@interface __NSGenericDeallocHandler {
    Class isa;
    id /* block */ _block;
}

+ (void)initialize;

- (void)release;
- (void)finalize;
- (unsigned long long)retainCount;
- (id)retain;

@end
