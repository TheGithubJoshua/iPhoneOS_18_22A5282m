@class NSString;

@interface __NSFontExtraData : NSObject {
    double _ascender;
    double _lineHeight;
    struct { unsigned char _isSystemFont : 1; unsigned char _isIBScaledFont : 1; unsigned char _hasVerticalMetrics : 2; } _fFlags;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

- (BOOL)_hasVerticalMetricsWithPlatformFont:(struct __CTFont { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToExtraData:(id)a0;
- (void)dealloc;

@end
