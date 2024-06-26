@class DBHomeKitBoolCharacteristic, DBHomeKitDoorStateCharacteristic;

@interface DBGarageDoor : DBHomeKitService

@property (readonly, nonatomic) BOOL current;
@property (readonly, nonatomic) DBHomeKitDoorStateCharacteristic *doorStateCharacteristic;
@property (readonly, nonatomic) DBHomeKitDoorStateCharacteristic *targetDoorStateCharacteristic;
@property (readonly, nonatomic) DBHomeKitBoolCharacteristic *obstructionDetectedCharacteristic;
@property (readonly, nonatomic) long long doorState;
@property (nonatomic) long long targetDoorState;
@property (readonly, nonatomic) BOOL obstructionDetected;

+ (void)load;
+ (id)serviceType;
+ (id)observerProtocol;

- (BOOL)hasError;
- (void)removeObserver:(id)a0;
- (id)description;
- (void)addObserver:(id)a0;
- (BOOL)_tracksLastUsed;
- (void)_characteristicDidUpdate:(id)a0;
- (long long)_doorStateForCharacteristic:(id)a0;
- (BOOL)_shouldUpdateLastUsedForCharacteristic:(id)a0;
- (id)managedCharacteristics;
- (BOOL)pendingRead;
- (BOOL)pendingWrite;

@end
