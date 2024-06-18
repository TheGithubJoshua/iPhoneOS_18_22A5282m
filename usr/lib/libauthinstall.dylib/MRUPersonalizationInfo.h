@class NSString, NSDictionary, NSData, MRUHardwareInfo;

@interface MRUPersonalizationInfo : NSObject <NSCoding> {
    NSString *_componentName;
    NSString *_objectName;
}

@property (readonly) MRUHardwareInfo *hardwareInfo;
@property (readonly) NSString *ticketName;
@property (readonly) NSString *tag;
@property (readonly) NSString *boardIDPropertyName;
@property (readonly) NSString *chipIDPropertyName;
@property (readonly) NSString *ecidPropertyName;
@property (readonly) NSString *noncePropertyName;
@property (readonly) NSString *productionModePropertyName;
@property (readonly) NSString *securityDomainPropertyName;
@property (readonly) NSString *securityModePropertyName;
@property (readonly) NSData *nonce;
@property (readonly) NSDictionary *asDictionary;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)initWithHardwareInfo:(id)a0 componentName:(id)a1 objectName:(id)a2 nonce:(id)a3;

@end
