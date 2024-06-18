@class NSDictionary;

@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (id)keyboardSender;
+ (id)touchScreenDigitizerSender;
+ (id)keyboardSenderForDisplayUUID:(id)a0;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)a0;
+ (id)tvRemoteSender;
+ (id)trackpadSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { } *)a0;
+ (id)gamepadSender;
+ (id)_senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)senderWithProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)pencilDigitizerSender;
+ (id)mouseSender;
+ (id)globalPositionSender;
+ (id)senderWithProperties:(id)a0;
+ (id)supplyMissingStandardProperties:(id)a0 senderID:(unsigned long long)a1;
+ (id)naturalInputCollectionSender;
+ (id)_cachedPropertiesOrCacheIfNeeded:(id)a0 senderID:(unsigned long long)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
