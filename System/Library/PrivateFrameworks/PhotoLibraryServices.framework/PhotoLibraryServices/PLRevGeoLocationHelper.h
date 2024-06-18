@interface PLRevGeoLocationHelper : NSObject

+ (id)autoNaviCountryCode;
+ (BOOL)isAutoNaviRevGeoProvider:(id)a0;
+ (BOOL)isAutoNaviCountryCode:(id)a0;
+ (void)simulateAutoNaviForBlock:(id /* block */)a0;
+ (id)autoNaviProviderID;
+ (id)appleProviderID;
+ (id)currentRevGeoProvider;
+ (BOOL)isCurrentRevGeoProviderAutoNavi;

@end
