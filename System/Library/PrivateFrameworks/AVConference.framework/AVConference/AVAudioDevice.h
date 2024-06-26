@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {
    BOOL _isBluetoothDevice;
    BOOL _isLineIn;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) BOOL inputAvailable;
@property (readonly, nonatomic) BOOL outputAvailable;
@property (readonly, nonatomic, getter=isPreferredDevice) BOOL preferredDevice;
@property (readonly, nonatomic) BOOL isBluetoothDevice;

- (unsigned long long)hash;
- (id)initWithDeviceID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (void)createName;
- (BOOL)isValidDevice;
- (BOOL)isBuiltInDevice;
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)a0;
- (BOOL)copyStreamIDArray:(unsigned int **)a0 length:(unsigned int *)a1;
- (void)createNameForScope:(unsigned int)a0;
- (void)createUID;
- (BOOL)deviceHasNonTapStreamsInStreamList:(unsigned int *)a0 length:(unsigned int)a1;
- (unsigned int)getDataSourceControlID;
- (BOOL)hasRealInputStream;
- (BOOL)isAggregableDevice;
- (BOOL)isSomethingConnectedToJack;
- (BOOL)isStreamAvailableForScope:(unsigned int)a0;
- (BOOL)isValidInputDevice;
- (id)newAudioObjectStringPropertyWithSelector:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;

@end
