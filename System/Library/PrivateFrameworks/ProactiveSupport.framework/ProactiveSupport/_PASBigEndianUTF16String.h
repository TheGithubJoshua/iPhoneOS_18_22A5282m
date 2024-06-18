@interface _PASBigEndianUTF16String : NSString <NSCopying> {
    unsigned long long _length;
    const void *_swapped;
    id _backingObject;
}

- (id)init;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;

@end