@class NSString;

@interface BMLocationHashedCoordinates : BMEventBase <BMStoreData>

@property (readonly, nonatomic) unsigned long long locationHashAt300Meters;
@property (nonatomic) BOOL hasLocationHashAt300Meters;
@property (readonly, nonatomic) unsigned long long locationHashAt2500Meters;
@property (nonatomic) BOOL hasLocationHashAt2500Meters;
@property (readonly, nonatomic) unsigned long long locationHashAt156Kilometers;
@property (nonatomic) BOOL hasLocationHashAt156Kilometers;
@property (readonly, nonatomic) double distanceFromHomeOfCurrentLocationInMeters;
@property (nonatomic) BOOL hasDistanceFromHomeOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromWorkOfCurrentLocationInMeters;
@property (nonatomic) BOOL hasDistanceFromWorkOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromSchoolOfCurrentLocationInMeters;
@property (nonatomic) BOOL hasDistanceFromSchoolOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromGymOfCurrentLocationInMeters;
@property (nonatomic) BOOL hasDistanceFromGymOfCurrentLocationInMeters;
@property (readonly, nonatomic) int floor;
@property (nonatomic) BOOL hasFloor;
@property (readonly, nonatomic) int speedBucket;
@property (readonly, nonatomic) int altitudeBucket;
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
- (id)initWithLocationHashAt300Meters:(id)a0 locationHashAt2500Meters:(id)a1 locationHashAt156Kilometers:(id)a2 distanceFromHomeOfCurrentLocationInMeters:(id)a3 distanceFromWorkOfCurrentLocationInMeters:(id)a4 distanceFromSchoolOfCurrentLocationInMeters:(id)a5 distanceFromGymOfCurrentLocationInMeters:(id)a6 floor:(id)a7 speedBucket:(int)a8 altitudeBucket:(int)a9;

@end
