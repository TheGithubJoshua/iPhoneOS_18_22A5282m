@class NSNumber, NSMutableDictionary;

@interface HFAccessoriesToReadSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSNumber *transportKey;

- (void).cxx_destruct;
- (long long)count;
- (id)initWithTransportType:(id)a0;
- (void)addCharacteristic:(id)a0;
- (void)markCharacteristicAsRead:(id)a0 withLogger:(id)a1;

@end
