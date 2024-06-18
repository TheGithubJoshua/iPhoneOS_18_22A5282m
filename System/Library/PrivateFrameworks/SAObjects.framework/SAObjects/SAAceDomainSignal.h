@class NSArray, NSString;

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdHints;
@property (copy, nonatomic) NSString *domain;

+ (id)aceDomainSignalWithDictionary:(id)a0 context:(id)a1;
+ (id)aceDomainSignal;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
