@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (BOOL)isEqualToString:(id)a0;
- (id)init;
- (BOOL)_tryRetain;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (unsigned long long)hash;
- (unsigned long long)cStringLength;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getCString:(char *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isCString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0;
- (const char *)UTF8String;
- (BOOL)_isDeallocating;
- (unsigned long long)length;

@end
