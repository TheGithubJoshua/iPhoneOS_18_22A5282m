@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (id)init;
- (id)elementAtIndex:(unsigned long long)a0;
- (int)fillMode;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize { double x0; double x1; })size;
- (void)setFillMode:(int)a0;
- (void)addElement:(id)a0;
- (unsigned long long)elementCount;
- (BOOL)stroked;
- (void)setStroked:(BOOL)a0;

@end
