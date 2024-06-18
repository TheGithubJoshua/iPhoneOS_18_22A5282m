@class TRIPBMessage;

@interface TRIPBDoubleArray : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    double *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValue:(double)a0;

- (id)init;
- (void)addValues:(const double *)a0 count:(unsigned long long)a1;
- (void)addValue:(double)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)removeAll;
- (double)valueAtIndex:(unsigned long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addValuesFromArray:(id)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (id)initWithValueArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (void)insertValue:(double)a0 atIndex:(unsigned long long)a1;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;

@end
