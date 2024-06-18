@class NSOperationQueue, NSString;

@interface VSAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)preferredVideoFormat;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })screenSize;
- (id)timeZone;
- (id)systemLanguage;
- (BOOL)isTimeZoneSet;
- (unsigned long long)preferredVideoPreviewFormat;
- (id)storeFrontCountryCode;

@end
