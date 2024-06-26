@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBStringInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)removeAll;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)getInt32:(int *)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (void)setInt32:(int)a0 forKey:(id)a1;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)enumerateKeysAndInt32sUsingBlock:(id /* block */)a0;
- (id)initWithInt32s:(const int *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
- (void)removeInt32ForKey:(id)a0;

@end
