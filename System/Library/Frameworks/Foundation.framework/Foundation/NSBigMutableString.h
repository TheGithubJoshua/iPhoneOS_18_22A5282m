@class NSData;

@interface NSBigMutableString : NSMutableString {
    struct { unsigned char isStorage : 1; unsigned char isUnicode : 1; unsigned char hasBOM : 1; unsigned char swap : 1; unsigned char immutable : 1; unsigned int  : 27; } flags;
    unsigned long long length;
    union { struct { NSData *data; char *dataBytes; } d; struct { struct __CFStorage *storage; } s; } contents;
}

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (BOOL)_copyStorage:(struct __CFStorage **)a0 encoding:(unsigned long long *)a1;
- (id)_newBigSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wantsMutable:(BOOL)a1 zone:(struct _NSZone { } *)a2;
- (id)initWithString:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_setData:(id)a0 encoding:(unsigned long long)a1;
- (BOOL)_setStorage:(struct __CFStorage { } *)a0 encoding:(unsigned long long)a1;
- (void)_checkForInvalidMutationWithSelector:(SEL)a0;
- (id)initWithStorage:(struct __CFStorage { } *)a0 length:(unsigned long long)a1 isUnicode:(BOOL)a2;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (BOOL)_isMarkedAsImmutable;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getData:(id *)a0 encoding:(unsigned long long *)a1;
- (void)dealloc;
- (BOOL)_isCString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)_markAsImmutable;
- (unsigned long long)length;
- (BOOL)_copyDataFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
