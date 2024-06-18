@class WPDaemonServer, NSString, NSSet, NSIndexSet;

@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate>

@property (nonatomic) long long state;
@property (weak) WPDaemonServer *server;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isHomePod;
@property (nonatomic) BOOL restricted;
@property (nonatomic) BOOL testMode;
@property (retain, nonatomic) NSSet *cbManagers;
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (readonly, nonatomic) NSIndexSet *scanAllowlist;
@property (readonly, nonatomic) NSIndexSet *advAllowlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalBuild;
+ (void)initialize;
+ (id)advAllowlist;
+ (id)cbStateAsString:(long long)a0;
+ (void)initializeAdvDenylist:(id)a0 AdvAllowlist:(id)a1 ScanDenylist:(id)a2 ScanAllowlist:(id)a3;
+ (id)scanAllowlist;
+ (id)wpStateAsString:(long long)a0;

- (void)generateStateDump;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)cleanup;
- (void)cbManagerDidUpdateState:(id)a0;
- (void)scalablePipeManagerDidUpdateState:(id)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (id)generateStateDumpStrings;
- (void)dealloc;
- (void)update;
- (id)initWithServer:(id)a0 Name:(id)a1;
- (BOOL)isAdvertisingAllowlistedForType:(unsigned char)a0;
- (BOOL)isScanAllowlistedForType:(unsigned char)a0;
- (void)updateState:(long long)a0 Restricted:(BOOL)a1;

@end
