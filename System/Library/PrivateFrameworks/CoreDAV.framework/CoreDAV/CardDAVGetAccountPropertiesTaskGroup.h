@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes;
@property (readonly, nonatomic) NSSet *directoryGatewayURLs;

- (id)homeSet;
- (void).cxx_destruct;
- (id)description;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (id)_copyAccountPropertiesPropFindElements;
- (id)directoryGatewayURL;

@end
