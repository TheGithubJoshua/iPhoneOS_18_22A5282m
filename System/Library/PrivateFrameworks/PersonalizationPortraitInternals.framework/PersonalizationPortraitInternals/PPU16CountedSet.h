@class NSMutableDictionary;

@interface PPU16CountedSet : NSObject {
    void *_vectorStorage;
    NSMutableDictionary *_dictStorage;
    struct type { unsigned char __lx[24]; } _vectorInlineStorage;
}

- (id)init;
- (unsigned short)countForValue:(unsigned short)a0;
- (void)addValue:(unsigned short)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)uniqueValueCount;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)dictionary;

@end
