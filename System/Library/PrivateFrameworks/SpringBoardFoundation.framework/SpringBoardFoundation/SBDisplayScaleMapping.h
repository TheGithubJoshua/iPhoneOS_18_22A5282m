@class NSString, NSDictionary;

@interface SBDisplayScaleMapping : NSObject {
    double _nativePPI;
    unsigned long long _scaleMethod;
    NSDictionary *_displayScaleToLogicalScale;
}

@property (readonly, copy, nonatomic) NSString *displayHardwareIdentifier;
@property (readonly, nonatomic) unsigned long long supportedScales;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;

+ (id)withDisplay:(id)a0 allowWirelessDisplays:(BOOL)a1 useNativeSize:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_defaultScale;
- (id)createDefaultSettings;
- (id)initWithDisplayHardwareIdentifier:(id)a0 nativePPI:(double)a1 referenceSize:(struct CGSize { double x0; double x1; })a2 scaleMethod:(unsigned long long)a3 supportedScales:(unsigned long long)a4 displayScaleToLogicalScale:(id)a5;
- (double)logicalScaleForDisplayScale:(unsigned long long)a0;
- (double)ppiForDisplayScale:(unsigned long long)a0;

@end
