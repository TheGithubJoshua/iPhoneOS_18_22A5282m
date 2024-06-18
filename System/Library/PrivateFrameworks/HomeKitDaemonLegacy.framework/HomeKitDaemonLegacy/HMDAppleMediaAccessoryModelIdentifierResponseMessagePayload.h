@class NSUUID, NSString;

@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject <HMMessageEncoding>

@property (readonly, copy) NSUUID *modelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)payloadCopy;
- (id)initWithModelIdentifier:(id)a0;

@end
