@class SFCloudChannelsRequestItem, NSString, NSDictionary, NSData, SFDomainSubscriptionRequestItem, SFTopic;

@interface SFSubscribeForUpdatesCommand : SFCommand <SFSubscribeForUpdatesCommand, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFCloudChannelsRequestItem *cloudChannelsRequestItem;
@property (retain, nonatomic) SFDomainSubscriptionRequestItem *domainSubscriptionRequestItem;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end