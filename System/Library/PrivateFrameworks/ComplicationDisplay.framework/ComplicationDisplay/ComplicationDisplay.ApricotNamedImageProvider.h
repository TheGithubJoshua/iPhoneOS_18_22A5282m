@interface ComplicationDisplay.ApricotNamedImageProvider : CLKImageProvider {
    void /* unknown type, empty encoding */ named;
    void /* unknown type, empty encoding */ finalized;
    void /* unknown type, empty encoding */ _maxSize;
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ weight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } maxSize;

- (id)initPrivate;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithForegroundAccentImage:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;

@end
