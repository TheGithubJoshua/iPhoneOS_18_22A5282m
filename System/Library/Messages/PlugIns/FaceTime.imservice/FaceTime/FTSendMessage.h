@class NSArray, NSNumber, NSData;

@interface FTSendMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSArray *peers;
@property (copy) NSNumber *reason;
@property (copy) NSData *selfPushToken;

- (id)bagKey;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)requiredKeys;

@end
