@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt64BoolDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void)setBool:(BOOL)a0 forKey:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0;
- (void)removeAll;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (BOOL)getBool:(BOOL *)a0 forKey:(unsigned long long)a1;
- (void)enumerateKeysAndBoolsUsingBlock:(id /* block */)a0;
- (id)initWithBools:(const BOOL *)a0 forKeys:(const unsigned long long *)a1 count:(unsigned long long)a2;
- (void)removeBoolForKey:(unsigned long long)a0;

@end
