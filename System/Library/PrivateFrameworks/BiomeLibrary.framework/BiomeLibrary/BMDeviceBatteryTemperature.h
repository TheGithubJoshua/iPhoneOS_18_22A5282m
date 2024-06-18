@class NSString;

@interface BMDeviceBatteryTemperature : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int temperature;
@property (nonatomic) BOOL hasTemperature;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (id)initWithTemperature:(id)a0;

@end