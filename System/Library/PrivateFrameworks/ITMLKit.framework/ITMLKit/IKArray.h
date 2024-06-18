@class NSMutableArray;

@interface IKArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>

@property (retain, nonatomic) id obj0;
@property (retain, nonatomic) id obj1;
@property (retain, nonatomic) NSMutableArray *arrayStore;

+ (id)array;

- (id)lastObject;
- (id)objectAtIndexedSubscript:(long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (id)firstObject;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(long long)a0;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_setupWithNSArray:(id)a0;
- (id)initWithNSArray:(id)a0;
- (id)toNSArray;

@end
