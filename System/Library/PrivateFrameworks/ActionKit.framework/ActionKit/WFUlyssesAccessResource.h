@class ICScheme;

@interface WFUlyssesAccessResource : WFAccessResource

@property (readonly, nonatomic) ICScheme *scheme;

+ (BOOL)refreshesAvailabilityOnApplicationResume;

- (void).cxx_destruct;
- (unsigned long long)status;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
