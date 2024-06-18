@class NSMutableData, NSMutableSet, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property BOOL isRanging;
@property BOOL assertPower;

- (id)init;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addAdvertisingRequest:(id)a0;
- (BOOL)isValidWithAdditionalRequest:(id)a0;

@end
