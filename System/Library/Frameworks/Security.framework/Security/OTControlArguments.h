@class NSString;

@interface OTControlArguments : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *contextID;
@property (retain) NSString *containerName;
@property (retain) NSString *altDSID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (id)initWithContainerName:(id)a0 contextID:(id)a1 altDSID:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)makeConfigurationContext;

@end
