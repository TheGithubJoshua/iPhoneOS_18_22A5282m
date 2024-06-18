@class NSArray, NSDictionary, NSData, NSNumber;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *selfBlob;
@property (copy) NSData *selfPushToken;
@property (copy) NSNumber *selfNATType;
@property (copy) NSData *selfNatIP;
@property (copy) NSDictionary *regionInformation;
@property (copy) NSArray *peers;
@property (copy) NSArray *canonicalizedPeers;
@property (copy) NSArray *pushTokensToExclude;

- (id)bagKey;
- (id)messageBody;
- (id)init;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)requiredKeys;

@end
