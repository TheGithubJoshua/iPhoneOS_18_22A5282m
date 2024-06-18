@interface RMSPairingCredentials : NSObject

@property (nonatomic) unsigned long long requirementType;
@property (nonatomic) unsigned long long characterCount;

- (id)initWithProtobuf:(id)a0;
- (id)protobuf;

@end
