@interface _NSBPlistMappedString : NSString {
    unsigned long long payload;
}

+ (void)initialize;
+ (id)createStringWithOffset:(long long)a0 intoMappingData:(id)a1;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)smallestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)fastestEncoding;
- (unsigned long long)length;

@end
