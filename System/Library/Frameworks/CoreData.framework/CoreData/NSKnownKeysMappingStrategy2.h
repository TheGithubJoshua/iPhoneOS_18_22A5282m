@interface NSKnownKeysMappingStrategy2 : NSKnownKeysMappingStrategy1

- (id)init;
- (id)initForKeys:(id)a0;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)_setupForKeys:(id *)a0 count:(unsigned long long)a1 table:(void *)a2 inData:(id)a3;

@end
