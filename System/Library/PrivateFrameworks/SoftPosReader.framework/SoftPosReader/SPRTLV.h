@class NSData, NSArray;

@interface SPRTLV : NSObject {
    unsigned int _tag;
    NSData *_value;
    NSArray *_children;
}

@property (readonly, nonatomic) unsigned int tag;
@property (readonly, nonatomic) NSData *value;
@property (readonly, nonatomic) NSArray *children;

+ (id)TLVWithTag:(unsigned int)a0 unsignedChar:(unsigned char)a1;
+ (id)TLVWithTag:(unsigned int)a0 unsignedLongValue:(unsigned int)a1;
+ (id)simpleTLVsWithData:(id)a0;
+ (id)_intToData:(unsigned int)a0;
+ (id)_parseTLVs:(const char **)a0 end:(const char *)a1 simple:(BOOL)a2 definite:(BOOL)a3;
+ (id)TLVSsWithBytes:(const void *)a0 length:(unsigned long long)a1 requireDefiniteEncoding:(BOOL)a2;
+ (id)TLVsWithData:(id)a0 requireDefiniteEncoding:(BOOL)a1;
+ (id)TLVWithTag:(unsigned int)a0 value:(id)a1;
+ (id)TLVWithTag:(unsigned int)a0 fromData:(id)a1;
+ (id)TLVWithTag:(unsigned int)a0 children:(id)a1;
+ (id)TLVsWithData:(id)a0;
+ (id)simpleTLVsWithTag:(unsigned int)a0 fromData:(id)a1;
+ (id)TLVWithData:(id)a0 simple:(BOOL)a1;
+ (id)scanData:(id)a0 forTag:(unsigned int)a1;

- (id)childrenWithTag:(unsigned int)a0;
- (BOOL)containsValue:(id)a0;
- (unsigned int)valueAsUnsignedLong;
- (id)asData;
- (void).cxx_destruct;
- (id)childWithTag:(unsigned int)a0;
- (id)valueAsString;
- (id)description;
- (unsigned short)valueAsUnsignedShort;
- (id)asMutableData;
- (id)valueAsHexString;
- (unsigned long long)valueAsUnsignedLongLong;
- (BOOL)containsTag:(unsigned int)a0;

@end
