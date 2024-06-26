@class NSString;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) NSString *appGroupIdentifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
