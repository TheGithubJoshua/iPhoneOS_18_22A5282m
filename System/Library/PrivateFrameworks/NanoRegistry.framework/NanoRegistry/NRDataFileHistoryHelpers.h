@interface NRDataFileHistoryHelpers : NSObject

+ (id)unarchiveDeviceHistory;
+ (id)unarchiveSecureProperties;
+ (BOOL)archiveDeviceHistory:(id)a0;
+ (BOOL)createMissingDates:(id)a0;
+ (BOOL)archiveSecureProperties:(id)a0;

@end
