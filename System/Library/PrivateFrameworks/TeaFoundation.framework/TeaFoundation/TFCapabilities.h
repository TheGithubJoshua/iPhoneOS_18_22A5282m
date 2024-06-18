@interface TFCapabilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)hasExtendedColorDisplay;
+ (BOOL)isTall;
+ (BOOL)isHardwareKeyboardAttached;

@end
