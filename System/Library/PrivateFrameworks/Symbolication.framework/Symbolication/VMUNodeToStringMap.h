@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setString:(id)a0 forNode:(unsigned int)a1;
- (unsigned int)uniquedStringCount;
- (void)dealloc;
- (id)stringForNode:(unsigned int)a0;
- (unsigned int)_indexForString:(id)a0;
- (unsigned int)count;

@end
