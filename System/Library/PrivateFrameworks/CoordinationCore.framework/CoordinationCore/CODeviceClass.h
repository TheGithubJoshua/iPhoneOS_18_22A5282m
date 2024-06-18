@interface CODeviceClass : NSObject

+ (BOOL)isAppleTV;
+ (BOOL)isPad;
+ (int)deviceClass;
+ (BOOL)isAudioAccessory;
+ (BOOL)isPhone;

@end
