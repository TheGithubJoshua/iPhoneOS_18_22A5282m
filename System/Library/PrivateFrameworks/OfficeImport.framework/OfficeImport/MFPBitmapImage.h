@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage {
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize { double width; double height; } mPixelSize;
    struct CGSize { double width; double height; } mPointSize;
}

- (struct CGSize { double x0; double x1; })pointSize;
- (void).cxx_destruct;
- (id)initWithBitmapData:(id)a0;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 unit:(int)a2 effect:(id)a3;
- (id)phoneImage;

@end