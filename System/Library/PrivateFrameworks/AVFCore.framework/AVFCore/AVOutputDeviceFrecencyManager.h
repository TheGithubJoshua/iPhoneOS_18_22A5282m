@interface AVOutputDeviceFrecencyManager : NSObject

+ (id)_frecentsWriter;
+ (id)_applicationSupportPath;
+ (id)_frecentsFilePath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;
+ (id)_frecentsContainerPath;
+ (double)frecencyScoreForDeviceID:(id)a0;
+ (void)updateFrecencyListForDeviceID:(id)a0;

@end
