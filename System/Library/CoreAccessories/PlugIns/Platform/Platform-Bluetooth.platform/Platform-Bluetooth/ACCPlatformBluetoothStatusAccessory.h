@class NSString, NSMutableDictionary;

@interface ACCPlatformBluetoothStatusAccessory : NSObject

@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, nonatomic) NSMutableDictionary *componentList;

- (id)initWithUID:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
