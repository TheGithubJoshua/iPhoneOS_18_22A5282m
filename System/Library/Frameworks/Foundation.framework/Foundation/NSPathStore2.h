@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)a0;
+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;

- (BOOL)isEqualToString:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringByAppendingPathComponent:(id)a0;
- (id)stringByDeletingLastPathComponent;
- (id)stringByExpandingTildeInPath;
- (id)lastPathComponent;
- (unsigned long long)hash;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringByDeletingPathExtension;
- (BOOL)isAbsolutePath;
- (id)pathExtension;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)pathComponents;
- (unsigned long long)length;
- (id)stringByStandardizingPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;

@end
