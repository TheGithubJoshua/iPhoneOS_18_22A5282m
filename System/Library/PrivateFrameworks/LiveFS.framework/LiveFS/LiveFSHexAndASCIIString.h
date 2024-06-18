@class NSData;

@interface LiveFSHexAndASCIIString : NSString {
    NSData *data;
}

- (id)data;
- (id)init;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;

@end
