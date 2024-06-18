@class IKColor;

@interface SKUIPlaceholderImageKey : NSObject {
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 imageTreatment:(long long)a1 placeholderBackgroundColor:(id)a2;

@end
