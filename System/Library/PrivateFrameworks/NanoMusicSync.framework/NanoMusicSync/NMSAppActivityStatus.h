@class NSString;

@interface NMSAppActivityStatus : NSObject

@property (readonly, nonatomic) NSString *bundleID;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (double)_defaultDormancyInterval;
- (BOOL)_exceedsDormancyInterval:(double)a0 forDate:(id)a1;
- (BOOL)isAppContentDormant;
- (BOOL)isAppContentDormantWithInterval:(double)a0;
- (BOOL)isAppDownloadingDormant;
- (BOOL)isAppDownloadingDormantWithInterval:(double)a0;

@end
