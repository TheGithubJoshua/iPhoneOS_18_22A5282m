@interface TIContextTokens : NSObject

@property (nonatomic) void *context;

- (id)init;
- (id)initWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1 contextStringTokens:(id)a2;
- (void)clear;
- (void *)lmContext;
- (const struct TITokenID { unsigned int x0; unsigned int x1; } *)begin;
- (unsigned long long)size;
- (void)appendToken:(struct TITokenID { unsigned int x0; unsigned int x1; })a0 string:(id)a1;
- (void)dealloc;
- (void)popBack;

@end
