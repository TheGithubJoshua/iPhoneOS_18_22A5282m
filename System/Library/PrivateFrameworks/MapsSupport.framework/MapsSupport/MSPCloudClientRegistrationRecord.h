@class NSUUID, NSDate;

@interface MSPCloudClientRegistrationRecord : NSObject

@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (nonatomic) unsigned long long desiredEpoch;
@property (nonatomic) unsigned long long earliestCompatibleEpoch;
@property (readonly, nonatomic) BOOL isChanged;
@property (retain, nonatomic) NSDate *lastRegistrationDate;

- (id)initWithClientIdentifier:(id)a0;
- (id)recordRepresentation;
- (id)initWithRecord:(id)a0;
- (void).cxx_destruct;

@end