@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long capacity;

- (id)removeLastObject;
- (id)initWithCoder:(id)a0;
- (id)lastObject;
- (id)firstObject;
- (id)objectsMatchingPredicate:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)getObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)bufferCopy;
- (id)dropOldestElement;
- (void)encodeWithCoder:(id)a0;
- (id)removeWithPredicate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)add:(id)a0;
- (id)removeUntilFirstPredicateFail:(id)a0;
- (id)firstObjectMatchingTest:(id /* block */)a0 withOptions:(unsigned long long)a1;
- (unsigned long long)count;
- (id)insert:(id)a0 at:(unsigned long long)a1;

@end
