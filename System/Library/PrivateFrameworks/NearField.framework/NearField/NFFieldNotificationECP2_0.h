@class NSArray, NSData;

@interface NFFieldNotificationECP2_0 : NFFieldNotification

@property (readonly) BOOL odaRequired;
@property (readonly) unsigned long long terminalType;
@property (readonly) unsigned char terminalSubType;
@property (readonly, retain) NSArray *tciArray;
@property (readonly, retain) NSData *openLoopSchemeBitfield;
@property (readonly, retain) NSData *homeKitSchemeDataPayload;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) unsigned int pairingMode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
