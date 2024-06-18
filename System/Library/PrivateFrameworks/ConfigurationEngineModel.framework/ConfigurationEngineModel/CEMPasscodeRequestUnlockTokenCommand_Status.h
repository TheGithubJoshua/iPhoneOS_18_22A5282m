@class NSSet, NSData;

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSData *statusUnlockToken;

+ (id)buildRequiredOnly;
+ (id)buildWithUnlockToken:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end