@class NSNumber;

@interface ChipAuthenticationInfo : SecurityInfo

@property long long protocol;
@property long long version;
@property (retain) NSNumber *optionalKeyId;

- (void).cxx_destruct;
- (id)description;

@end
