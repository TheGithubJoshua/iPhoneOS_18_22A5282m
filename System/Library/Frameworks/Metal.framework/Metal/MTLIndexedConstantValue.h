@interface MTLIndexedConstantValue : NSObject

@property (readonly) unsigned long long index;
@property (readonly) unsigned long long dataType;
@property (readonly) char *data;

- (id)description;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)describe;
- (id)initWithValue:(const void *)a0 type:(unsigned long long)a1 index:(unsigned long long)a2;

@end
