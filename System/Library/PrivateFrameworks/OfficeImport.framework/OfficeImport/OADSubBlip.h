@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
    int mType;
    NSData *mData;
    struct CGSize { double width; double height; } mSizeInPoints;
    int mSizeInBytes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrame;
}

- (id)data;
- (void)setType:(int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setData:(id)a0;
- (int)type;
- (int)sizeInBytes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isLoaded;
- (id)initWithData:(id)a0 type:(int)a1;
- (void)setSizeInBytes:(int)a0;
- (struct CGSize { double x0; double x1; })sizeInPoints;
- (void)setSizeInPoints:(struct CGSize { double x0; double x1; })a0;

@end
