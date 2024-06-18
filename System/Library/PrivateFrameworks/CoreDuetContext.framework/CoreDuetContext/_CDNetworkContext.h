@interface _CDNetworkContext : NSObject

+ (id)downloadPowerCostKey;
+ (id)interfaceClassKey;
+ (id)keyPathForWiredConnectionStatus;
+ (long long)wifiInterfaceClass:(id)a0;
+ (long long)cellDownloadCost:(id)a0;
+ (id)uploadPowerCostKey;
+ (id)connectionQualityKey;
+ (long long)qualityForPath:(id)a0 inContext:(id)a1;
+ (id)keyPathForWiFiConnectionStatus;
+ (long long)cellInterfaceClass:(id)a0;
+ (long long)interfaceClassForPath:(id)a0 inContext:(id)a1;
+ (long long)cellUploadCost:(id)a0;
+ (id)keyPathForCellConnectionStatus;
+ (long long)wiredQuality:(id)a0;
+ (BOOL)networkingAvailable:(id)a0;
+ (long long)wiredInterfaceClass:(id)a0;
+ (BOOL)cellInterfaceUp:(id)a0;
+ (id)loiKey;
+ (long long)cellQuality:(id)a0;
+ (id)interfaceUpKey;
+ (BOOL)inexpensiveNetworkingAvailable:(id)a0;
+ (long long)wifiQuality:(id)a0;
+ (id)predictionKey;

@end
